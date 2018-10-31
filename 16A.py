n,m = map(int, raw_input().split(" "))
x=[str(raw_input())]
for i in range(1, n):
	m = str(raw_input())
	if m != x[i-1]:
		x.append(str(raw_input()))
		for i in x:
			if i != x[0]:
				print "NO"
				exit(0)
	else:
		print "NO"
		exit(0)
print "YES"