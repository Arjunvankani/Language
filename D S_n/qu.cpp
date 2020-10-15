#include<stdio.h>
#include<conio.h>
#define size 10
void quicksort(int a[size],int l,int r);
int partition(int a[size],int l,int r);

 int main()
{
	int i,a[size];
	printf("enter array elements:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nbefore sorting:");
	for(i=0;i<size;i++)
	{
		printf("%d",a[i]);
	}
	
	printf("\nafter sorting:");
	for(i=0;i<size;i++)
	{
		printf("%d",a[i]);
	}
	
	void quicksort(int a[size],int l,int r);
	{
		int temp;
		temp=partition(a,l,r);
		quicksort(a,l,temp-1);
		quicksort(a,temp+1,r);
	}
	
	int partition(int a[size],int l,int r)
	{
		int i,j,p;
		p=a[l];
		i=l;
		j=r;
		while(i<j)
		{
			while(a[i]<=p)
			{
				i++;
			}
			while(a[j]>p)
			{
				j--;
			}
			if(i<j)
			{
				int s=a[i];
				a[i]=a[j];
				a[j]=s;
			}
		}
	
	}
		a[l]=a[j];
		a[j]=p;
		return(j);
}
