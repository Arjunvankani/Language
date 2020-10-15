import java.util.Scanner;

class T
{
	
	public static void main(String args[])
	{
		Scanner s= new Scanner(System.in);
		System.out.println("Enter your character ...");
		String ch = s.next();
		 for(int i = 0; i < ch.length(); i++)
		 {  
            System.out.print(ch.charAt(i) + " is ");
				char d=ch.charAt(i);
					
			switch(d)  
       {  
        case 'a':   
            System.out.println("Vowel");  
            break;  
        case 'e':  	 
            System.out.println("Vowel");  
            break;  
        case 'i':   
            System.out.println("Vowel");  
            break;  
        case 'o':   
            System.out.println("Vowel");  
            break;  
        case 'u':   
            System.out.println("Vowel");  
            break;  
        case 'A':   
            System.out.println("Vowel");  
            break;  
        case 'E':   
            System.out.println("Vowel");  
            break;  
        case 'I':   
            System.out.println("Vowel");  
            break;  
        case 'O':   
            System.out.println("Vowel");  
            break;  
        case 'U':   
            System.out.println("Vowel");  
            break;  

		default:   
            System.out.println("Consonant");  
       }  
	   
	  
			
        }  
    
	}
}   