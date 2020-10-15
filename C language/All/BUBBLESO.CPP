#include"stdio.h"
#include"iostream.h"
#include"conio.h"
void main()
{
	int n,i,j,t;
	int a[10];
	clrscr();
	cout<<"How Many element ......\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Num..\n";
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
		   if(a[j] > a[j+1])
		   {
		   t=a[j];
		   a[j]=a[j+1];
		   a[j+1]=t;
		   }
		}
	}
	for(i=0;i<n;i++)
	{
	cout<<a[i]<<"  ";
	}
	getch();

}