// linear search
#include<stdio.h>
#include<conio.h>
#define size 10
int main()
{
	int a[size],s,i,temp;
	printf("enter the array elements:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n enter the element to be searched :");
	scanf("%d",&s);
	for(i=0;i<size;i++)
	{
		if(a[i]==s)
		{
			 temp=s;
			 break;
		}
	}
	if(temp==s)
	{
		printf("\n %d is found at index %d",s,i);
	}
	else
	{
		printf("\n %d is not present in the array.",s);
	}
	getch();
}
