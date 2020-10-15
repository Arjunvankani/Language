def remDup(list1): 
      
    return list(set([i for i in list1])) 
          

list1 = [(1, 2), (4, 7),(6,8),(6,8), (1, 2)] 
print(remDup(list1))

list2 = [('a','v'),('x','z'),('b','g'),('a','v'),('p','q')]
print(remDup(list2))