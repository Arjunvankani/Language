import mysql.connector
con=mysql.connector.connect(host="localhost",user="root",passwd="",database = "school")
print(con)
cur = con.cursor()

'''

#Show all database
try:
    dbs = cur.execute("show databases")
except:
    con.rollback()
for x in cur:
    print(x)
con.close()
'''




'''

#create database

try:
    cur.execute("create database School")
    dbs = cur.execute("show databases")
except:
    con.rollback()
for x in cur:
    print(x)
con.close()
'''




'''

#create table

try:
    dbs = cur.execute("create table School (name varchar(255) not null,id int(12) not null primary key, salery float not null, Dept_id int not null)")
except:
    con.rollback()
con.close()
 '''





'''
sql = "insert into School(name, id, salary) values (%s, %s, %s)"
val1 = ("Arjun", 101, 80000.00)

try:
    cur.execute(sql,val1)
    con.commit()
    
except:
    con.rollback()
    
print(cur.rowcount,"record inserted !")
con.close()
'''



'''
#reading data 
try:
    cur.execute("select * from school")
    result = cur.fetchall()
    for x in result:
        print(x);

except:
    con.rollback()
con.close()  
'''



