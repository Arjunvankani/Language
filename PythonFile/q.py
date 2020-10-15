import socket

hostname = socket.gethostname()
ipaddr = socket.gethostbyname(hostname)

print("My computer name is  ..."+hostname)
print("My computer IP is  ..."+ipaddr)
