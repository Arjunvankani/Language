class AA{  
void A(){System.out.println("It is A class...");}  
}  
class BB extends AA{  
void B(){System.out.println("It is B class...");}  
}  
class TestInheritance{  
public static void main(String args[]){  
BB b=new BB();  
b.A();  
b.B();  
}}  