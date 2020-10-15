    
#include<stdio.h>
#include<conio.h>



void merge(int a[],int b,int e, int m)
{
    int i=b,j=m+1;
    int tem[50];
      int k=0;
    while(i<=m && j<=e)
    {
        if(a[i]<=a[j])
        {
            tem[k++] = a[i++];
        }
        else
        {
            tem[k++] = a[j++];
        }
        
    }
    
    while(i<=m)
    {
        tem[k++] = a[i++];    
    }
    while(j<=e)
    {
        tem[k++] = a[j++];
    }
    for(i=b;i<=e;i++)
    {
        a[i] = tem[i-b];
    }
            


}
void mergesort(int a[],int b,int e)
{


    if(b<e)
    {
        int m=(b+e)/2;
        mergesort(a,b,m);
        mergesort(a,m+1,e);
        merge(a,b,e,m);
    }
}



int main()
{
    int a[30],n,i;
    printf("Enter no of elements:");
    scanf("%d",&n);
    printf("Enter array elements:");
   
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
       
    mergesort(a,0,n-1);
   
    printf("\nSorted array is :");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
       
    return 0;
}







