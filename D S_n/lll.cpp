#include<stdio.h>
#include<conio.h>
#define size 4
int main()
{
	int i,search,a[size];
	printf("enter array elements\n");
	for(i=0;i<size;i++)
	
		scanf("%d",&a[i]);

	printf("enter element to be searched\n");
	scanf("%d",&search);
	for(i=0;i<size;i++)
	{
		if(a[i]!=search)
		
	{
	  
	
			printf("%d is not present at %d\n",search);
			break;
	    
	    }
		
		else
		
		
			printf("%d is  present in the array at %d\n",search,i);
        break;
	}
	getch();

		
}
