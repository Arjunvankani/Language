class HalvesStr():
    def check(self):
        string = input("Enter String :").lower()
        middle = len(string)//2
        leftSide = string[0:middle]
        if(len(string) % 2 == 0):
            rightSide = string[middle:]
        else:
            rightSide = string[middle+1:]
        for char in leftSide:
            if(char not in rightSide):
                print("NO")
                exit()
        print("YES")


HalvesStr().check()
