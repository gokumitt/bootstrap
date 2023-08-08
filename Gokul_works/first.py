from deepface import DeepFace
import matplotlib.pyplot as plt
import sys
import os
import speech_recognition as sr
from textblob import TextBlob
from PIL import Image
import cv2
import os
camera = cv2.VideoCapture(0)
while True:
    return_value, image = camera.read()
    gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
    cv2.imshow('image',gray)
    if cv2.waitKey(1)& 0xFF == ord('s'):
        cv2.imwrite('img11.jpg',image)
        break
camera.release()
cv2.destroyAllWindows()
    
img_path = "img11.jpg"
img = cv2.imread(img_path)
demography = DeepFace.analyze(img_path)
r = sr.Recognizer()
mic = sr.Microphone(device_index=1)

with mic as source:
  r.adjust_for_ambient_noise(source , duration=1)
  print()
  print("Which product you want to review")
  print("Listening.......")
  audio = r.listen(source, timeout=10)
  print("Thanks! we got your point")
try:
  product = r.recognize_google(audio)
  print("Text :" + r.recognize_google(audio))
except:
  print("unable to understand")
  sys.exit()
with mic as source:
  r.adjust_for_ambient_noise(source, duration =1)
  print()
  print("Please give your review..")
  print("Listening......")
  audio = r.listen(source, timeout=10)
  print("Thanks")
try:
  text = r.recognize_google(audio)
  print("Text: ", r.recognize_google(audio))
except:
  print("unable to understand")
  sys.exit()

print()
import nltk
from textblob import TextBlob


obj = TextBlob(text)

sentiment , subjectivity = obj.sentiment

print(obj.sentiment)
print("The review is about : ", product)
print("                   Gender: ", demography["gender"] )
print("               Age : ", demography["age"])
print("              Race :" , demography["dominant_race"])
print("            emotion", demography["emotion"])


plt.imshow
image = Image.open(img_path)
image.show()
if sentiment  == 0:
  print("The review is neutal  ")
elif sentiment >0:
  print("The review is positive")
else:
  print("The review is negative")