def fibonacci (n):
	if n <= 1:
		return(n)
	else:
		return fibonacci(n-1) + fibonacci(n-2)
sum = 0
for i in range(0, 4000000):
	if fibonacci(i) % 2 == 0:
		sum = sum + fibonacci(i)

print(sum)