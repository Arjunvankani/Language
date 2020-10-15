import java.util.Random;
class P7
{
	public  static void main(String args[])
	{
		Random rnd = new Random();
		char c1 = (char) (rnd.nextInt(26) + 'A');
		char c2 = (char) (rnd.nextInt(26) + 'A');
		char c3 = (char) (rnd.nextInt(26) + 'A');
		System.out.print(c1+" "+ c2 +" "+c3 +" ");
		System.out.print( new Random().nextInt(10));
		System.out.print("  "+ rnd.nextInt(10));
		System.out.print("  " +rnd.nextInt(10));
		System.out.print("  " +rnd.nextInt(10));
	}
}