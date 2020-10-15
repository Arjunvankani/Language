#include<stdio.h>
#define size 4
int main()
{
	int a[size],l=0,r=(size-1),m,s,i;
	printf("Enter the array elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("enter the value to be searched\n");
	scanf("%d",&s);
	
	m=l+r/2;
	
	while(l<=r)
	{
		if(a[m]<s)
		l=m+1;
		else if(a[m]==s)
		{
				printf("%d is present at %d",s,m);
	        	break;
		}
	
		else
		r=m-1;
		m=l+r/2;
	}
	if(l>r)
	printf("%d is not present in the array",s);
	return 0;
}
