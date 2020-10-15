class fibo
{
	static int a=0,b=1,c=0;
		static void printfibo(int count)
		{
			if(count>0)
			{
				c=a+b;
				a=b;
				b=c;
				System.out.print(" " +c);
				printfibo(count-1);
			}
		}
		public static void main(String args [])
		{
		int count=15;
		System.out.print(a+" "+b);
		printfibo(count-2);
		}
}		