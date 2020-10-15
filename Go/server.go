package main

import ("fmt"
	"net/http")


func main() {

	
	
	http.HandleFunc("/",handler)
	http.HandleFunc("/Hello", handler2)
	http.ListenAndServe(":1234", nil)
}

func handler (w http.ResponseWriter, r *http.Request){
	fmt.Fprintln(w, "Welcome to My home Page  ....\n")
}

func handler2 (w http.ResponseWriter, r *http.Request){
	fmt.Fprintln(w, "Welcome to My Hello Page  ....\n")
}
