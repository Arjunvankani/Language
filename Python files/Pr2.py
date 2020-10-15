class FindEle:
     def init(self):
         lenn = int(input("enter the lenght: "))
         a = []
         output = []
         for _ in range(0, lenn):
             inp = tuple(input().split(" "))
             a.append(inp)
         key = input("enter the key: ")
         for i in a:
             if (key in i):
                 ans = i
                 output.append(ans)
         print(output)
     
FindEle.init(0)
 
