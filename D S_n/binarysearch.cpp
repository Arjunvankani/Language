// binary search
#include<stdio.h>
#include<conio.h>
#define size 10
int main()
{
     
    int a[10],l=0,r=size-1,mid,s,temp=0,i;
    
    printf("\n  Enter the elements in ascending order: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
     
    printf("\n  Enter the number to be search: ");
    scanf("%d",&s);
     
    
    while(l<=r)
    {
        mid=(l+r)/2;
        printf("\n mid = index %d; a[%d] =%d\n",mid,mid,a[mid]);
       
        if(s==a[mid])
        {
            temp=s;
            break;
        }
        else if(s<a[mid])
        {
            r=mid-1;
        }
        else
        l=mid+1;
        
    }
    if(temp==s)
    {
    	printf("\n %d is found at index %d",s,mid);
	}
	else
	{
		printf("\n%d is not present in the array",s);
	}
    getch();
}

