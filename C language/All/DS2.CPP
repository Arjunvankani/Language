#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int i,n,*ptr,v;
	char *p;
	clrscr();
	cout<<"What size of array....\n";
	cin>>n;
	ptr=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
	cout<<"Enter Element no"<<i+1<<endl;
	cin>>*ptr;
	ptr++;
	}
	ptr=ptr-n;
	cout<<"YOur array is like ......\n"<<" [ ";
	for(i=0;i<n;i++)
	{
	cout<<*ptr;
	ptr++;
	}
	cout<<" ] "<<endl;
	cout<<"Enter a num of char \n ";
	cin>>v;
	p=(char*)calloc(v,sizeof(char));
	for(i=0;i<v;i++)
	{
	cout<<"Enter a char Element no"<<i+1<<endl;

	cin>>p;
	p++;
	}
	p=p-v;
	cout<<"YOur array is like ......\n"<<" [ ";
	for(i=0;i<v;i++)
	{
	cout<<*p;
	p++;
	}
	cout<<" ] "<<endl;
	free(ptr);
	free(p);
	getch();
}