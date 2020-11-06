
#include <iostream>
#include <fcntl.h> 
#include <string.h>
#include <termios.h>
#include <unistd.h>

#include <sys/ioctl.h>
#include <sys/kd.h>

enum curr_state
{
    Num,
    Caps,
    Scroll
};

// Forward declarations
char* GetMorseCode(char c);

int main(int argc, char *argv[])
{
    if (argc == 1) {
        return 0;
    }

    char *string = argv[1];

    // tty0 is the keyboard
    int keyboard_handle = open("/dev/tty0", O_RDWR);
    curr_state kb_state = Num;
    unsigned char state;
    int rtn = ioctl(keyboard_handle, KDGETLED, &state);
    char c = *string;

    //state = ~LED_SCR;
    //ioctl(keyboard_handle, KDSETLED, state);

    while(c != '\0')
    {
        char* morse = GetMorseCode(c);
        printf("Char %c\n", c);

        for(int i=0; i < strlen(morse); i++)
        {
            printf("Current morse symbol: %c\n", morse[i]);
            state = LED_SCR;
            ioctl(keyboard_handle, KDSETLED, state);

            if (morse[i] == '.') {
                sleep(2);
            } else if (morse[i] == '-') {
                sleep(4);
            }

            state = ~LED_SCR;
            ioctl(keyboard_handle, KDSETLED, state);
            sleep(1);
        }
        c = *(++string);
    }

    close(keyboard_handle);
}


char* GetMorseCode(char c)
{
    char t = (char)tolower(c);
  // refer to the Morse table 
  // image attached in the article 
  switch (t) { 
    case 'a': 
        return ".-"; 
    case 'b': 
        return "-..."; 
    case 'c': 
        return "-.-."; 
    case 'd': 
        return "-.."; 
    case 'e': 
        return "."; 
    case 'f': 
        return "..-."; 
    case 'g': 
        return "--."; 
    case 'h': 
        return "...."; 
    case 'i': 
        return ".."; 
    case 'j': 
        return ".---"; 
    case 'k': 
        return "-.-"; 
    case 'l': 
        return ".-.."; 
    case 'm': 
        return "--"; 
    case 'n': 
        return "-."; 
    case 'o': 
        return "---"; 
    case 'p': 
        return ".--."; 
    case 'q': 
        return "--.-"; 
    case 'r': 
        return ".-."; 
    case 's': 
        return "..."; 
    case 't': 
        return "-"; 
    case 'u': 
        return "..-"; 
    case 'v': 
        return "...-"; 
    case 'w': 
        return ".--"; 
    case 'x': 
        return "-..-"; 
    case 'y': 
        return "-.--"; 
    // for space 
    case 'z': 
        return "--.."; 
  }
  return "";
}
