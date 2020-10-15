#include<stdio.h>
#include<stdlib.h>
#include<iostream.h>
#include<conio.h>

void main()
{
	int dec;
	char sv[60],sint[60],sfra[60];
	int i,f=0,c=1,in,fr;
	cin>>sv;
	for(i=0;sv[i]!='\0';i++)
	{
		if(!f)
		{
			if(sv[i]=='.')
			{
			f=1;
			sint[i]='\0';
			continue;
			}
			sint[i]=sv[i];
			c++;
		}
		else
		sfra[i-c]=sv[i];


	}
		in= atoi(sint);
		fr= atoi(sfra);
		cout<<in<<fr;
		getch();
}