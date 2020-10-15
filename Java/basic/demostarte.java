public class demostarte
{
   static int a = 100;
   static int b;
   static void member(int c) {
      System.out.println("x = " + a);
      System.out.println("y = " + b);
      System.out.println("z = " + c);
   }
   static {
      System.out.println("Initialization block.....\n");
      b = a + 5;
   }
   public static void main(String args[]) {
      member(50);
   }
}
