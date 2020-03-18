// This class management all operations relationship with the data base

#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

#include "./parametros.h"

using namespace std;

class DDBB{
private:

public:
	int CreateDB(void);

	DDBB(void);
	~DDBB(void);
};
