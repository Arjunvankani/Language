import java.util.Random;
class trr1
{
	public static void main(String args[])
	{
	String chars = "qwertyuiopasdfghjklzxcvbnm";
	String name[] = {"Arjun","vedant","ved","vankani","jani"}; 
	Random rnd = new Random();
	char c = chars.charAt(rnd.nextInt(chars.length()));
	System.out.println(+c);
	System.out.println(name[new Random().nextInt(name.length)]);
	}
}