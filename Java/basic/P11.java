import java.util.Scanner;
class P11
{
	public static void main(String arg[])
	{
		int a[][] = new int[6][6];
		int b=0,c=0,raw=0,co=0,i,j;
		Scanner n = new Scanner(System.in);
		System.out.println("Enter your value....\n");
		for(i=0;i<a.length;i++)
		{
			for(j=0;j<a.length;j++)
			{
				 a[i][j]=(int)((Math.random()*5)%2);
				 
			}
		}
		System.out.println("Your matrix is .....\n");
		for(i=0;i<a.length;i++)
		{
			for(j=0;j<a.length;j++)
			{
				System.out.print(" "+a[i][j]);
				 
			}
			System.out.println();
		}
		
		
		for(i=0;i<a.length;i++)
		{
			b=0;
			for(j=0;j<a.length;j++)
			{
				if(a[i][j]==1)
				{
					b++;
				} 
			}
			if(b%2!=0)
			{
			System.out.println("Row --- "+i+" have ODD no of is ....");
		    }
		}
		for(i=0;i<a.length;i++)
		{
			c=0;
			for(j=0;j<a.length;j++)
			{
				if(a[i][j]==1)
				{
					c++;
				} 
			}
			if(c%2!=0)
			{
			System.out.println("Column --- "+i+" have ODD no of is ....");
		    }
		}
	}
}