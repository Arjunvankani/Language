#include<stdio.h>
#define size 10

void mergesort(int a[size],int b, int e);
void merge(int a[size],int b,int mid,int e);

int main()
{
	int a[size],i;
	printf("enter array elements:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("before sorting:");
	for(i=0;i<size;i++)
	{
		printf("%d",a[i]);
	}
	
	mergesort(a,0,size-1);
	
	printf("after sorting:");
	for(i=0;i<size;i++)
	{
		printf("%d",a[i]);
	}
	
	void mergesort(int a[size],int b,int e)
	{
	
		int mid;
		if(b<e)
		{
			mid=b+e/2;
			mergesort(a,b,mid);
			mergesort(a,mid+1,e);
			merge(a,b,mid,e);
		}
	}
	
	void merge(int a[size],int b,int mid,int e)
	{
		int i,j,k,temp[size];
		i=b;
		j=mid+1;
		k=0;
		while(i<=mid && j<=e)
		{
			if(a[i]<a[j])
			{
				temp[k]=a[i];
				k++;i++;
			}
			else
			{
				temp[k]=a[j];
				k++;
				j++;
			}
			
			if(i>mid)
			{
				while(j<=e)
				{
					temp[k]=a[j];
					k++;
					j++;
				}
			}
			else
			{
				while(i<=mid)
				{
					temp[k]=a[i];
					k++;i++;
				}
			}
			
			
			while(k<b)
			{
				a[k]=temp[k];
				k++;
			}
		}
	}
}
