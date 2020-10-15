class value
{  
 int data=500;  
  
 void change(value v)
 {  
	v.data=v.data+100;
 }  
     
    
 public static void main(String args[]){  
   value v=new value();  
  
   System.out.println("before change "+v.data);  
   v.change(v);
   System.out.println("after change "+v.data);  

 }  
}  