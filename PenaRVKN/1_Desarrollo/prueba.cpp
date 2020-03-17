#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(void)
{
	cout<<"\nCreacion usuarios, lo hace root\n";
	system("sudo mysql -u root -p < ./1_Generate_DB/CreateUser.sql");

	cout<<"\n\nBorrando base de datos\n";
	system("mysql -u cavero -p < ./1_Generate_DB/DropDatabase.sql");

	cout<<"\n\nCreando nueva base de datos\n";
	system("mysql -u cavero -p < ./1_Generate_DB/CreateDB.sql");

	return 0;
}
