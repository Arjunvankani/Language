#include<stdio.h>
#include<conio.h>
int main()
{
	int l,b,d,s,l1,b1,l2,b2,area,area1,a,x,y;
	printf("enter length and breadth\n");
	scanf("%d%d",&l,&b);
	area=l*b;
	printf("enter diameter of circle\n");
	scanf("%d",&d);
	area1=3.14*d;
	a=area/area1;
	printf("no of circle is %d\n",a);
	printf("enter the distance from top,left,bottom,right side from where circle is to placed\n");
	scanf("%d%d%d%d",&l1,&b1,&l2,&b2);
	x=b-l1-l2;
	y=l-b1-b2;
	printf("new lenght and breadth are %d %d\n",y,x);
	area=x*y;
	a=area/area1;
	printf("no of circle is %d",a);
	
}
