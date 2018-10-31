n = int(raw_input())
s = map(int, raw_input().split(" "))
levels = s[1:]
s = map(int, raw_input().split(" "))
levels += s[1:]
for i in range(1, n+1):
	if i not in levels:
		print "Oh, my keyboard!"
		exit(0)
print "I become the guy."		 