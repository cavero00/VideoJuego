#include "./Vector3D.h"

void Vector3D::PosicionRaton(int x,int y,Vector3D posInicial)
{
	y=600-y;
	//codigo de transformacion de sistema a otro 
	this->x=posInicial.x+0.577f*(atan2((x-400),(1289-y))*360/(2*PI));
	this->y=posInicial.y+0.00000000003*y*y*y*y+0.000000008*y*y*y+0.00002*y*y+0.0246*y-2.7006-6.89644;
	this->z=0.0f;
}

Vector3D::Vector3D(float ix,float iy,float iz)
{
	x=ix;
	y=iy;
	z=iz;
}

Vector3D::~Vector3D(void)
{

}
