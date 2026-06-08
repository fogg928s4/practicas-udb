#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define CIELA "/obj_1"
#define SIZE 200

int main(int argc, char **argv) {
	int Ad; //Anthony Davis

    Ad = shm_open(CIELA, O_CREAT | O_RDWR, 00600);
    if(Ad == -1) {
        perror("Error al crear objeto en la memoria");
        exit(1);
    }
    ftruncate(Ad, SIZE);
    if( -1 == ftruncate(Ad, SIZE)) {
        perror("Error al crear espacio del objeto en la memoria");
        exit(1);
    }
    return 0;

}
