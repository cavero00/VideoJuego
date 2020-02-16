#include <GL/glut.h>
#include <math.h>
#include "./clases/Mundo.h"
#include <iostream>

using namespace std;

//los callback, funciones que seran llamadas automaticamente por la glut
//cuando sucedan eventos
//NO HACE FALTA LLAMARLAS EXPLICITAMENTE


unsigned char key;
bool click;//necesario para la activa del raton


void OnDraw(void); //esta funcion sera llamada para dibujar
void OnTimer(int value); //esta funcion sera llamada cuando transcurra una temporizacion
void OnKeyboardDown(unsigned char key, int x, int y); //cuando se pulse una tecla	
void OnSpecialKeyboardDown(int key, int x, int y); //cuando se pulse una tecla especial (truco)
void OnMouseMove(int button, int state,
                                int x, int y);//para saber donde clikea el raton
void OnMousePassive(int x, int y);//para saber la posicion del cursor

Mundo mundo;


int main(int argc,char* argv[])
{
	//Inicializar el gestor de ventanas GLUT
	//y crear la ventana
	glutInit(&argc, argv);
	glutInitWindowSize(800,600);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutCreateWindow("MiEsfera");

	//habilitar luces y definir perspectiva
	glEnable(GL_LIGHT0);
	glEnable(GL_LIGHTING);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_COLOR_MATERIAL);	
	glMatrixMode(GL_PROJECTION);   
	gluPerspective(45.0, 800/600.0f, 0.1, 150);
	
	//Registrar los callbacks
	glutDisplayFunc(OnDraw);
	glutTimerFunc(25,OnTimer,0);//le decimos que dentro de 25ms llame 1 vez a la funcion OnTimer()
	glutKeyboardFunc(OnKeyboardDown);

	//llamadas a cursores y pulsar dos veces las teclas
	glutMouseFunc(OnMouseMove);
	glutSpecialFunc(OnSpecialKeyboardDown);//para pulsar dos teclas a la vez
    glutPassiveMotionFunc(OnMousePassive);

	//inicializamos valores  	
	mundo.Inicializa();	

	//pasarle el control a GLUT,que llamara a los callbacks
	glutMainLoop();	

	return 0;   
}
void OnDraw(void)
{
	//Borrado de la pantalla	
   	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	//Para definir el punto de vista
	glMatrixMode(GL_MODELVIEW);	
	glLoadIdentity();
	//dibujar
	mundo.Dibuja();	
	
	//aqui es donde hay que poner el código de dibujo
	//glutWireCube(5);//Diuja un cubo despues de dibujar todo

	//Al final, cambiar el buffer (redibujar) 

	//no borrar esta linea ni poner nada despues
	glutSwapBuffers();
}

void OnKeyboardDown(unsigned char key, int x_t, int y_t)
{ 
	//Para usar "asdw" como cursores
	mundo.Tecla(key);
	
	glutPostRedisplay();
}

void OnTimer(int value)
{
	//mundo.Mueve(0.025);
	
	//no borrar estas lineas 
	glutTimerFunc(25,OnTimer,0); 
	glutPostRedisplay();
}

void OnSpecialKeyboardDown(int key, int x, int y) 
{ 
	//para usar los cursores
	//mundo.TeclaEspecial(key);
}


void OnMouseMove(int button, int state, int x, int y){
	if (click==0)//Deteccion del flanco positivo al pulsar el raton, sino detecta el flanco positivo y negativo
	{
		click=1;
		mundo.ActivaRaton(x,y);	
		mundo.ControlRaton(button);
		//cout<<"Tecla del raton: "<<button<<"\n";
	}
	else
		click=0;
	
}

void OnMousePassive(int x, int y){
	mundo.PasivaRaton(x,y);
	
}
