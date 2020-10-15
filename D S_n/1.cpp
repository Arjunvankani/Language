#include<stdio.h>
#include<conio.h>
int main()
{
     
    int a[10],i,temp=0,search,l,r,mid;
    
         
    printf("\n  Enter the elements in ascending order: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
     
    printf("\n  Enter the number to be search: ");
    scanf("%d",&search);
     
    l=0,r=10-1;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(item==a[mid])
        {
            flag=1;
            break;
        }
        else if(item<a[mid])
        {
            high=mid-1;
        }
        else
        low=mid+1;
    }
    if(flag==0)
    printf("\n  The number is not found");
    else
    printf("\n  The number is found and its position is: %d",mid+1);
    getch();
}

