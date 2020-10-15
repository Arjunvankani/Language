class S2
{
	int id;
	String n;
	int age;
	void Info(int i,String n,int a)
	{
		id=i;
		n=n;
		age=a;
	}
	void dispay()
	{
		System.out.println("Your infomation is ...."+id+"  "+n+"  "+age);
	}
	public static void main(String args[])
	{
		System.out.println("WElcome ...\n");
		S2 s1 = new S2();
		S2 s2 = new S2();
		s1.Info(101,"Yes",21);
		s2.Info(102,"NO",23);
		s1.dispay();
		s2.dispay();
	}	
}	