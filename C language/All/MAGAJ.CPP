#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<Math.h>
#include<iostream.h>
float value(char v)
{
	int dec;
	char sint[60],sfra[60];
	int i,f=0,c=1,in,fr;

	for(i=0;v[i]!='\0';i++)
	{
		if(!f)
		{
			if(v[i]=='.')
			{
			f=1;
			sint[i]='\0';
			continue;
			}
			sint[i]=sv[i];
			c++;
		}
		else
		sfra[i-c]=v[i];


	}
		in= atoi(sint);
		fr= atoi(sfra);
		cout<<in<<fr;
	return in,fr;
}
float div(int d)
{
	int c=0;
	while(d!=0)
	{
		d=d/10;
		c++;
	}
	return c;
}
float mul(float m)
{
  /*	int c=0,q;
	q=(int)m;
	while(m!=q)
	{
		m=m*10;
		c++;
	}
	return c;   */
	int t=0;
	int c=0;


	if(m<1)
	{
		do{
			c++;
			m=m*10;
			t=m;
			m-=t;
			}while(m!=0);
			cout<<c;
	}
	return c;
}
long db(int deci)
{
	long bin=0;
	int rem,tem = 1;
	while(deci!=0)
	{
		rem=deci%2;
		deci=deci/2;
		bin=bin + rem*tem;
		tem=tem*10;
	}
	return bin;
}
int rev(int r)
{
	int n=0;
	int rem;
	while(r!=0)
	{
		rem=r%10;
		n=n*10 + rem;
		r=r/10;
	}
	return n;
}
void main()
{
	int a,b,c,v;
	float n,i1,e1;
	clrscr();
	cout<<"Enter num ...\n";
	cin>>n;
	v =value(n);
      /*
	if(n>0)
	{
		a=0;
	}
	else
	{
		a=1;
	}
	i1= div(n);

	e1= mul(n);
	cout<<i1<<" "<<e1;
	/*if(n>0)
	{
	       n=n/pow(10,i1);
	       c=db(n);
	       b=db(i1);
	}
	else
	{
		n=n*pow(10,e1);
		c=db(n);
		b=db(e1);
	}
	b = rev(b);
	printf("  a .. %d | b ..%8f | c .. %23f",a,b,c);      */
	getch();
