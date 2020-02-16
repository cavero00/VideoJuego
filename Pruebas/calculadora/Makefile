#Este Makefile se usa para generar el programa calculadora.

#Declaracion de las variables necesarias
OBJS = operaciones.o
FIRST_BIN = calculadora.c++
SECOND_BIN = operaciones.c++

PATH_BIN = ./binarios/$(FIRST_BIN)
PATH_CLASS_BIN = ./clases/binarios/$(SECOND_BIN)
PATH_CLASS_LIB = ./clases/librerias/operaciones.h

#La opcion "all" es cuando se hace un make sin ningun argumento.
#Es decirm cuando se hace un make sin argumentos este hace lo que ponga
#en la primera etiqueta qu encuentre
all:
	make calculadora
	make clean

#En la etqiueta "calculadora" no hace falta especificar que genere los .o
#porque el solo va a la etiqueta donde se generan.
calculadora: $(OBJS)
	$(CXX) $(PATH_BIN) $(OBJS) -o $@

operaciones.o: $(PATH_CLASS_BIN) $(PATH_CLASS_LIB)
	$(CXX) -c $(PATH_CLASS_BIN)  $(PATH_CLASS_LIB)

clean:
	$(RM) *.o $(PATH_CLASS_LIB)*.gch
