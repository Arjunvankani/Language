#include<stdio.h>
#include<conio.h>
#define size 10
int main()
{
	int i,search,a[size];
	printf("enter array elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter element to be searched\n");
	scanf("%d",&search);
	for(i=0;i<size;i++)
	{
		if(a[i]==search)
		
		{	printf("%d is present at %d\n",search,i);
		f=1;
		break;
	}
		if(f==0)
		{
			printf("%d is not present\n",search)
		}
	
			
	}
	return 0;

		
}
