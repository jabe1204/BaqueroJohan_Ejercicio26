factorial.dat : factorial.x
	./factorial.x

factorial.x : factorial.cpp
	c++ factorial.cpp -o factorial.x
	
clean :
	rm factorial.x