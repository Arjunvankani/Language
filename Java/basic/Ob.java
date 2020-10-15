import java.lang.*;

public class Ob
	{
		static  int l_r_n=100;
		int r_n;
		Ob()
		{
			r_n=l_r_n;
			l_r_n++;
		}
		@Override
		public int hashCode()
		{
			return r_n;
		}
	  public static void main(String args[])
	  {
		Ob o1= new Ob();
		System.out.println(o1.hashCode());
		System.out.println(o1);
		System.out.println(o1.toString());
	  }
	}
