potencial.png: condensador.dat
	python condensador.py 

condensador.dat: condensador.x
	./condensador.x > condensador.dat

condensador.x: condensador.cpp
	c++ condensador.cpp -o codensador.x