#include "./Interacciones.h"

bool Interacciones::Seleccion(CuadradoSelect cuadro,MiEsfera esfera)
{
	//Para seleccionar una esfera, el centro (posiciones) de esta debe caer dentro del cuadrado

	if((esfera.posicion.x <= cuadro.esquina1.x) && (esfera.posicion.x >= cuadro.esquina2.x) && 
		(esfera.posicion.y <= cuadro.esquina1.y) && (esfera.posicion.y >= cuadro.esquina2.y))
		return true;
	else
		return false;
}

Interacciones::Interacciones()
{

}

Interacciones::~Interacciones()
{

}