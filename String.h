#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool IsEmpty(char* cadena){
    //if(cadena == "") return true;
    //return false;
    return cadena[0] == "\0" ? true : false;
}

int GetLength1(char* cadena){ return sizeof(cadena); }

int GetLength2(char* cadena){ 
    int i = 0;
    for(;cadena[i] != "\0"; i++) return i;
}

//tengo Hola\0 y mundo\0 tengo uque hacer hola mundo => for1 hasta econtrar \0 y guado el resultado
//el resultado arranca desde el final del 

char* mergeString(char* str1, char* str2){
    char* final = "";
    for(int i = 0; i < GetLength2(str1); i++){
        final[i] = str1[i];
    }
    int j = GetLength2(str1)-1;
    for(int i = 0; i < GetLength2(str2); i++){
        final[j+i] = str2[i];
    }
    final[GetLength2(final)-1]="\0";
    return final;
}

bool AreEqual(char* str1, char* str2){ 
    if(GetLength2(str1) == GetLength2(str2)){
        for(int i = 0; i < GetLength2(str1); i++){
            if(str1[i] != str2[i]) return false;
        }
    } 
    else return false; 
    return true; 
}

bool AreDecimalDigits(char* numeros){
    /* 
    int acci, contador = 0;
    for ( int i = 0; i < GetLength2(numeros); i++)
    {
        acci= numeros[i];
        if (acci >47 && acci <58)contador++;

    }
    if(contador == GetLength2(numeros)) return true;
    else return false;
    
*/

    /*
int = char

if (int >47 && int <58)
//
0->9    
48->57, 
   PREGUNTAR */ 
    return 0;
}

bool Contains(char* str, char letter){
    for(int i = 0; i < GetLength2(str); i++){
        if(str[i] == letter) return true;
    }
    return false;
}

//int ToInteger(){}

int sumarValoresDeAscii(){
    
    return sumarValoresDeAscii();
}


char* pow(){}