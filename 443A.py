a = raw_input()
s =a[1:-1].split(", ")
s.sort()
count = 0
for i in range (0, len(s)):
	if s[i] != s[i-1]: count += 1
print count