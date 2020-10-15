#include<stdio.h>
#include<stdlib.h>

int mergesort(int a[6],int b, int e);
int merge(int a[6],int b,int mid,int e);
int main()
{
	int a[6]={9,6,7,3,2,1},i;
	
	
	printf("before sorting:\n");
	for(i=0;i<6;i++)
	{
		printf("%d\n",a[i]);
	}
	
	mergesort(a,0,5);
	
	printf("after sorting:\n");
	for(i=0;i<6;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}

int mergesort(int a[6],int b,int e)
{
	int mid=0;
	if(b<e)
	{
	mid=(b+e)/2;
	mergesort(a,b,mid);
	mergesort(a,mid+1,e);
	merge(a,b,mid,e);
	}
	return 0;
}

int merge(int a[6],int b, int mid,int e)
{

	int i=b;
	int j=mid+1;
	int k=b,temp[6];
	while(i<=mid && j<=e)
	{
		if(a[i]<=a[j])
		temp[k++]=a[i++];	
		
		else
	
		temp[k++]=a[j++];
	}
	
	if(i>mid)
	{
		while(a[j]<=e)
	{
		temp[k++]=a[j++];
	}
	}
	else
	{
		while(a[i]<=mid)
	{
		temp[k++]=a[i++];
	}
	}
	

	
	for(k=b;k<e;k++)
	{
		temp[k]=a[k];
		}	
}
