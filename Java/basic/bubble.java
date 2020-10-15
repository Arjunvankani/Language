import java.util.Scanner;

public class bubble
{
	static void bubblesort(int[] arr)
	{
	int n = arr.length;
	int temp= 0;
		for(int i=0;i<n;i++)
		{
			for(int j=1;j<n-1;j++)
			{
				if(arr[j-1]>arr[j])
				{
					temp=arr[j-1];
					arr[j-1]=arr[j];
					arr[j]=temp;
				}
			}
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
System.out.println("Array Before Bubblr sort......\n");
	for(int i=0;i<arr.length;i++)
	{
		System.out.print(arr[i]+"");
	}
	System.out.println();
	bubblesort(arr);
	System.out.println("Array after Bubble sort......\n");
	for(int i=0;i<arr.length;i++)
	{
	System.out.print(arr[i]+"");
	}
}
}