t = int(raw_input())
while( t > 0):
	n = int(raw_input())
	a = map(int, raw_input().split(" "))
	count = 0
	x = [a[0]]
	m = 1
	t = a[0]
	for i in range(0,len(a)):
		for j in  range (m, t):
			x.append(a[j])
			m = j+1
			t += a[j]
			print x
		count += 1
		if x == a:
			print count
			break
	t -= 1