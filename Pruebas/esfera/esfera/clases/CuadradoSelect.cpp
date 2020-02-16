#include "./CuadradoSelect.h"

void CuadradoSelect::SetIniEsquinas(int ini)
{
	iniEsquinas = ini;
}

int CuadradoSelect::GetIniEsquinas()
{
	return(iniEsquinas);
}

void CuadradoSelect::SetEsquinaSup(Vector3D esquinaSup)
{
	esquina1.x = esquinaSup.x;
	esquina1.y = esquinaSup.y;
}

void CuadradoSelect::SetEsquinaInf(Vector3D *esquinaInf)
{
	esquina2.x = esquinaInf->x;
	esquina2.y = esquinaInf->y;
}

void CuadradoSelect::Dibuja()
{
	glColor3ub(0.0f,255,0.0f);
	glBegin(GL_LINES);
      	glVertex2f(esquina1.x,esquina1.y);
      	glVertex2f(esquina2.x,esquina1.y);
  	glEnd();

  	glBegin(GL_LINES);
      	glVertex2f(esquina2.x,esquina1.y);
      	glVertex2f(esquina2.x,esquina2.y);
  	glEnd();

  	glBegin(GL_LINES);
      	glVertex2f(esquina2.x,esquina2.y);
      	glVertex2f(esquina1.x,esquina2.y);
  	glEnd();

  	glBegin(GL_LINES);
      	glVertex2f(esquina1.x,esquina2.y);
      	glVertex2f(esquina1.x,esquina1.y);
  	glEnd();
}

CuadradoSelect::CuadradoSelect(void)
{
	esquina1.z = 0.0f;
	esquina2.z = 0.0f;

	iniEsquinas = 0;
}

CuadradoSelect::~CuadradoSelect(void)
{
	esquina1.x = 0.0f;
	esquina1.y = 0.0f;

	esquina2.x = 0.0f;
	esquina2.y = 0.0f;
}