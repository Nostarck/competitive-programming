
def p0w(a,b,mod):
	resp = 1
	while b > 0:
		if(b&1 == 1):
			resp = (resp*a) % mod
		
		b = b >> 1;
		a = (a*a) % mod
	return resp;




x = int(input())
permutaciones = p0w(27,x,1000000007);
combinaciones = p0w(7,x,1000000007);
print((permutaciones-combinaciones)%1000000007);



