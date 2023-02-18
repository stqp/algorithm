from sys import stdin

a = stdin.readline().rstrip().split()
n = int(a[0])

_sum = 0
for i in range(1, n+1):
	if i%2 == 0:
		continue
	count = 0
	for j in range(1, i+1):
		if i % j == 0:
			count = count + 1
	if count == 8:
		_sum = _sum + 1

print(_sum)