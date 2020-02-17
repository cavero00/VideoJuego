#Este Makefile se usa para probar el programa de esfera

#Declaracion de las variables necesarias
PATH_MAIN = esfera/
PATH_CLASSES = $(PATH_MAIN)clases/
PATH_BIN=binarios/

#.o necesarios para generar el ejecutable
OBJS = binarios/Vector3D.o binarios/MiEsfera.o binarios/Mundo.o binarios/CuadradoSelect.o binarios/ListaMiEsferas.o

#Ubicacion de los .o
MIESFERA_O = $(PATH_BIN)MiEsfera.o
MUNDO_O = $(PATH_BIN)Mundo.o
VECTOR3D_O = $(PATH_BIN)Vector3D.o
CUADRO_SELECT_O = $(PATH_BIN)CuadradoSelect.o
LIST_MIESFERA_O = $(PATH_BIN)ListaMiEsferas.o

#Ubicacion de los .cpp
ESFERA_CPP = $(PATH_MAIN)ESFERA.cpp
MIESFERA_CPP = $(PATH_CLASSES)MiEsfera.cpp
MUNDO_CPP = $(PATH_CLASSES)Mundo.cpp
VECTOR3D_CPP = $(PATH_CLASSES)Vector3D.cpp
CUADRO_SELECT_CPP = $(PATH_CLASSES)CuadradoSelect.cpp
LIST_MIESFERA_CPP = $(PATH_CLASSES)ListaMiEsferas.cpp

#Ubicacion de los .h
MIESFERA_H = $(PATH_CLASSES)MiEsfera.h
MUNDO_H = $(PATH_CLASSES)Mundo.h
VECTOR3D_H = $(PATH_CLASSES)Vector3D.h
CUADRO_SELECT_H = $(PATH_CLASSES)CuadradoSelect.h
LIST_MIESFERA_H = $(PATH_CLASSES)ListaMiEsferas.h

CPP_S = $(wildcard $(PATH_CLASSES)*.cpp)
O_S =  $(addprefix $(PATH_BIN), $(notdir $(CPP_S:.cpp=.o)))
H_S = $(wildcard $(PATH_CLASSES)*.h)

all:
	make ProgramEsfera
	make clean

ProgramEsfera: $(OBJS)
	$(CXX) $(ESFERA_CPP) $(OBJS) -o $@ -lglut -lGLU -lGL

binarios/Vector3D.o: $(VECTOR3D_CPP) $(VECTOR3D_H)
	$(CXX) -c -o $(VECTOR3D_O) $(VECTOR3D_CPP)

binarios/CuadradoSelect.o: $(CUADRO_SELECT_CPP) $(CUADRO_SELECT_H)
	$(CXX) -c -o $(CUADRO_SELECT_O) $(CUADRO_SELECT_CPP)

binarios/MiEsfera.o: $(MIESFERA_CPP) $(MIESFERA_H)
	$(CXX) -c -o $(MIESFERA_O) $(MIESFERA_CPP)

binarios/ListaMiEsferas.o: $(LIST_MIESFERA_CPP) $(LIST_MIESFERA_H)
	$(CXX) -c -o $(LIST_MIESFERA_O) $(LIST_MIESFERA_CPP)

binarios/Mundo.o: $(MUNDO_CPP) $(MUNDO_H)
	$(CXX) -c -o $(MUNDO_O) $(MUNDO_CPP)

clean:
	$(RM) $(PATH_BIN)*.o $(PATH_CLASSES)*.gch *.out

cleanAll:
	make clean
	$(RM) ProgramEsfera
