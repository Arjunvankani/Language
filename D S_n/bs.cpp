#include<stdio.h>
#include<conio.h>
#define size 10
int main()
{
	
	
	int a[size],i,s,r,l,mid;
		printf("enter array elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter element to be searched\n");
	scanf("%d",&s);
	
	if(r>=l)
	{
		mid=l+(r-l)/2;
		printf("\nmid = %d,a[%d]=%d\n\n",mid,mid,a[mid]);
	}
	if(a[mid]==s)
	{
		return mid;
	}
	if(a[mid>s])
	{
		r=mid-1;
	}
	else
		l=mid+1;
		
		for(i=0;i<size;i++)
		{
			if(a[i]==s)
			{
				printf("%d is present at %d",s,i);
			}
		}
return 0;
}

