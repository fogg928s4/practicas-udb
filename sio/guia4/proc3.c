#include <unistd.h>
#include <stdio.h>

int main() {
	int pid = getpid();
	printf("El Numero de Proceso Padre es: %d\n", pid);
	
	pid = fork();
	if(pid == 0) {
		printf("El numero de proceso hijo es: %d\n", getpid());
		printf("El numero de proceso de mi padre es: %d\n", getppid());
	
	}
	
	return 0;
}