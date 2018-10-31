n = int(raw_input())
arr = [int(x) for x in raw_input().split()]
max_value = max(arr)
min_value = min(arr)
max_index = 0
min_index = 0 
for i in range(len(arr)):
	j = len(arr)-i-1
	if arr[j] == max_value:
		max_index = j
	if arr[i] == min_value:
		min_index = i

if max_index > min_index: min_index += 1
print n-min_index-1 + max_index 