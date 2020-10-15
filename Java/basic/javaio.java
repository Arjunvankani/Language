import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;

public class javaio {

			public static void main(String arg[]){
				String fileName = "10lines.txt";
				
				PrintWriter writer = null;
				try{
							FileWriter fw = new FileWriter(fileName, true);
							writer = new PrintWriter(fw);
				}
				catch(FileNotFoundException e){
					e.printStackTrace();
				}catch(IOException e){
						e.printStackTrace();
				}
				writer.println(" --------Added to file ------");
				for(int i = 1; i<= 10; i++){
					writer.println(" Line  "+i);
				}
				writer.close();
			}
}