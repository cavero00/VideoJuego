#pragma once
#include "./MiEsfera.h"
#include "../variables/variables.h"

class ListaMiEsferas
{
private:
	MiEsfera *lista[MAX_ESFERAS]; 
	int numero;
public:
	bool Agregar(MiEsfera *mes);
	void Dibuja();
	void Mueve();
	void SetNewPosition(Vector3D nPos);
	void Eliminar(MiEsfera *mes);
	void Eliminar(int index);
	MiEsfera *GetMiEsfera(int i);
	int GetNumero();

	//friend class ListasInteraccion;

	ListaMiEsferas(void);
	~ListaMiEsferas(void);
};