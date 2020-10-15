#include <stdio.h>
 
void mergeSort(int [], int, int, int);
void merge(int [],int, int);
 
int main()
{
    int a[50],i,n;
     
    printf("Enter total number of elements:");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i = 0; i <n; i++)
    {
         scanf("%d", &[i]);
    }
    merge(list, 0, size - 1);
    printf("After sorting:\n");
    for(i = 0;i < n; i++)
    {
         printf("%d   ",a[i]);
    }
 
   return 0;
}
 
void merge(int a[],int b,int e)
{
    int mid;
 
    if(b< e)
    {
        mid = (b +e) / 2;
        partition(list, low, mid);
        partition(list, mid + 1, high);
        mergeSort(list, low, mid, high);
    }
}
 
void mergeSort(int list[],int low,int mid,int high)
{
    int i, mi, k, lo, temp[50];
 
    lo = low;
    i = low;
    mi = mid + 1;
    while ((lo <= mid) && (mi <= high))
    {
        if (list[lo] <= list[mi])
        {
            temp[i] = list[lo];
            lo++;
        }
        else
        {
            temp[i] = list[mi];
            mi++;
        }
        i++;
    }
    if (lo > mid)
    {
        for (k = mi; k <= high; k++)
        {
            temp[i] = list[k];
            i++;
        }
    }
    else
    {
        for (k = lo; k <= mid; k++)
        {
             temp[i] = list[k];
             i++;
        }
    }
 
    for (k = low; k <= high; k++)
    {
        list[k] = temp[k];
    }
}
