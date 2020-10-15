import java.util.Scanner;

public class Quick
{
	static int part(int[] a,int b,int e)
	{
		int i=b,j=e,p=b,t;
		while(i<j)
		{
			while(a[p]>=a[i] && i<=e)
			{
				i++;
			}
			while(a[p]<a[j] && j>=b)
			{
				j--;
			}
			if(i<j)
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
				
			}
			else
			{
				t = a[p];
				a[p] = a[j];
				a[j] = t;
				
			}
			
		}
		return j;
		
	}
	
	static void quicksort(int[] a,int b,int e)
	{
		
		if(b<e)
		{
			int p = part(a,b,e);
			quicksort(a,b,p-1);
			quicksort(a,p+1,e);
		}
		
	}

	

	
public static void main(String args[]){
	
			Scanner n = new Scanner(System.in);
			int arr[]=new int[10];
			int num = arr.length;
			System.out.println("Enter your num...\n");
			for(int i=0;i<num;i++)
			{
				arr[i]= n.nextInt();
			}
			System.out.println("Array Before Quick  sort......\n");
			for(int i=0;i<num;i++)
			{
				System.out.print(arr[i]+" ");
			}
			System.out.println();
			
			quicksort(arr,0,num-1);
			
			System.out.println("Array after Quick sort......\n");
			for(int i=0;i<num;i++)
			{
			System.out.print(arr[i]+" ");
			}
	}
}