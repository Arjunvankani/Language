class MergeEle():
    def init(self):
        list1 = []
        list2 = []
        list3 = []
        l1_length = int(input("Enter first list length: "))
        l2_length = int(input("Enter second list length: "))

        for i in range(l1_length) :
            l1_data = input()
            list1.append(l1_data)
        print(list1)

        for i in range(l2_length) :
            l2_data = input()
            list2.append(l2_data)
        print(list2)
            
        for i in range(max(l1_length, l2_length)) :
            while True :
                try :
                    l3_data = (list1[i], list2[i])
                except IndexError :
                    if l1_length > l2_length :
                        list2.append('')
                        l3_data = (list1[i], list2[i])
                    elif l1_length < l2_length :
                        list1.append('')
                        l3_data = (list1[i], list2[i])
                    
                list3.append(l3_data)
                break
            
        print(list3)

MergeEle.init(0)