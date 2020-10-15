def reflection(string,N):
     original='abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ'
     reflective='zyxwvutsrqponmlkjihgfedcbaZYXWVUTSRQPONMLKJIHGFEDCBA'
     dict1 = dict(zip(original,reflective))
     ch = string[N-1:]
     re = string[0:N-1]
     new = ""
     for i in range(0,len(ch)):
         new=new + dict1[ch[i]]
     print(re + new)
if __name__ == '__main__' :
     print("Enter a string::")
     string = input()
     print("Enter a index number you want to start reflection::")
     N = int(input())
     reflection(string,N)
