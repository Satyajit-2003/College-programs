import pywhatkit

file  = open(r".\main.py", 'r')
text = file.read()

pywhatkit.text_to_handwriting(text, save_to='text.png')