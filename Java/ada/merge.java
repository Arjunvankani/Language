import java.util.Scanner;

public class Merge
{
	static void mergesort(int[] a,int b,int e)
	{
		if(b<e)
		{
			int m = (b+e)/2;
			mergesort(a,b,m);
			mergesort(a,m+1,e);
			merge(a,b,e,m);
		}
		
	}
	static void merge(int[] a,int b,int e,int m)
	{
		int i=b,j=m+1;
		int t[] = new int[50];
		int k=0;
		
		while(i<=m && j<=e)
		{
			if(a[i] <= a[j])
			{
				t[k++] = a[i++];
			}
			else
			{
				t[k++] = a[j++];
			}
			
		}	
		while(i<=m)
		{
			t[k++] = a[i++];
		}
		while(j<=e)
		{
			t[k++] = a[j++];
		}
		for(i=b;i<=e;i++)
		{
			a[i] = t[i-b];
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
			System.out.println("Array Before Merge  sort......\n");
			for(int i=0;i<arr.length;i++)
			{
				System.out.print(arr[i]+" ");
			}
			System.out.println();
			mergesort(arr,0,arr.length-1);
			System.out.println("Array after Merge sort......\n");
			for(int i=0;i<arr.length;i++)
			{
			System.out.print(arr[i]+" ");
			}
	}
}