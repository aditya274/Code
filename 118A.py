s = list(str(raw_input()))
print s
print len(s)
a = ''
vowels = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']
for m in range(0,len(s)):
    if s[m].isupper():
    	s[m] = s[m].lower()

    if s[m] not in vowels:
	    a += '.' + s[m]
print a        