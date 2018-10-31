c = map(int, (raw_input().split(" ")))
c.sort(reverse = True)
k = int(raw_input())
change = c[0]
for a in len(c):
	if change%k == 0:
		change = c[a]
		break
print k/change