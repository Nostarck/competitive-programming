
m = 1000000007

def p0w(a,b,mod):
	resp = 1
	while b > 0:
		if(b&1 == 1):
			resp = (resp*a) % mod
		
		b = b >> 1;
		a = (a*a) % mod
	return resp;

def mcd(a,b):
	if(b==0):
		return a
	else:
		return mcd(b,a%b)

t = int(input())
while(t > 0):
	l = map(int,input().strip().split(" "))
	e = [];
	for x in l:
   		e += [x]
	a = e[0]
	b = e[1]
	n = e[2]
	
	r = abs(a-b)
	if(r == 0):
		exp = (p0w(a,n,1000000007)) + (p0w(b,n,1000000007))
	else:
		exp = (p0w(a,n,r)) + (p0w(b,n,r))
	if(exp == 0):
		print(r%m)
	else:
		print(mcd(exp,r)%m)
	t -= 1