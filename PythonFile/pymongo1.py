import pymongo

client = pymongo.MongoClient('mongodb://localhost:27017/')

mydb = client['Employee']

information = mydb.employeeinformation

record=[{
    'fristname':'Arjun',
    'fastname':'Vankani',
    'dep':'ML'
    },
      {
    'fristname':'Jay',
    'fastname':'Gundigara',
    'dep':'Machine'
    },
        {
    'fristname':'Ved',
    'fastname':'Trivedi',
    'dep':'Java'
    }]

information.insert_many(record) 


# simple way of query
information.find_one()
