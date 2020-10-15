// Golang program to illustrate 
// the use of integers, floating 
// and complex numbers 
package main 

import "fmt"

func main() { 

	// Using 8-bit unsigned int 
	var X uint8 = 225 
	fmt.Println(X+1, X) 

	// Using 16-bit signed int 
	var Y int16 = 32767 
	fmt.Println(Y+2, Y-2) 

	a := 20.45 
	b := 34.89 

	var m complex128 = complex(6, 2) 
	var n complex64 = complex(9, 2) 

	// Subtraction of two 
	// floating-point number 
	c := b - a 

	// Display the result 
	fmt.Printf("Result is: %f\n", c) 

	// Display the type of c variable 
	fmt.Printf("The type of c is : %T\n", c) 

	fmt.Println(m) 
	fmt.Println(n) 

	// Display the type 
	fmt.Printf("The type of m is %T and "+ 
		"the type of n is %T", m, n) 

} 

