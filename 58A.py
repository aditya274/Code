s = list(str(raw_input()))
h = list("hello")
j = 0
for i in range(len(s)):
	if s[i] == h[j]:
		j = j+1
	if j == len(h):
		break
if j == len(h):
 	print "YES"
else:
 	print "NO"