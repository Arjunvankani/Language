// Golang program to demonstrate the declaration 
// and initialization of pointers 
package main 

	import "fmt"

	func main() 
{ 

	// taking a normal variable 
	var x int = 1234 

		// declaration of pointer 
		var p* int

		// initialization of pointer 
		p 
		= &x 

		// displaying the result 
		fmt.Println("Value stored in x = ", x) 
			fmt.Println("Address of x = ", &x) 
				fmt.Println("Value stored in variable p = ", p) 
} 
