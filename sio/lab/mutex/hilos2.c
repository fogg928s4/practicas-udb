#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

#define BUCLE 1000000

//no se reinicia con cada ejecucion
static int contador = 0;

static void *function_hilo1(void *arg) {
    for(int i = 0; i<BUCLE; i++, contador++);
}

static void *function_hilo2(void *arg){
    for(int i = 0; i<BUCLE; i++, contador--);
}

int main(void){
    pthread_t hilo1, hilo2;
    //creacion de los hilos
    pthread_create(&hilo1, NULL,  *function_hilo1, NULL);
    pthread_create(&hilo2, NULL,  *function_hilo2, NULL);

    pthread_join(hilo1, NULL);
    pthread_join(hilo2, NULL);

    puts("Hilos 2, semana 8");
    printf("El valor del contador es: %d \n", contador);
    return 0;
}