import java.util.Scanner; 

class GreddyKanpsack 
	{ 
		public static void main(String[] args) 
		{
			Scanner s = new Scanner(System.in); 
			int n,m;
			
			System.out.println("Enter the Total Objects");
			n = s.nextInt();
			
			int weight[] = new int[n]; 
			int value[] = new int[n]; 
			for(int i=0;i<n;i++) 
			{
				System.out.println("Enter the Values"); 
				value[i]=s.nextInt();
				
				System.out.println("Enter the weight"); 
				weight[i]=s.nextInt();
			}
			
			System.out.println("Enter the total capacity of Knapsack");
			m = s.nextInt();
			
			float v[]=new float[n];     //  v  = p/w
			
			for(int i=0;i<n;i++)
			{
				v[i]=(float)value[i]/(float)weight[i];
			}
			
		System.out.println("\n\n");
		
		System.out.println("\t \t Data-Set \t \t");
		
		System.out.println("\n\n");
		System.out.println("\n______________________________________________________________________________________________________________________\n");
		System.out.print("Objects \t|");
		for(int i=1;i<=n;i++)
		{
			System.out.print(i+"\t|");
		}
		System.out.println("\n______________________________________________________________________________________________________________________\n");
		System.out.print("Values \t\t|");
		
		for(int i=0;i<n;i++)
		{
			System.out.print(value[i]+"\t|");
		}
		System.out.println("\n______________________________________________________________________________________________________________________\n");
		System.out.print("Weight \t\t|");
		
		for(int i=0;i<n;i++)
		{
			System.out.print(weight[i]+"\t|");
		}
		
		System.out.println("\n______________________________________________________________________________________________________________________\n");
		System.out.print("P = V/W \t");
		for(int i=0;i<n;i++)
		{
			System.out.print(v[i]+"\t");
		}
		System.out.println("\n______________________________________________________________________________________________________________________\n");
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(v[i]<v[j])
				{
				float temp=v[j];
				v[j]=v[i];
				v[i]=temp;

				int temp1=value[j];
				value[j]=value[i];
				value[i]=temp1;

				int temp2=weight[j];
				weight[j]=weight[i];
				weight[i]=temp2;
				}
			}
		}
	System.out.println("\n\n");
	System.out.println("\t\t After Arranging \t\t");
	System.out.print("\n\n");
	System.out.println("\n______________________________________________________________________________________________________________________\n");
	System.out.print("\nObjects \t|");
	for(int i=1;i<=n;i++)
	{
		System.out.print(i+"\t|");
	}
	System.out.println("\n______________________________________________________________________________________________________________________\n");
	System.out.print("Values \t\t|");
	
	for(int i=0;i<n;i++)
	{
		System.out.print(value[i]+"\t|");
	}
	System.out.println("\n______________________________________________________________________________________________________________________\n");
	System.out.print("Weight \t\t|");
	for(int i=0;i<n;i++)
	{
		System.out.print(weight[i]+"\t|");
	}
	System.out.println("\n______________________________________________________________________________________________________________________\n");
	System.out.print("P = V/W \t");
	for(int i=0;i<n;i++)
	{
		System.out.print(v[i]+"\t");
	}
	System.out.println("\n______________________________________________________________________________________________________________________\n");
	int k=0;
	float sum=0;
	
	System.out.println();
	while(m>0)
	{
		if(weight[k]<m)
		{
			sum+=1*value[k];
			m=m-weight[k];
		}
		else
		{
			float x4=m*value[k];
			float x5=weight[k];
			float x6=x4/x5;
			sum=sum+x6;
			m=0;
		}
	k++;
	}
	System.out.println("\n\nFinal Profit is= \t "+sum);
	}
}