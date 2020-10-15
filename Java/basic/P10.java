import java.util.Scanner;
class P10
{
	static void rev(int n)
	{
		int r=0,rem;
		
		while(n!=0)
		{
			rem=n%10;
			r=r*10+rem;
			n=n/10;
		}
		System.out.println(r);
		
	}
	
	public static void main(String arg[])
	{
		Scanner n = new Scanner(System.in);
		int a[]=new int[10];
		System.out.println("Enter your num...\n");
		for(int i=0;i<a.length;i++)
		{
			a[i]= n.nextInt();
		}
		System.out.println("Your result .......\n");
		for(int i=0;i<a.length;i++)
		{
			rev(a[i]);
		}
	}
}