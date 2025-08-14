from collections import Counter

word_dict = {}

print("Hello, welcome to my Word Frequency Counter" \
"\nPlease enter a sentence, and I will give you a total amount of times" \
"each word pops up.")
sentence = input("Please enter your sentence: ")

words = sentence.split()
amount_appeared = Counter(words)
word_dict = amount_appeared

print(word_dict)