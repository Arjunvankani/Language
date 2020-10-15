import java.lang.Thread;
class Hi extends Thread
{
 public void run()
 {
	for(int i=1; i<=5; i++)
	{
		System.out.println("Hi ..."+i);
	}
 }
}

class Hello extends Thread
{
 public void run()
 {
	for(int i=1; i<=5; i++)
	{
		System.out.println("Hello ..."+i);
	}
 }
}

public class Threadtry
{
	public static void main(String args[])
	{
		Hi o1 = new Hi();
		Hello o2 = new Hello();
		
		o1.start();
		o2.start();
	}
}