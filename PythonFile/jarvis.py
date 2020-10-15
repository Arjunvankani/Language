import pyttsx3
import datetime
import speech_recognition as sr
import wikipedia
import webbrowser
import os
import smtplib



engine = pyttsx3.init('sapi5')
voices  = engine.getProperty('voices')
 #print(voices[0].id)
engine.setProperty('voices', voices[1].id)



def speak(audio):
	engine.say(audio)
	engine.runAndWait()

def wishMe():
	hour = int(datetime.datetime.now().hour)
	if hour>=0 and hour<12:
		speak("Good Morning !")

	elif hour>=12 and hour<18:
		speak("Good Afternoon !")
	else:
		speak("Good Evening !")

	speak("I am Jarvis .Please tell me how may I help you ?")

def tackCommand():
	# it takes microhone input from the user and returns string output

	r = sr.Recognizer()
	with sr.Microphone() as source:
		print("Listening....")
		#r.pause_threshold = 1
		# r.energy_threshold = 500
		audio = r.listen(source)
	try:
		print("Recognizing ...")
		query = r.recognize_google(audio, Language='en-in')
		print(f"User said: {query}\n")

	except Exception as e:
		# print(e)
		print("Say that again Please...")
		return "None"
	return query


def sendEmail(do, content):
	server = smtplib.SMTP('smtp.gmail.com', 587)
	server.ehlo()
	server.starttls()
	server.login('youremail@gmail.com', 'yourr-password-here')
	server.sendmail('youremail@gmail.com', to, content)
	server.close()


if __name__ == "__main__":
	wishMe()
	speak("Arjun ,Have a Good Day  ...!")
	#while True:
	if 1:
		query = tackCommand().lower()

		# logic for executing tasks based on query 
		if 'wikipedia' in query:
			speak('Searching wikipedia ....')
			query = query.replace("wikipedia","")
			results = wikipedia.summary(query, sentence=2)
			speak("According to wikipedia")
			print(results)
			speak(results)

		elif 'open youtube' in query:
			webbrowser.open("youtube.com")

		elif 'open google' in query:
			webbrowser.open("google.com")

		elif 'play music' in query:
			music_dir =  'E:\\Project\\Go\\Jarvis'
			songs = os.listdir(music_dir)
			print(songs)
			os.startfile(os.path.join(music_dir, songs[0]))

		elif 'the time' in query:
			strTime = datetime.datetime.now().strftime("%H:%M:%S")
			speak(f"The time is {strTime}")

		elif 'open code' in query:
			codepath = "C:\\Program Files\\Sublime Text 3\\sublime_text.exe"
			os.startfile(codepath)
		elif 'email to harry' in query:
			try: 
				speak("What should I say?")
				content = tackCommand()
				to = "harryyourEmail@gmail.com"
				sendEmail(to, content)
				speak("Email has been sent!")
			except Exception as e:
				print(e)
				speak("Sorray i am not send this mail")
