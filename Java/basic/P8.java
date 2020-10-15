import java.util.Scanner;
class P8
{
	public static void main(String args[])
	{
		int num,i=2;
		Scanner n = new Scanner(System.in);
		System.out.println("Enter num....\n");
		num = n.nextInt();
		while(i<=num)
		{	
			if(num%i==0)
			{
				System.out.print(" "+i);
				num = num/i;
			}
			else{
				i++;
			}

		}
	}
}