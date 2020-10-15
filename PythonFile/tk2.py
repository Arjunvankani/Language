from tkinter import *
root = Tk()

root.geometry("580x580")
label1 = Label(root, text="Email")
label1.grid(row=0, sticky="e")
label2 = Label(root, text="Password")
label2.grid(row=1)
check = Checkbutton(root,text="Remember me")
button = Button(root, text="Submit")
check.grid(column=1)
button.grid(column=0)
entry1 = Entry(root)
entry2 = Entry(root)

entry1.grid(row=0, column=1)
entry2.grid(row=1, column=1)


root.mainloop()
