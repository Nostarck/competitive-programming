def min(a,b):
	if(a>=b):
		return b
	return a



t = int(input())


while t > 0:
	
	x,y = map(int, input().split())
	a,b = map(int, input().split())
	op1 = 100000000000000000000000000000000000
	op2 = 1000000000000000000000000000000000000
	op3 = 0
	if((x<0 and y < 0) or (x > 0 and y > 0)):		
		if(x<0):
			x = x*-1
		if(y<0):
			y = y*-1
		op1 = x-y
		if(op1 < 0):
			op1*=-1
		op1*=a;
		op2 = min(x,y)*b
	if(x<0):
		x = x*-1
	if(y<0):
		y = y*-1
	
	op3 = x*a + y*a
	r = min(op1+op2,op3)
	
	print(r)
	t-=1
	
