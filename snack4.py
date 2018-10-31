t = int(raw_input())
while(t > 0):
	n = int(raw_input())
	a = map(int, raw_input().split(" "))
	a.sort(reverse=True)
	print a
	count = 0
	for i in range(0, len(a)-1):
		m = i+1
		k = a[m]
		j = m
		while a[j] == k and j < len(a):
			j = m
			count += 1
			m = j+1
		j = m			
	print count
	t -= 1