import java.util.Scanner;

public class selection
{
	static void selectionsort(int[] arr){
	int n = arr.length;
	int temp= 0;
	
	for (int i = 0; i < n-1; i++) 
        { 
            
            int key = i; 
            for (int j = i+1; j < n; j++) 
                if (arr[j] < arr[key]) 
                    key = j; 
  
            temp = arr[key]; 
            arr[key] = arr[i]; 
            arr[i] = temp; 
        } 
	
	}





public static void main(String args[]){
	
			Scanner n = new Scanner(System.in);
			int arr[]=new int[10];
			System.out.println("Enter your num...\n");
			for(int i=0;i<arr.length;i++)
				{
					arr[i]= n.nextInt();
				}
			System.out.println("Array Before Selection sort......\n");
			for(int i=0;i<arr.length;i++)
				{
					System.out.print(arr[i]+"");
				}
			System.out.println();
			selectionsort(arr);
			System.out.println("Array after Selection sort......\n");
			for(int i=0;i<arr.length;i++)
				{
				System.out.print(arr[i]+"");
				}
	}
}