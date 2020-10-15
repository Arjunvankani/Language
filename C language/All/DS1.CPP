#include<iostream.h>
#include<conio.h>
void swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
int max(int a,int b)
{
	int max;
	max=a>b?a:b;
	return(max);
}
void main()
{
	int a,b,m;
	clrscr();
	cout<<"Enter two num...\n";
	cin>>a>>b;
	m=max(a,b);
	cout<<"Maximum is ......"<<m<<endl;
	cout<<"Before your A and B \n"<<a<<"  "<<b<<endl;
	swap(&a,&b);

	cout<<"After your A and B \n"<<a<<"  "<<b<<endl;
	getch();
}
