
#include <iostream>
#include <fcntl.h> 
#include <string.h>
#include <termios.h>
#include <unistd.h>

#include <arpa/inet.h>
#include <sys/ioctl.h>
#include <sys/kd.h>
#include <sys/socket.h>
#include <sys/types.h>

enum curr_state
{
    Num,
    Caps,
    Scroll
};

// Forward declarations
void MorseCodeLED(int argc, char *argv[]);
char* GetMorseCode(char c);
void SocketTest();

int main(int argc, char *argv[])
{
    MorseCodeLED(argc, argv);
    //SocketTest();
}

void MorseCodeLED(int argc, char *argv[])
{
    if (argc == 1) {
        return;
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
            state = LED_CAP;
            ioctl(keyboard_handle, KDSETLED, state);

            if (morse[i] == '.') {
                usleep(60000);
            } else if (morse[i] == '-') {
                usleep(200000);
            }

            state = ~LED_CAP;
            ioctl(keyboard_handle, KDSETLED, state);
            usleep(100000);
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

void SocketTest()
{
    int listenfd;
    int connfd;
    sockaddr_in serv_addr;
    char send_buff[1025];

    // Open the network socket.
    if (( listenfd = socket( AF_INET, SOCK_STREAM, 0 ) ) < 0 )
    {
        printf("socket error\n");
        exit(-1);
    }

    // Zero out the structure and memory buffer.
    memset(&serv_addr, '0', sizeof(serv_addr));
    memset(send_buff, '0', sizeof(send_buff));

    // Bind to a listen server.
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);
    serv_addr.sin_port = htons(5000); 
    bind(listenfd, (struct sockaddr*)&serv_addr, sizeof(serv_addr));

    // Start listening.
    listen(listenfd, 10);

    while(true)
    {
        // 'accept' is synchronous, so this loop is blocked until an incoming request is made.
        connfd = accept(listenfd, NULL, NULL);
        printf("Incoming request accepted!\n");
        time_t ticks = time(NULL);

        // Write back the time of the request (according to the server), then close the connection.
        snprintf(send_buff, sizeof(send_buff), "%.24s\r\n", ctime(&ticks));
        write(connfd, send_buff, strlen(send_buff)); 
        close(connfd);


        sleep(1);
    }
}