import win32com.client as wincl
speak =wincl.Dispatch("SAPI.SpVoice")


speak.Speak(" Hey  Arjun")


speak.Speak(" What are  you doing, Now??")
