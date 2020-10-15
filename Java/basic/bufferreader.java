import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class bufferreader{
	public static void main(String [] args){
		BufferedReader br = null;
		
		String line;
		FileReader fr;
		try{
			
				br = new BufferedReader(new FileReader("10lines.txt"));
				while((line = br.readLine()) != null)
				{ 
					System.out.println(line);
				}
		}	
		catch (IOException e)
			{
					e.printStackTrace();
			}
	}
}
