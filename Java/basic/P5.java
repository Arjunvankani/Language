import java.util.Scanner;
class P5
{
	public static void main(String args[])
	{
		int a[] = new int[3],i,j,temp;
		Scanner n = new Scanner(System.in);
		System.out.println("Enter your int number...\n");
		for(i=0;i<a.length;i++)
		{
			a[i] = n.nextInt();
		}	
		
		for(i=0;i<=a.length-1;i++)
		{
			for(j=0;j<=a.length-1;j++)
			{
				if(a[j+1]>a[j])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
				
			}
		}
		
		System.out.println("Your array in decresing oreder....\n");
		for(i=0;i<a.length-1;i++)
		{
			System.out.println(a[i]);
		}
	}
}