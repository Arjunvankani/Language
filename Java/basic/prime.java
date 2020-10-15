class prime
{
	public static void main(String args[])
	{
		int n=31;
		int m=n/2,flag=0;
		if(n==0||n==1)
		{
			System.out.print(n+"Is not prime Num ......");
		}
		else
		{
			for(int i=2;i<m;i++)
			{
				if(n%i==0)
				{
					System.out.print(n+ "Is not prime Num ....");
					flag=1;
					break;
				}
			}
		}
		if(flag==0)
		{
			System.out.print(n+"Is prime Num.......");
		}
	
	}		
}