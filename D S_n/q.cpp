#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 10

int i,j,temp;

int quicksort(int a[size],int l,int r)
{
	if(l<r)
	{
		
		temp=j;
		partition(a,l,r);
		quicksort(a,l,temp-1);
		quicksort(a,temp+1,r);
	}
}


int partition(int a[size],int l,int r)
{
	int p=a[l];
	i=l;
	j=r;
	while(i<j)
	{
		while(a[i]<=p)
	{
		i++
	}
	while(a[j]>p)
	{
		j--;
	}
	if(i<j)
	{
		swap(a[i],a[j]);
	}
	}
	swap(a[l],a[j]);
	return j;
}
	
