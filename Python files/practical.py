class Vowelchar():
     def vowel(self):
         vowels = ('a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U')
         string = input("Enter the string:")
         output = {}
         for char in vowels:
            x = string.count(char)
            output[char] = x
         print(output)
         
Vowelchar().vowel()