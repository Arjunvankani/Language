class PrimeNUM
{
	static void checkPrime(int n)
	{
		int m=n/2;
		int flag=0;
		if(n==0||n==1)
		{
			System.out.print(n+"Not prime....");		
		}
		else
		{
			for(int i=2;i<m;i++)
			{
			if(n%i==0)
			 {
				System.out.print(n+"Is not prime");
				flag=1;
				break;
			 }
			}
		}
		if(flag==0)
		{
					System.out.print(n+"Is prime Num.......");
		}
		 public static void main(String args[]){    
  checkPrime(1);  
  checkPrime(3);  
  checkPrime(17);  
  checkPrime(20);  

	}
}