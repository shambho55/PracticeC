t = int(input())
while t > 0:
	n = int(input())
	string = input()
	arr = [int(i) for i in input().split()]
	d = {}
	for i in string:
		d[i] = d.get(i,0) + 1
	for i in range(len(string):
		if d[string[i]] == 1:
			arr[i] = 0
	ans = 0
	for i in range(len(arr)):
		ans += arr[i]
	print(ans)
