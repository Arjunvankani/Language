class Std{  
 
  void run(){System.out.println("Student 1....");}  
}  

class Student extends Std
{  
 
  void run(){System.out.println("Student 2....");}  
  
  public static void main(String args[])
  {  
  Student s = new Student();  
  s.run();
  }  
} 