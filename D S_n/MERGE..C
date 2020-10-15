#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 10
void merge(int a[size],int i,int j,int i1,int j1)
void mergesort(int a[size],int i,int j)

void mergesort(int a[size],int i,int j)
{
	int mid=0;
	if(i<j)
	{
		mid=i+j/2;
		mergesort(a,i,mid);
		mergesort(a,mid+1,j);
		merge(a,i,mid,mid+1,j);
	}
}

void merge(int a[size],int i, int j,int i1, int j1)
{
	i1=i;
	j1=mid+1;
	int k=i, b[i];
	while(i1<=mid && j1<=j)
	{
		if(a[i1]<=a[j1])
		{
			b[k]=a[i1];
			k++;
			i1++;
		}
		else
		{
			b[k]=a[j1];
			k++;
			j1++;
		}
	}
	if(i>mid)
	{
		while (j1<=j)
		{
			b[k]=a[j1];
			k++;
			j1++;
		}
	}
	else
	{
		while(i<=mid)
		{
			b[k]=a[i1];
			k++;
			i1++;
		}
	}
}



int main()
{
	int a[size],i,;
	printf("enter array element:");
	for(i==0;i<size;i++)
	{
		scanf("%d",a[i]);
	}
	
	merge(a,0,size-1);
	
	printf("after sorting:");
	for(i==0;i<size;i++)
	{
		scanf("%d",a[i]);
	}
}
