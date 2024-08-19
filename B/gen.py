from cyaron import*
for did in range(1,21):
	print(did,"/",20)
	io=IO(file_prefix="B",data_id=did)
	n=randint(0,100000)
	m=randint(0,1000000000)
	io.input_write(n,m)
	io.input_write("\n")
	for i in range(n):
		io.input_write(randint(1,m))
	io.output_gen("./std")
