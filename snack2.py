prime = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97]
x = []
for i in range(0, len(prime)):
	for j in range(i+1, len(prime)):
		if prime[i]*prime[j]<=200:
			x.append(prime[i]*prime[j])
x.sort()
t = int(raw_input())
while(t > 0):
	flag = 0
	n = int(raw_input())
	for i in x:
		if i>n/2: break
		if n - i in x:
			print "YES"
			flag = 1
			break
	if flag == 0: print "NO"
	t -= 1