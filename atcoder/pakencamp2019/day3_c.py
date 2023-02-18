from sys import stdin

NM = stdin.readline().rstrip().split()
N = int(NM[0])
M = int(NM[1])

A = [list(map(int, stdin.readline().rstrip().split())) for _ in range(N)]

res = 0
for i in range(M):
	for j in range(i+1, M):
		_sum = 0
		for k in range(N):
			_sum = _sum + max(A[k][i], A[k][j])
		res = max(res, _sum)

print(res)