import java.lang.reflect.Array;

class HelloWorld
{
    public static void main(String argv[])
    {
	System.out.println("Hello world!");
	for(int i=0; i<Array.getLength(argv); i++)
	    {
		System.out.println(argv[i]);
	    }
    }
}
