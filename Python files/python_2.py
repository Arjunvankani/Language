dict1 = {}
dict2 = {}
dict3 = {}
temp = []
common = []

dict1_length = int(input("Enter first dictionary length: "))
for i in range(dict1_length) :
    dict1_data = input()
    if(dict1_data.isdigit()) :
        dict1.update({i:int(dict1_data)})
    else :
        dict1.update({i:dict1_data})

dict2_length = int(input("Enter second dictionary length: "))
for i in range(dict2_length) :
    dict2_data = input()
    if(dict2_data.isdigit()) :
        dict2.update({i:int(dict2_data)})
    else :
        dict2.update({i:dict2_data})

dict3_length = int(input("Enter third dictionary length: "))
for i in range(dict3_length) :
    dict3_data = input()
    if(dict3_data.isdigit()) :
        dict3.update({i:int(dict3_data)})
    else :
        dict3.update({i:dict3_data})

for i in dict1.values() :
    if i in dict2.values() :
        temp.append(i)
for j in temp :
    if j in dict3.values() :
        common.append(j)
        
print("Input: ")
print(list(dict1))
print(list(dict2))
print(list(dict3))

print("Output: ")
print(common)
