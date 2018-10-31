import math
n = int(raw_input())
print int(math.ceil(n*n/2.0))
for i in range(0, n):
	line = ""
	for j in range(0, n):
		if i%2 == 0:
			if j%2 == 0: line += "C"
			else: line += "."
		else:
			if j%2 == 0: line += "."
			else: line += "C"

	print line