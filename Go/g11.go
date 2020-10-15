// Golang program to illustrate the arrays 
package main 

import "fmt"

func main() { 

	// Creating an array of string type 
	// Using var keyword 
	var myarr [2]string 

	// Elements are assigned using index 
	myarr[0] = "ARjun"
	myarr[1] = "Vankani"

	// Accessing the elements of the array 
	// Using index value 
	fmt.Println("Elements of Array:") 
	fmt.Println("Element 1: ", myarr[0]) 
	fmt.Println("Element 2: ", myarr[1]) 

	// Shorthand declaration of array 
	arr := [4]string{"array", "computer", "data", "Machine"} 

	// Accessing the elements of 
	// the array Using for loop 
	fmt.Println("\nElements of the array:") 

	for i := 0; i < 3; i++ { 
		fmt.Println(arr[i]) 

	} 

} 
