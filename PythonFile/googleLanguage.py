import googletrans
  #print(googletrans.LANGUAGES)


from googletrans import Translator
translator = Translator()
result = translator.translate('salut programatori')
# print(result)

result1 = translator.translate('salut programatori',src='ro', dest='en')
print(result)

t1 = '''Hindi''' #It detect language
lan1= translator.detect(t1)
print(lan1)
