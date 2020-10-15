#include<stdlib.h>
#include<stdio.h>
#define size 10

void mergesort(int a[size], int i,int j);
void merge (int a[size],int i,int j,int i1,int j1);


int main()
{
	int a[size],i;
	printf("enter array element:");
	for(i==0;i<size;i++)
	{
		scanf("%d",a[i]);
	}
	
	mergesort(a,0,size-1);
	
	printf("after sorting:");
	for(i==0;i<size;i++)
	{
		scanf("%d",a[i]);
	}
}

void mergesort(int a[size],int i,int j)
{
	int mid;
	if(i<j)
	{													/* */
		mid=i+j/2;
		mergesort(a,i,mid);
		mergesort(a,mid+1,j);
		merge(a,i,mid,mid+1,j);
	}
}

void merge(int a[size],int i, int j,int i1, int j1)
{
	int mid;
	
	
	i1=i;
	j1=mid+1;
	int k=i, b[size];
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
	for(k=i;k<j;k++)
	{
		b[k]=a[i];
	}
}



