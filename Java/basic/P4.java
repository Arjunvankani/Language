import java.util.Scanner;
class P4
{
	public static void main(String args[])
	{
		double p,i,m,k,result;
		System.out.println("Enter your Weight in pound ... \n");
		Scanner n = new Scanner(System.in);
		p = n.nextDouble();
		System.out.println("Enter your Height in inches ... \n");
		i = n.nextDouble();
		k = (.4535923)*p;
		m = (.0254)*i;
		result = k/(m*m);
		System.out.println("Your answer is ......"+result);
	}
}
