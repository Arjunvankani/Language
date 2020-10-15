def check(passwd): 
    val = True
      
    if len(passwd) < 9: 
        print('length should be at least 9') 
        val = False
               
    if not any(char.isdigit() for char in passwd): 
        print('Password should have at least one numeral') 
        val = False
          
    if not any(char.isupper() for char in passwd): 
        print('Password should have at least one uppercase letter') 
        val = False
          
    if not any(char.islower() for char in passwd): 
        print('Password should have at least one lowercase letter') 
        val = False
        
    Specialchar =['', '%', '#', '$']           
    if not any(char in Specialchar for char in passwd): 
        print('Password should have at least one of the symbols _ Or % Or * Or $') 
        val = False
    if val: 
        return val
    
    
print("Enter password ...")
passwd = input()
if (check(passwd)): 
        print("Password Accepted") 
else: 
        print("Invalid Password !!") 





