// Golang program to illustrate 
// the use of nested if and 
// if-else-if ladder statement 
// statement 
package main 

import "fmt"

func main() { 

	// taking two local variable 
	var v1 int = 400 
	var v2 int = 700 

	// ----- Nested if Statement ------- 

	// using if statement 
	if v1 == 400 { 

		// if condition is true then 
		// check the following 
		if v2 == 700 { 

			// if condition is true 
			// then display the following 
			fmt.Printf("Value of v1 is 400 and v2 is 700\n") 
		} 
	} 

	// ----------- if-else-if ladder 
	
	// checking the condition 
	if v1 == 100 { 

		// if condition is true then 
		// display the following */ 
		fmt.Printf("Value of v1 is 100\n") 

	} else if v1 == 200 { 

		fmt.Printf("Value of a is 20\n") 

	} else if v1 == 300 { 

		fmt.Printf("Value of a is 300\n") 

	} else { 

		// if none of the conditions is true 
		fmt.Printf("None of the values is matching\n") 
	} 

} 
