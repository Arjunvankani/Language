def check_res(fileimage):
    with open(fileimage, 'rb') as img_file:
        img_file.seek(163)
        a = img_file.read(2)
        height = (a[0] << 8) +a[1]
        a= img_file.read(2)
        width = (a[0] << 8) + a[1]

        print("This image resolution is ", width, "x", height)

check_res('C:\Users\ARJUN VANKANI\OneDrive\Pictures\Screenshots\Screenshot (1).png') 
