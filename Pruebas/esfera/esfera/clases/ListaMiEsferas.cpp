#include "./ListaMiEsferas.h"

bool ListaMiEsferas::Agregar(MiEsfera *mes) 
{  
	if(numero<MAX_ESFERAS)   
		lista[numero++]=mes; 
	else  
		return false;  
	return true;
}

void ListaMiEsferas::Dibuja()
{
	for(int i=0;i<numero;i++) 
		lista[i]->Dibuja(); 
}

void ListaMiEsferas::Mueve()
{
	for(int i=0;i<numero;i++)
		lista[i]->Mueve(); 

}
void ListaMiEsferas::Eliminar(MiEsfera *mes)
{
	for(int i=0;i<numero;i++)
		if(lista[i]==mes)
		{
			Eliminar(i);
			return;
		}
}

void ListaMiEsferas::Eliminar(int index)
{
	if((index<0)||(index>=numero))
		return;
	delete lista[index];
	numero--;
	for(int i=index;i<numero;i++)
		lista[i]=lista[i+1];
}

MiEsfera *ListaMiEsferas::GetMiEsfera(int i)
{
	return lista[i];
}

int ListaMiEsferas::GetNumero()
{
	return numero;
}

ListaMiEsferas::ListaMiEsferas(void)
{
	numero=0; 
	for(int i=0;i<MAX_ESFERAS-1;i++)
		lista[i]=0;
}

ListaMiEsferas::~ListaMiEsferas(void)
{
	
}