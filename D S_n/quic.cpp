#include<stdio.h>
#define size 10
void quicksort(int a[size],int b,int e)
{
	int i,j,p,temp;
	if(b<e)
	{
			p=b;
	i=b;
	j=e;
	while(i<j)
	{								
		while(a[i]<=a[p])
		{
			i++;
		}
		while(a[j]>a[p])
		{
			j--;
		}
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	temp=a[p];
	a[p]=a[j];
	a[j]=temp;
	quicksort(a,b,j-1);
	quicksort(a,j+1,e);
	
	}
	

}

int main()
{
	int i,a[size],b,e;
	printf("enter array elements:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\n before sorting:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",a[i]);
	}
	
	quicksort(a,0,size-1);
	
	printf("\n after sorting:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
