 
label = Label(root, text="GUI")
label.pack()
topframe = Frame(root)
topframe.pack()
bottomframe = Frame(root)
bottomframe.pack() 
button1 =Button(topframe,
                text="File", fg="Blue")

button2 =Button(topframe,
                text="Edit", fg="Blue")
button3 =Button(topframe,
                text="View", fg="Blue")
button4 =Button(topframe,
                text="Navigate", fg="Blue")

button1.pack(side=LEFT)
button2.pack(side=LEFT)
button3.pack(side=LEFT)
button4.pack(side=LEFT)
one = Label(root, text="Welcome to pycharm", bg="LIGHTBLUE")

one.pack(side=LEFT, fill=Y)

one2 = Label(root, text="Thanks a lot", bg="LIGHTYELLOW")
one2.pack(side=BOTTOM, fill=X)

root.mainloop()
