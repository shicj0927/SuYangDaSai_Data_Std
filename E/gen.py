from cyaron import*
import random
for did in range(1,21):
	print(did,"/",20)
	io=IO(file_prefix="E",data_id=did)
	n=randint(0,100000)
	io.input_write(n)
	io.input_write("\n")
	ans=0
	for i in range(n-1):
		x=randint(0,1000000)
		io.input_write(x)
		ans^=x
	if randint(0,1)==1:
		io.input_write(randint(0,1000000))
	else:
		io.input_write(ans)
	io.input_write("\n")
	io.output_gen("./std")

