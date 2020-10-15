// Golang program to illustrate 
// the use of if and if-else 
// statement 
package main 

import "fmt"

func main() { 

	// taking local variables 
	var a int = 270 
	var b int = 195 

	// using if statement for 
	// checking the condition 
	if a%2 == 0 { 

		// print the following if 
		// condition evaluates to true 
		fmt.Printf("Even Number\n") 

	} 

	if b%2 == 0 { 

		fmt.Printf("Even Number") 

	} else { 

		fmt.Printf("Odd Number") 
	} 
} 
