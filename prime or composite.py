num=int(input('enter the no.'))
for i in range(2,num):
	if num%i==0:
		print("not prime")
		break 
else :
	print('prime')