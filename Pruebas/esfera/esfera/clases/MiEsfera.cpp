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

void MiEsfera::SetNewPosition(Vector3D nPos)
{
	newPosicion.x = nPos.x;
	newPosicion.y = nPos.y;
	newPosicion.z = nPos.z;
}

void  MiEsfera::Mueve()
{	
	if(posicion.x != newPosicion.x)
	{
		if(posicion.x < newPosicion.x)
			posicion.x = posicion.x + 0.025 * newPosicion.x;
		if(posicion.x > newPosicion.x)
			posicion.x = posicion.x - 0.025 * newPosicion.x;
	}

	if(posicion.y != newPosicion.y)
	{
		if(posicion.y < newPosicion.y)
			posicion.y = posicion.y + 0.025 * newPosicion.y;
		if(posicion.y > newPosicion.y)
			posicion.y = posicion.y - 0.025 * newPosicion.y;
	}

	if(posicion.z != newPosicion.z)
	{
		if(posicion.z < newPosicion.z)
			posicion.z = posicion.z + 0.025 * newPosicion.z;
		if(posicion.z > newPosicion.z)
			posicion.z = posicion.z - 0.025 * newPosicion.z;
	}
}

MiEsfera::MiEsfera(void)
{
	rojo = 255;
	verde = 0;
	azul = 0;
	radio = 10.0f;
	posicion.x=0.0f;
	posicion.y=0.0f;
	posicion.z=0.0f;

	seleccionable = 1;
	newPosicion.x = posicion.x;
	newPosicion.y = posicion.y;
	newPosicion.z = posicion.z;
}

MiEsfera::~MiEsfera(void)
{

}