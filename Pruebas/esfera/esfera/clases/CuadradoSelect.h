#pragma once 

#include "./Vector3D.h"
#include <unistd.h>
#include <GL/glut.h>
#include <iostream>

using namespace std;

class CuadradoSelect{
private:
	Vector3D esquina1,esquina2;//Definicion de las esquinas del cuadrado
	int iniEsquinas;//Variable que indica que se han inicializado las esquinas

public:
	CuadradoSelect(void);
	~CuadradoSelect(void);

	void SetEsquinaSup(Vector3D esquinaSup);
	void SetEsquinaInf(Vector3D *esquinaInf);
	void SetIniEsquinas(int ini);

	int GetIniEsquinas();

	void Dibuja();

	friend class Interacciones;
};
