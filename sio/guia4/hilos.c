#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

void *hilo(void *arg) {
	for(int i=0; i<10; i++){
		printf("Hilo N° %d\n", i);
		sleep(1);
	}
	return NULL;
}

int main() {
	pthread_t nhilo;
	if(pthread_create(&nhilo, NULL, hilo, NULL)) {
		perror("Error creando el hilo :(\n");
		abort();
	}
	printf("Espera union de hilos ....\n");
	if (pthread_join(nhilo, NULL)) {
		perror("Error uniendo los hilos :(\n");
		abort();
	}
	printf("Fin de union de hilos :D\n");
	exit(0); //????
	
	return 0;
}