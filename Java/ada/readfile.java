import java.util.Scanner;
import java.io.FileNotFoundException;
import java.io.File;

public class readfile{
	public static void main(String arg[])
	{
		File fileName = new File("10lines.txt");
		
		Scanner s = null;
		
		try{
						s = new Scanner(fileName);
						while(s.hasNextLine())
						{
							System.out.println(s.nextLine());
						}
			}
			catch(FileNotFoundException e){
					e.printStackTrace();
				}
	}
}