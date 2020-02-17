#pragma once

#include "./Vector3D.h"
#include <GL/glut.h>
#include <iostream>

using namespace std;

class MiEsfera{
private:
	float radio;
	unsigned char rojo;
	unsigned char verde;
	unsigned char azul;
	Vector3D posicion;
	int seleccionable;
	Vector3D newPosicion;

public:
	MiEsfera(void);
	~MiEsfera(void);

	void SetRadio(float r);
	void SetColor(unsigned char r,unsigned char v,unsigned char a);
	void SetPosicion(float ix,float iy,float iz);
	void SetNewPosition(Vector3D nPos);

	void Dibuja();
	void Mueve();
};