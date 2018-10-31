t = int(raw_input())
while(t >= 0):
	a,b,c = map(int, raw_input().split(" "))
	print (pow(a,b)/c)%(pow(10,9)+7)
	t -= 1