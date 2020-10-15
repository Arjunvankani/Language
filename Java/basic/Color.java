class Cls
{  
	String color="white";  
}  
class Color extends Cls
{  
	String color="black";  
	void printColor(){  
	System.out.println(color);//prints color of Dog class  
	System.out.println(super.color);//prints color of Animal class  
	}  
}  
class TestColor{  
public static void main(String args[]){  
Dog d=new Dog();  
d.printColor();  
}} 