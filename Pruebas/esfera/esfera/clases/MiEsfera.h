#pragma once

#include "./Vector3D.h"
#include <GL/glut.h>

class MiEsfera{
private:
	float radio;
	unsigned char rojo;
	unsigned char verde;
	unsigned char azul;
	Vector3D posicion;
	int seleccionable = 1;

public:
	MiEsfera(void);
	~MiEsfera(void);

	void SetRadio(float r);
	void SetColor(unsigned char r,unsigned char v,unsigned char a);
	void SetPosicion(float ix,float iy,float iz);

	void Dibuja();
	void Mueve();
};