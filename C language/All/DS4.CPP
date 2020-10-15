#include<iostream.h>
#include<conio.h>
void main()
{
	int a[10],n,t,min;
	clrscr();
	cout<<"HOw many element...\n";
	cin>>n;
	cout<<"Now enter num..";
	for(int i=0;i<n;i++)
	{
	     cin>>a[i];
	     cout<<endl;
	}
	for(i=0;i<n;i++)
	{
		min=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			min=j;
		}
		t=a[i];
		a[i]=a[min];
		a[min]=t;
	}
	for(i=0;i<n;i++)
	{
	cout<<a[i];
	}
	getch();
}