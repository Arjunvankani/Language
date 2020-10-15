using System;

namespace StringApplication {

   class Program {
   
      static void Main(string[] args) {
         //from string literal and string concatenation
         string fname, lname;
         fname = "Vedant ";
         lname = "Trivedi";
			
         char []letters= { 'H', 'e', 'l', 'l','o' };
         string [] sarray={ "Hello", "From", "MIcrosoft", "Team" };
         
         string fullname = fname + lname;
         Console.WriteLine("Full Name: {0}", fullname);
         
         //by using string constructor { 'H', 'e', 'l', 'l','o' };
         string greetings = new string(letters);
         Console.WriteLine("Greetings: {0}", greetings);
         
         //methods returning string { "Hello", "From", "Tutorials", "Point" };
         string message = String.Join(" ", sarray);
         Console.WriteLine("Message: {0}", message);
         
         //formatting method to convert a value
         DateTime waiting = new DateTime(2020, 12, 10, 20, 1, 1);
         string chat = String.Format("Message sent at {0:t} on {0:D}", waiting);
         Console.WriteLine("Message: {0}", chat);
      }
   }
}