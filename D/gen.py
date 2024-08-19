from cyaron import*
import random
for did in range(1,21):
	print(did,"/",20)
	io=IO(file_prefix="D",data_id=did)
	s=String.random(1000000)
	io.input_write(s)
	io.input_write("\n")
	io.output_gen("./std")
