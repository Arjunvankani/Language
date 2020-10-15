class S1
{
	int i;
	String name;
	public static void main(String args[])
	{
		S1 s1 = new S1();
		S1 s2 = new S1();
		s1.i = 101;
		s1.name = "Maths";
		System.out.println(s1.i);
		System.out.println(s1.name);
		
		System.out.println();
		System.out.println(s2.i);
		System.out.println(s2.name);
	}
}