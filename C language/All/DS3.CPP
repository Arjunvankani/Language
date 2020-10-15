#include<iostream.h>
#include<conio.h>
void main()
{
	int a[10],n,t;
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
		for(int j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
	     cout<<a[i];
	}
	getch();

}