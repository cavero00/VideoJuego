#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void)
{
	pid_t pid;
	int i,n=10;

	printf("EL PID DEL PROCESO PADRE (fork.c) ES: %d\n\n",getpid());

// ---------------------------------------------------------------------
// El proceso padre crea 10 hijos

	for(i=1;i<11;i++)
	{
		pid=fork();

		printf("%d    ",i);

		if(pid==0)
		{
			sleep(3);

			printf("El pid del hijo es %d\n",getpid());
			break;
		}
		if(pid>0){
			printf("------EL PADRE\n");
			//wait(getpid());//EL padre espera al hijo que
					//acaba de crear
		}
	}

// ---------------------------------------------------------------------
// El padre crea un solo hijo

	/*pid=fork();
	switch(pid)
	{
		case -1:
			return -1;
		case 0:
			sleep(2);
			printf("EL HIJO\n");
			execlp("ls","ls","-l",NULL);
			perror("exec");
			return 2;
		default:
			printf("EL PADRE\n");
	}*/

	wait(getpid());//El padre espera a los hijos
	sleep(1);
	printf("El padre del proceso %d es %d\n",getpid(),getppid());
	return 0;
}
