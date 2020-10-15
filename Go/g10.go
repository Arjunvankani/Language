// Go program to illustrate the 
// concept of switch statement 
package main 
	
import "fmt"
	
func main() { 
	var value string = "five"
		
	// Switch statement without default statement 
	// Multiple values in case statement 
switch value { 
	case "one": 
	fmt.Println("C#") 
	case "two", "three": 
	fmt.Println("Go") 
	case "four", "five", "six": 
	fmt.Println("Golang") 
} 
} 
