#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// char* concatenar(char primeraCadena, char segundaCadena){
//     char* destino = primeraCadena;
//     char* origen = segundaCadena;
//     //printf("Destino: %s, Primeracadena: %s", destino, primeraCadena); 

//     printf("%d\n",primeraCadena);
//     //printf("%d\n",*destino);
//     while (*destino != '\0') {
//         printf("%d\n",*destino);
//         //printf("%s \n",destino);
//         destino++;
//         // printf("lelga aca1\n");
//         // printf("%d *destino \n",*destino);  
//     }
//     // printf("llega aca2\n");


//     //printf("Experimento: dest %s ,origen %d \n", primeraCadena , *origen);
    
//     while (*origen != '\0') {
//         //printf("%s aca llega \n",*destino);
//         *destino = *origen;
//         //printf("%s\n",destino);
//         destino++;
//         origen++;
//         //printf("lelga aca3\n");
//     }
//     *destino = '\0';
//     //printf("lelga aca4\n");
//     return primeraCadena;
// }

int GetLength(char* cadena){ 
    int i = 0, acumulador = 0;
    for(;cadena[i] != '\0'; i++) acumulador++;
    return acumulador;
}

void concatenar(char *origen, char *destino) {
    int i;
    int largoOrigen = GetLength(origen);
    for (i = 0; destino[i] != '\0'; i++) {
        origen[largoOrigen + i] = destino[i];
    }
    origen[largoOrigen + i] = '\0';
}

void repetirCadena(char* resultado,char *patron, int expo){
    if (expo <= 0)  return; 
    concatenar(resultado, patron);
    repetirCadena(resultado,patron, expo - 1);
}

int main() {
    char h[]="hola";
    char m[100]="";
    
    repetirCadena(m,h,2);
    printf("%s\n",m);


    return 0;
}



