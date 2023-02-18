from sys import stdin

while True:
	a = stdin.readline().rstrip().split()
	n = int(a[0])
	x = int(a[1])
	if n == 0 and x == 0:
		break

	count = 0
	for i in range(1,n+1):
		for j in range(i+1,n+1):
			for k in range(j+1,n+1):
				if (i + j + k) == x:
					count = count + 1
	print(count)

