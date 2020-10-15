class Ai
{
		int a;
		Ai(int a)
		{
			this.a = a++;  System.out.print(a);
			
		}
		public static void main(String args[])
		{
			Ai a=new Ai(5);
		}
}