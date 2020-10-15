class factorial{  
 public static void main(String args[]){  
  int i,fact;  
  int n=5;
fact=n;
  for(i=n-1;i>0;i--){    
	n=n-1;	
      fact=fact*i;    
  }    
  System.out.println("Factorial of "+fact+" is: "+fact);    
 }  
}  