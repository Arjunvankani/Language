import speech_recognition as sr

r=sr.Recognizer()

with sr.Microphone() as source:
    while True:
        audio=r.listen(source)

        print(r.recognize_sphinx(audio))
