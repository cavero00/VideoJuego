#include "./Vector3D.h"

void Vector3D::PosicionRaton(int x,int y,Vector3D posInicial)
{
	y=600-y;
	//codigo de transformacion de sistema a otro 
	this->x=posInicial.x+0.577f*(atan2((x-400),(1289-y))*360/(2*PI));
	this->y=posInicial.y+0.00000000003*y*y*y*y+0.000000008*y*y*y+0.00002*y*y+0.0246*y-2.7006-6.89644;
	this->z=0.0f;
}

Vector3D Vector3D::VectorUnitario(Vector3D fin)
{
	Vector3D vector;
	float modulo;

	vector.x = fin.x - this->x;
	vector.y = fin.y - this->y;
	vector.z = fin.z - this->z;

	modulo = sqrt(vector.x*vector.x + vector.y*vector.y + vector.z*vector.z);

	vector.x/=modulo;
	vector.y/=modulo;
	vector.z/=modulo;

	return(vector);
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
