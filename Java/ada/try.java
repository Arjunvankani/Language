import java.util.Scanner;
class try
{
	public static void main(String args[])
	{
		Scanner s= new Scanner(System.in);
		System.out.println("Enter your character ...");
		String ch = s.next();
		String split[] = ch.split(" ");
        for ( String st: split)
		{
			System.out.println(st);
			}
    
	}
}   