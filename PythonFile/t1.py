# This will import 
# dis module 
import dis 


def test(number): 
	return (str(number)+str(number)) 

def newFunc(string): 
	print("Hello", string) 

# This will display the 
# disassembly of test(): 
dis.dis(test) 

# This will display the 
# disassembly of newFunc() 
dis.dis(newFunc) 
