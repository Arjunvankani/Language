import java.util.Scanner;

class dynamic { 

	static int getNumberOfWays(int N, int[] Coins) 
	{ 
		 
		int[] ways = new int[(int)N + 1]; 

		
		ways[0] = 1; 

		
		for (int i = 0; i < Coins.length; i++) { 

			// Make a comparison to each index value 
			// of ways with the coin value. 
			for (int j = 0; j < ways.length; j++) { 
			
				if (Coins[i] <= j) { 
					
					// Update the ways array 
					ways[j] += ways[(int)(j - Coins[i])];
					
				} 
				//System.out.print("\t"+ways[j]);
				
			} 
			//System.out.println();
		} 

		// return the value at the Nth position 
		// of the ways array.
		System.out.println("\nTotal Ways or solution : \t"+ways[(int)N]); 
		return 1;
	} 


	public static void main(String args[]) 
	{ 
		Scanner n = new Scanner(System.in);
		int num,pay;
		
		System.out.println("How many coins you have...\n");
		num = n.nextInt();
		int Coins[]=new int[num];
		System.out.println("Enter Coins value ....\n");
		for(int i=0;i<num;i++)
			{
				Coins[i]= n.nextInt();
			}

		System.out.println("The Coins Array:\n"); 
		for (int i : Coins) 
			System.out.println(i);
		
		System.out.println("How much amount you want to pay ?\t");
		pay = n.nextInt();
		System.out.println("Solution:\n"); 
		getNumberOfWays(pay, Coins);
		
	} 
} 
