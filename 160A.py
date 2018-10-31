n = int(raw_input())
c = str(raw_input()).split(' ')
c = map(int, c)
c = sorted(c, reverse = True)
print c
s = sum(c)
s1 = 0
count = 0
for i in range(0,len(c)):
	s1 += c[i]
	print s1
 	s -= c[i]
 	print s
 	count +=1
	if s1 > s:
		break

print count