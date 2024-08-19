from cyaron import*
import random
for did in range(1,21):
	print(did,"/",20)
	io=IO(file_prefix="C",data_id=did)
	n=randint(0,100000)
	q=randint(0,100000)
	io.input_write(n)
	io.input_write("\n")
	a=[]
	for i in range(n):
		_id=randint(0,1000000)
		_s=randint(0,720)
		io.input_write(_id,_s)
		io.input_write("\n")
		a.append(_id)
	io.input_write(q)
	io.input_write("\n")
	for i in range(q):
		io.input_write(random.choices(a))
		io.input_write("\n")
	io.output_gen("./std")
