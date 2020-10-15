class emp{  
	int no;  
	String name;  
	float salary;  
	
emp(int no,String name,float salary)
{  
	this.no=no;  
	this.name=name;  
	this.salary=salary;  
}  

void display(){System.out.println(no+" "+name+" "+salary);}  
}  
  
class This
{  
public static void main(String args[])
{  
emp e1=new emp(101,"ved",50000);  
emp e2=new emp(112,"sumit",60000);  
e1.display();  
e2.display();  
}
}  