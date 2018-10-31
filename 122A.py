d = [4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777]
n = int(raw_input())
for i in range(len(d)):
	if n%d[i] == 0 :
		print "YES"
		exit (0)
print "NO"