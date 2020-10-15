#include<stdio.h>
#include<conio.h>

int main()
{
	int a[8]={10,20,9,4,11,6,2,8},p,i,s,e;
	printf("before sorting:");
	for(i=0;i<8;i++)
	{
		printf("% d",a[i]);
	}
	p=a[0];
	s=a[1];
	e=a[7];
	for(i=0;i<8;i++){
	
	if(p>s ||p<e)
	{
		s++;
		e--;
	}
	else
	{
		int temp =a[s];
		a[s]=a[e];
		a[e]=temp;
	}
	printf("s and e are %d %d",s,e);
}
	printf("after sorting:");
	for(i=0;i<8;i++)
	{
		printf("%d",a[i]);
	}
}
