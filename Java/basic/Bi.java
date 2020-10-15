import java.util.Random;
class Bi
{
	public static void main(String args[])
	{
		Random r = new Random();
		int a[] = new int[3]; 
		for(int i=0;i<a.length;i++)
		{
			a[i] = r.nextInt(5);
		}
		try
		{
			System.out.println(a[5]);
		}
		catch(Exception e)
		{
			System.out.println("Maximum index is 3....");
		}
		for(int i : a)
			System.out.println(i);
	}
}