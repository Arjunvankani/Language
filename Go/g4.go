// Go program to illustrate 
// the use of booleans and 
// strings 
package main 

import "fmt"

func main() { 

	// variables 
	str1 := "Arjun"
	str2 := "arjun"
	result1 := str1 == str2 

	// Display the result 
	fmt.Println(result1) 

	// Display the type of 
	// result1 
	fmt.Printf("The type of result1 is %T\n", result1) 

	// str variable which stores strings 
	str := "arjun"

	// Display the length of the string 
	fmt.Printf("Length of the string is: %d", len(str)) 

	// Display the string 
	fmt.Printf("\nString is: %s", str) 

	// Display the type of str variable 
	fmt.Printf("\nType of str is: %T", str) 

} 
