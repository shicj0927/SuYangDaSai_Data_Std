from cyaron import*
for did in range(1,21):
	io=IO(file_prefix="A",data_id=did)
	a=randint(1,24)
	io.input_write(a)
	b=randint(1,60)
	c=randint(b,60)
	io.input_write(b,c)
	io.input_write("\n")
	io.output_gen("./std")
