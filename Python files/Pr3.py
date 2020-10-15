class duplicateRemove:
     def init(self):
         lenn = int(input("enter the length: "))
         a = []
         for _ in range(0, lenn):
             inpt = tuple(input().split(" "))
             a.append(inpt)
         a = set(a)
         a = list(a)
         print(a)
duplicateRemove.init(0)