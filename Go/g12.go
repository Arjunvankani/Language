// Golang program to illustrate 
// the working of the slice 
package main 

import "fmt"

func main() { 

	// Creating an array 
	arr := [7]string{"I", "am", "Arjun", "Vankani", 
						"work on", "Go", "language"} 

	// Display array 
	fmt.Println("Array:", arr) 

	// Creating a slice 
	myslice := arr[1:6] 

	// Display slice 
	fmt.Println("Slice:", myslice) 

	// Display length of the slice 
	fmt.Printf("Length of the slice: %d", len(myslice)) 

	// Display the capacity of the slice 
	fmt.Printf("\nCapacity of the slice: %d", cap(myslice)) 
} 
