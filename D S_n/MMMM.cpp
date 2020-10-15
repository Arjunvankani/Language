#include <stdio.h>

int merge(int array[],int,int,int);
int mergesort(int array[],int low,int high) 
{
	 
   if(low < high)
   {
      int mid=(low+high)/2;
      mergesort(array,low,mid);
      mergesort(array,mid+1,high);
      merge(array,low,mid,high);
   }
}
int merge(int array[],int low,int mid,int high)
{
	int i,temp[100];             
	int b=low;               
	int m=mid;                 
	int n=mid+1;              
	int h=high;               
	
   for(i=low;b<=m && n<=h;++i)
    {
      	if(array[b] < array[n])
     	{
      		temp[i]=array[b];
      		b++;
      	}
      	else
      	{
         	temp[i] = array[n];
       		n++;
		}
   }
   for(b<=m;;i++)
   {
   		temp[i]=array[b++];
   }
   for(n<=h;;i++)
   {
   		temp[i]=array[n++];
   }
	for(i=low;i<=high;i++)
	{
		 array[i]=temp[i];
	}
}
int main()
{
	int i,p=10,array[10];
	printf("enter 10 elements\n");
	for(i=0;i<p;i++)
	{
		scanf("%d",&array[i]);
	}
	mergesort(array,0,p-1);
	printf("array after sorting\n");
	for(i=0;i<p;i++)
	{
		printf("%d",array[i]);
	}
}
