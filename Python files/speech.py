import librosa
import soundfile as sf

# Get example audio file
filename = librosa.ex('trumpet')

data, samplerate = sf.read(filename, dtype='float32')
data = data.T
data_22k = librosa.resample(data, samplerate, 22050)
