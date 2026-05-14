#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool IsEmpty(char* cadena){
    //if(cadena == "") return true;
    //return false;
    return cadena[0] == "\0" ? true : false;
}

//int GetLength1(char* cadena){ return sizeof(cadena); } esto no anda ya que agarra el valor del tamaño de un char

int GetLength(char* cadena){ 
    int i = 0, acumulador = 0;
    for(;cadena[i] != '\0'; i++) acumulador++;
    return acumulador;
}

char* mergeString(char* str1, char* str2){
    char* final = "";
    for(int i = 0; i < GetLength(str1); i++){
        final[i] = str1[i];
    }
    int j = GetLength(str1)-1;
    for(int i = 0; i < GetLength(str2); i++){
        final[j+i] = str2[i];
    }
    final[GetLength(final)-1]="\0";
    return final;
}

bool AreEqual(char* str1, char* str2){ 
    if(GetLength(str1) == GetLength(str2)){
        for(int i = 0; i < GetLength(str1); i++){
            if(str1[i] != str2[i]) return false;
        }
    } 
    else return false; 
    return true; 
}

bool AreDecimalDigits(char* numeros){
    int acci, contador = 0;
    for ( int i = 0; i < GetLength(numeros); i++){
        acci= numeros[i];
        if (acci > 47 && acci < 58)contador++;
    }
    if(contador == GetLength(numeros)) return true;
    else return false;
}

bool Contains(char* str, char letter){
    for(int i = 0; i < GetLength(str); i++){
        if(str[i] == letter) return true;
    }
    return false;
}

//int ToInteger(){}

int sumarValoresDeAscii(){
    return sumarValoresDeAscii();
}


void concatenar(char *origen, char *destino) {
    int i;
    int largoOrigen = GetLength(origen);
    for (i = 0; destino[i] != '\0'; i++) {
        origen[largoOrigen + i] = destino[i];
    }
    origen[largoOrigen + i] = '\0';
}


void repetirCadena(char* resultado,char *patron, int expo){ //pow para strings
    if (expo <= 0)  return; 
    concatenar(resultado, patron);
    repetirCadena(resultado,patron, expo - 1);
}