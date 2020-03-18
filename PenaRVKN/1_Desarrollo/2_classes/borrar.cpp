#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "./DDBB.h"

using namespace std;

int main(void)
{
	int aux;
	DDBB DB;

	aux = DB.CreateDB();

	cout<<"\nEl valor devuelto es:"<<aux<<"\n";

	return 0;
}
