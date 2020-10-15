import java.lang.Thread;
public class Threadeasy
{
	public static void main(String args[])
	{
		Thread t1 = new Thread(() -> 
				{
					for (int i=1; i<=5;i++)
					{
						System.out.println("Hi .."+i);
						try {Thread.sleep(200);} catch(Exception e){}
					}
				});
		Thread t2 = new Thread(() -> 
				{
					for (int i=1; i<=5;i++)
					{
						System.out.println("Hello .."+i);
						try {Thread.sleep(200);} catch(Exception e){}
					}
				},"Hello Thread ..."); // chg by this setname
				
				t1.start();
				try {Thread.sleep(10);} catch(Exception e){}
				t2.start();
				
				//t1.join();
				//t2.join();
				System.out.println(t1.isAlive());
				System.out.println(t1.getName());
				System.out.println(t2.getName());				
				System.out.println("Middle");
	}
}