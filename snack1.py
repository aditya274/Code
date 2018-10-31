t = int(raw_input())
while(t >= 0):
	a,b = map(int, (raw_input().split(" ")))
	x =[]
	for i in range(0,a):
		x[i].append(int(raw_input().split(" ")))
	t -= 1