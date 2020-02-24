#include "./ListaInteracciones.h"

void ListaInteracciones::ListasSeleccion(ListaMiEsferas &ms,CuadradoSelect cs)
{
	for(int i=0;i<ms.numero;i++)
	{
		if(Interacciones::Seleccion(cs,*(ms.lista[i])))
		{
			ms.lista[i]->SetSeleccionado(true);
			cout<<"Selecccionado -- "<<ms.lista[i]->GetSeleccionado()<<"\n";
		}
		ms.lista[i]->SetSeleccionado(false);
	}
}

ListaInteracciones::ListaInteracciones()
{

}

ListaInteracciones::~ListaInteracciones()
{

}