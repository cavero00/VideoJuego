#pragma once 

#include <math.h>

#define PI 3.141592653589793238462643383279502884L

class Vector3D{
public:
	float x;
	float y;
	float z;

	Vector3D() : x(0),y(0),z(0){}// Constructor por defecto
	Vector3D(float ix,float iy,float iz);
	~Vector3D(void);

	void PosicionRaton(int x,int y,Vector3D posInicial);//Calcula la posicion del raton en la pantalla
	Vector3D VectorUnitario(Vector3D fin);
};