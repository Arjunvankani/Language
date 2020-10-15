import java.util.Scanner;
import java.util.Random;
class P12
{
	public static void main(String arg[])
	{
		int x=0,i=0;
		Random rnd =new Random();
		while(i<=100)
		{
			x=(rnd.nextInt(1000));
			if(x<49)
			{
				System.out.println(x);
				i++;
			}
		}
	}
}