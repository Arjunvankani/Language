/*#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char *str;
	int i;
	printf("enter string:\n");
	gets(str);
	for(i=0;*str!=NULL;i++)
	{
		*str++;
	}
	printf("\nlength of string is %d",i);
	getch();
	}*/
/*
#include<stdio.h>
#include<conio.h>
int main()
{
	
	int max,a[5],i,*p;
	printf("enter array values:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	p=a;
	for(i=0;i<5;i++)
	{
		printf("%u\n",p);
		*p++;		
	}
	
	for(i=0;i<5;i++)
	{
		if(*p>max)
		{
			max=a[i];
		    *p++;
		}
			
	}
	
	printf("max is %d",max);
	getch();	
}

*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char *str;
	printf("enter string:\n");
	gets(str);
	printf("length of string is %d",strlen(str));
	getch();	
}



