#include "./DDBB.h"

int DDBB::CreateDB(void)
{
	int error;
	char command[MAX_PATH_FILE];

	cout<<"\nCreacion usuarios, lo hace root\n";
	sprintf(command,"sudo mysql -u root -p < %s%s%s",
		PATH_DB_FILES,
		"/",
		FILE_DB_CREATE_USER);

	if(system(command)!=0)
		return ERROR;

	cout<<"\n\nBorrando base de datos\n";
	sprintf(command,"mysql -u cavero -p%s < %s%s%s",
		SQL,
		PATH_DB_FILES,
		"/",
		FILE_DB_DROP_DB);

	if(system(command)!=0)
		return ERROR;

	cout<<"\n\nCreando nueva base de datos\n";
	sprintf(command,"mysql -u cavero -p%s < %s%s%s",
		SQL,
		PATH_DB_FILES,
		"/",
		FILE_DB_CREATE_DB);

	if(system(command)!=0)
		return ERROR;

	cout<<"\n\nCreando las nuevas tablas\n";
        sprintf(command,"mysql -u cavero -p%s < %s%s%s",
		SQL,
                PATH_DB_FILES,
                "/",
                FILE_DB_CREATE_DB_MODEL);

        if(system(command)!=0)
                return ERROR;


	return OK;
}

DDBB::DDBB(void)
{
}

DDBB::~DDBB(void)
{
}
