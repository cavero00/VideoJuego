#include "./Mundo.h"

void Mundo::Inicializa()
{
	//Inicializamos de forma dinamica los objetos en el mundo
	MiEsfera *mes = new MiEsfera(); mes->SetRadio(5.0f);mes->SetPosicion(20.0f,0.0f,0.0f);
		mes->SetColor(255,0,255);esferas.Agregar(mes);

	MiEsfera *mes2 = new MiEsfera(); mes2->SetRadio(10.0f);mes2->SetPosicion(0.0f,0.0f,0.0f);
		mes2->SetColor(255,0,255);esferas.Agregar(mes2);
}

void Mundo::Dibuja()
{
	//Fijo la camara sobre el eje z, mirando hacia el origen
	gluLookAt(posObservador.x,posObservador.y,posObservador.z + ALTURA_STANDARD_Z, //Poscicion de la camara
		posMirar.x,posMirar.y,0.0f,	   //Hacia donde mira
		0.0f,1.0f,0.0f);	

	//Se dibujan todos los elementos del mundo
	esferas.Dibuja();

	if(cuadroSelect.GetIniEsquinas() != 0)
		cuadroSelect.Dibuja();
}

void Mundo::Mueve(float t)
{
	esferas.Mueve();

	listaInteraccion.ListasSeleccion(esferas,cuadroSelect);
}

void Mundo::Tecla(unsigned char key)
{
	//En funcion de que tecla se pulse, el mundo se mueve hacia un lugar u otro
	switch(key)
	{
		case 'd':
			posObservador.x++;
			posMirar.x++;				
			break;

		case 'a':
			posObservador.x--;
			posMirar.x--;
			break;
		
		case 's':
			posObservador.y--;
			posMirar.y--;
			break;

		case 'w':
			posObservador.y++;
			posMirar.y++;
			break;

		default:
			break;
	}
}

void Mundo::ActivaRaton(int x, int y)
{
	//Posicion del raton al hacer click
	posCursorClick.PosicionRaton(x,y,posObservador);
	esferas.SetNewPosition(posCursorClick);
	//cout<<"Nueva posicion x: "<<posCursorClick.x<<" y: "<<posCursorClick.y<<" z: "<<posCursorClick.z<<"\n";
}

void Mundo::PasivaRaton(int x, int y)
{
	//Posicion del raton actual, sin tener que hacer click
	posCursorActual.PosicionRaton(x,y,posObservador);
}

void Mundo::ControlRaton(int button,int x,int y)
{
	//Gestion de los botones del raton
	switch(button)
	{
		//Boton izquierdo
		//Gestiona:
		//	- Movimiento de objetos
		//	- Sleccion de objetos
		case 0:
			//Accion de controlar la posicion del raton
			this->ActivaRaton(x,y);

			//Seteamos los bordes del cuadrado de seleccion
			if(click == 0)
			{								
				cuadroSelect.SetIniEsquinas(0);
				cuadroSelect.SetEsquinaSup(posCursorClick);			
				click = 1;
			}
			else
			{
				cuadroSelect.SetEsquinaInf(&posCursorActual);
				cuadroSelect.SetIniEsquinas(1);
				click = 0;			
			}
			break;

		//Movimiento de la ruleta del raton
		case 3:
			if((posObservador.z + ALTURA_STANDARD_Z) == ALTURA_MIN)
				break;
			else
			{
				posObservador.z--;
				break;
			}

		//Movimiento de la ruleta del raton
		case 4:
			if((posObservador.z + ALTURA_STANDARD_Z) == ALTURA_MAX)
				break;
			else
			{
				posObservador.z++;
				break;
			}

		default:
			break;
	}
}

Mundo::Mundo(void)
{
	posObservador.x = 0.0f;
	posObservador.y = 0.0f;
	posObservador.z = 0.0f;

	posMirar.x = 0.0f;
	posMirar.y = 0.0f;
	posMirar.z=0.0f;

	posCursorClick.z = 0.0f;

	posCursorActual.z = 0.0f;

	click = 0.0f;
}

Mundo::~Mundo(void)
{

}