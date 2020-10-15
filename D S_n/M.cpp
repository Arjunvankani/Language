
#include<stdio.h>
#define size 10
void mergesort(int a[],int i,int j);
void merge(int a[],int i1,int j1);
 
int main()
{
	int a[size],i;
	
	printf("Enter array elements:");
	
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);
		
	mergesort(a,0,9);
	
	printf("\nSorted array is :");
	for(i=0;i<size;i++)
		printf("%d ",a[i]);
		
	return 0;
}
 
void mergesort(int a[],int i,int j)
{
	int mid;
		
	if(i<j)
	{
		mid=(i+j)/2;
		mergesort(a,i,mid);		
		mergesort(a,mid+1,j);	
		merge(a,i,mid,j);	
	}
}
 
void merge(int a[],int i1,int j1)
{
	int b[size];	
	int i,j,k,mid;
	i1=i;	
	j1=mid+1;
	k=i;
	
	while(i1<=mid && j1<=j)	
	{
		if(a[i1]<=a[j1])
		{
				b[k]=a[i1];
			k++;i1++;
		}
		else
			b[k]=a[j1];
			k++;j1++;
	}
	
	while(i1<=mid)	
		b[k]=a[i1];
		k++;i1++;
		
	while(j1<=j)	
		b[k]=a[j1];
		k++;j1++;
	
	for(k==i;k<=j;k++)
		a[i]=b[k];
}
