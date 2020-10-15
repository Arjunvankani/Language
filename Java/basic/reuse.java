class re
{
	int no = 101;
	String name = "Reusing of class..";
}
class reuse extends re
{
	float salary = 70000;
	public static void main(String args[])
	{
		reuse r = new reuse();
		System.out.println("Enroll no  ..."+r.no);
		System.out.println("Name no ..."+r.name);
		System.out.println("Salaery ..."+r.salary);
	}
}