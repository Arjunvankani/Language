// Golang program to illustrate 
// the use of operators 
package main 

import "fmt"

func main() { 
	p := 23 
	q := 60 

	// Arithmetic Operator - Addition 
	result1 := p + q 
	fmt.Printf("Result of p + q = %d\n", result1) 

	// Relational Operators - ‘=='(Equal To) 
	result2 := p == q 
	fmt.Println(result2) 

	// Relational Operators - ‘!='(Not Equal To) 
	result3 := p != q 
	fmt.Println(result3) 

	// Logical Operators 
	if p != q && p <= q { 
		fmt.Println("True") 
	} 

	if p != q || p <= q { 
		fmt.Println("True") 
	} 

	if !(p == q) { 
		fmt.Println("True") 
	} 

	// Bitwise Operators - & (bitwise AND) 
	result4 := p & q 
	fmt.Printf("Result of p & q = %d\n", result4) 

	// Assignment Operators - “=”(Simple Assignment) 
	p = q 
	fmt.Println(p) 

} 
