import java.util.Scanner;
class AAA
{
	int No=101;
	String Name="Ved";
	double Per=87.9;
}
class BBB extends AAA
{
	
	public static void main(String args[])
	{
		String Subject="MATHS";
	    int credit=5;
		BBB b = new BBB();
		System.out.println("Your information is given below...\n"+b.NO+b.Name+b.Per+b.Subject+b.credit);
	}
}