import java.lang.String;
public class String
{
	public static void main(String args [])
	{
		String string = "Mr.Vankani wnt you programming??";
		int c=0;
		for(int i=0;i<string.length();i++)
		{
		if(string.charAt(i)!=' ')
			c++;
		}
		System.out.print("YOur total is..."+c);
	}
}