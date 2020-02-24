#pragma once

#include "./ListaMiEsferas.h"
#include "./Interacciones.h"
#include <iostream>

using namespace std;

class ListaInteracciones
{
public:
	void ListasSeleccion(ListaMiEsferas &ms,CuadradoSelect cs);

	ListaInteracciones();
	~ListaInteracciones();
};