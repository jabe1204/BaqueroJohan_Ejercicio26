multiplicados.dat : multiplicados.x
	c++ factorial.cpp -o factorial.x
	./factorial.x
	./multiplicados.x
	./multiplicados.x > multiplicados.dat
	
multiplicados.x : multiplicados.cpp
	c++ multiplicados.cpp -o multiplicados.x

clean :
	rm factorial.x multiplicados.dat multiplicados.x 
