#include<stdio.h>
#include<stdlib.h>
 int main() 
 {
 	 int i,n,*p,j,t,key;
	 printf("enter size of array\n");
     scanf("%d",&n); printf("enter array\n");
	 p=(int*)malloc(n*sizeof(int));
	 for(i=0;i<n;i++)
	 {
	 	 scanf("%d",&p[i]);
	 }
	 printf("before sorting\n");
	 for(i=0;i<n;i++)
	 {
	 	 printf("%d\n",p[i]);
	 } 
	 for (i = 0; i < n-1; i++) 
	 {
	 	 key = i;
		  for (j = i+1; j < n; j++)
		   if (p[j] < p[key])
		    { key = j; }
			 t = p[key];
		     p[key] = p[i];
			 p[i] = t; 
	 }
	 
	 printf("after sorting\n");
	 for(i=0;i<n;i++)
	 {
	 	 printf("%d\n",p[i]);
	 } 
	 free(p);
	  return 0;
	 }
