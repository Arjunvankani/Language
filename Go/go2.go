package main

import (
	"fmt"
	"math"
)
func mul(x int, y int) int {
	var out = x * y
	return out
}
/*func cal(x int, y int) (sub, div int){
	sun := x-y
	div := x/y
	return
}*/

func main() {
	
	num1, num2 := 8, 4 
	i := 1   //direct declare
	result := num2+num1

	mul := mul(num1, num2)
	fmt.Println("Multiplication ", mul)

	//cal := cal(num1,num2)
	
for i<=1 {  	 // for loop
	fmt.Println("Sum ", result)
	i++
	}
for i := 1;i<=5; i++{
	fmt.Println(" My Name is Arjun", i)
}
var sq float64 = math.Sqrt(12)
var ro float64 = math.Round(sq)
fmt.Printf("Root  : %g \n Thank You!!" ,sq) //Printf for Between 
fmt.Printf("\n Round  : %g \n Thank You!!" ,ro) //Printf for Between 

}