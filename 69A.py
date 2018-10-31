n = int(raw_input())
s = 0
a,b,c = 0,0,0
while(n > 0):
	x,y,z = map(int, (raw_input()).split(" "))
	a+= x
	b+= y
	c+= z
	n -= 1
if a==0 and b==0 and c==0 : print "YES"
else: print "NO"