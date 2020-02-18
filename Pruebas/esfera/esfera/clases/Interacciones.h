#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "./CuadradoSelect.h"
#include "./MiEsfera.h"
#include "./Vector3D.h"

class Interacciones
{
public:
	Interacciones();
	~Interacciones();

	static bool Seleccion(CuadradoSelect cuadro,MiEsfera esfera);//Permite seleccionar a las esferas que caigan dentro del cuadrado

	friend class ListaInteracciones;
};
