#pragma once // Para que solo incluya esta libreria una vez, igual que el #ifdef en C

//#include "./MiEsfera.h"
#include "./CuadradoSelect.h"
#include "../variables/variables.h"
#include "./ListaMiEsferas.h"
#include "./ListaInteracciones.h"
#include <GL/glut.h>
#include <iostream>

using namespace std;

class Mundo{	
private:
	//Fijamos hacia donde mira el observador.
	Vector3D posObservador;//Poscion del observador(camara)
	Vector3D posMirar;//A donde mira el observador

	//Posiciones del cursor
	Vector3D posCursorClick;//Posicion del cursor al hacer click
	Vector3D posCursorActual;//Posicion del cursor actual

	int click;//Click del raton

public:
	//Objetos manejados por Mundo
	MiEsfera miEsfera;
	CuadradoSelect cuadroSelect;

	ListaMiEsferas esferas;

	ListaInteracciones listaInteraccion;

	//Funciones a ejecutar en mundo.cpp
	Mundo(void);
	~Mundo(void);

	void Inicializa();//Inicializa los valores del mundo
	void Dibuja();//Dibuja los elementos
	void Tecla(unsigned char key);//Mueve la camara del juego
	void Mueve(float t);//Mueve los objetos
	void ActivaRaton(int x, int y);//obtiene la posicion del raton al hacer click
	void PasivaRaton(int x,int y);//Obtiene la posicion del raton siempre
	void ControlRaton(int button,int x,int y);//Controla los botones del raton
};