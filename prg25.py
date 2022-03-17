# print EVEN length words of a string 

# declare, assign string
str = "Python is a programming language"

# extract words in list
words = list(str.split(' '))

# print string
print("str: "), str

# print list converted string i.e. list of words
print("list converted string: "), words

# iterate words, get length
# if length is EVEN print word
print("EVEN length words:")
for W in words:
	if(len(W)%2==0 ):
		print(W)

