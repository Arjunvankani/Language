using System;

namespace StaticVarApplication {
   class StaticVar {
      public static int num;
      
      public void count() {
         num++;
      }
      public int getNum() {
         return num;
      }
   }
   class StaticTester {
      static void Main(string[] args) {
         StaticVar s1 = new StaticVar();
         StaticVar s2 = new StaticVar();
         
         s1.count();
         s1.count();
         s1.count();
         
         s2.count();
         s2.count();
         s2.count();
         
         Console.WriteLine("Variable num for s1: {0} \n Num for s2: {1}", s1.getNum(),s2.getNum());

         Console.ReadKey();
      }
   }
}