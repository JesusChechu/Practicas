/*
 ============================================================================
 Name        : ejerCoches.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct Coche{
	char matricula[7];
	char marca[50];
	char modelo[50];
	int cv;
};

int size (struct Coche taller[]){
	return sizeof(taller)/sizeof(taller[0]);//Lo divide entre la primera celda del array.
}

int buscar (struct Coche taller[], char matricula[]) {
	int i = 0;
	do {
		if (strcasecmp(matricula, taller[i].matricula) == 0) return i;
	}
	while(i++<size(taller));
	return -1;
}



void ordenar (struct Coche taller[]){
		for(int i=0;i<3;i++){
			for(int j=i+1;j<3;j++){
				if(taller[i].cv<taller[j].cv){
					struct Coche aux;
					taller[i]=taller[j];
					taller[j]=aux;
				}
			}
		}
	}

int main(void) {
	int num=3;
	int i=0;
	struct Coche taller[num];
	for(i=0;i<num;i++){
		printf("\nIntroduce los datos del coche %d !!!!!!",i+1);
		printf("\nMatricula: ");
		gets(taller[i].matricula);
		printf("\nMarca: ");
		gets(taller[i].marca);
		printf("\nModelo: ");
		gets(taller[i].modelo);
		printf("\nCv: ");
		scanf("%d",&taller[i].cv);
		setbuf(stdin,NULL);
	}
	int dato=5;
	return void ordenar;

	for(i=0;i<num;i++){
		printf("\n%s %s %s %d",taller[i].matricula, taller[i].marca, taller[i].modelo, taller[i].cv);
	}
	return EXIT_SUCCESS;
}
