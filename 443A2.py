s = str(raw_input())
list = []
if s == "{}":
	print "0"
	exit(0)
for x in s[1:-1].split(", "):  
	if x not in list: list.append(x)  
print len(list)