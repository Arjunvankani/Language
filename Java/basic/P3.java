import java.util.Scanner;
class P3
{
	public static void main(String args[])
	{
		
		double m,result,f=3.33;
			Scanner n = new Scanner(System.in);
			System.out.println("Enter your meter values....\n");
			m = n.nextDouble();
			result = (m/f);
			System.out.println("Your answer in feet is eqaul to ...."+result);	
	}
}