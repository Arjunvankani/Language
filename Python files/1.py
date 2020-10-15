class ListMerger:
    
     def list1(self):
         a = list(input("Enter first List: "))
         b = list(input("Enter secondb List: "))
         c = []
         aLen = len(a)
         bLen = len(b)
         mxLength = max(aLen, bLen)
         for i in range(0, mxLength):
             if(i < aLen):
                 x = a[i]
             else:
                 x = " "
             if(i < bLen):
                 y = b[i]
             else:
                 y = " "
             ans = (x, y)
             c.append(ans)
         print(c)
         
ListMerger.list1()