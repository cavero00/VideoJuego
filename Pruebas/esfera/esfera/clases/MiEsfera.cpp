#include "MiEsfera.h"

void MiEsfera::SetRadio(float r)
{
	radio=r;
}

void MiEsfera::SetColor(unsigned char r,unsigned char v,unsigned char a)
{
	rojo=r;
	verde=v;
	azul=a;
}

void MiEsfera::SetPosicion(float ix,float iy,float iz)
{
	posicion.x=ix;
	posicion.y=iy;
	posicion.z=0;
}

void MiEsfera::Dibuja()
{
	//Dibujar una esfera
	glColor3ub(rojo,verde,azul);
	glTranslatef(posicion.x,posicion.y,posicion.z);
	glutSolidSphere(radio,16,16);
	glTranslatef(-posicion.x,-posicion.y,-posicion.z);
}

void  MiEsfera::Mueve()
{	

}

MiEsfera::MiEsfera(void)
{
	rojo = 255;
	verde = 0;
	azul = 0;
	radio = 10.0;
	posicion.x=0;
	posicion.y=0;
	posicion.z=0;
}

MiEsfera::~MiEsfera(void)
{

}