import java.util.Scanner;
class P2
{
	public static void main(String args[])
	{
			float a,b,c,d,e,f,x,y;
			System.out.println("Welcome to creamer world......\n");
			Scanner n = new Scanner(System.in);
			System.out.println("Enter your aX+bY=e for  a,b,e.....\n");
			a = n.nextFloat();
			b = n.nextFloat();
			e = n.nextFloat();
			System.out.println("Enter your cX+dY=f for  c,d,f.....\n");
			c = n.nextFloat();
			d = n.nextFloat();
			f = n.nextFloat();
			
			x = (e*d-b*f)/(a*d-b*c);
			y = (a*f-e*c)/(a*d-b*c);
			
			System.out.println("Your answer of x is ...."+x);
			System.out.println("Your answer of y is ...."+y);
	}	
}