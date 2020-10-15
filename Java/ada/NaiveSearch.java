import java.util.Scanner;

public class NaiveSearch { 

	public static void search(String s1, String s2) 
	{ 
		int M = s2.length(); 
		int N = s1.length(); 

		/* A loop to slide s2 one by one */
		for (int i = 0; i <= N - M; i++) { 

			int j; 


			for (j = 0; j < M; j++) 
				if (s1.charAt(i + j) != s2.charAt(j)) 
					break; 

			if (j == M) 
				System.out.println("Pattern found at index " + (i+1)); 
		} 
	} 

	public static void main(String[] args) 
	{ Scanner num = new Scanner(System.in);
	
		System.out.println("\nGive the First string:\t"); 
		String s1 = num.nextLine();
		System.out.println("\nGive the Secound string:\t");
		String s2 = num.nextLine();
		
		search(s1, s2); 
	} 
} 
