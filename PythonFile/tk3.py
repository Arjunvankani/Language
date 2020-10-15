from tkinter import *

def sub():
    print("Now Subscribing ")

root = Tk()

root.geometry("580x580")

button = Button(root, text="Subscribe Now", command=sub)
button.pack()

button2 = Button(root, text="Exit ", command=quit)
button2.pack()




root.mainloop()
