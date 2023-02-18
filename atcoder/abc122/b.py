from sys import stdin

s = stdin.readline().rstrip() #.split()

res = 0
for i in range(len(s)):
	for j in range(i, len(s)):
		f = True
		for k in s[i:j+1]:
			if k not in ["A","C","G","T"]:
				f = False
				break
		if f:	
			res = max(res, j-i+1)

print(res)