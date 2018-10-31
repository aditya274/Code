n,m = map(int, raw_input().split(" "))
a = map(int, raw_input().split(" "))
a.sort(reverse =True)
min = a[0]-a[m-1]
for i in range(0, len(a)-n+1):
	if a[i]-a[i+n-1] < min: min = a[i]-a[i+n-1]
print min