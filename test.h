#include <stdio.h>
#ifndef TEST_H
#define TEST_H


struct personaje{
	char nombre[20],tipo[20];
	int fuerza,salud;
	
}per[5];
int y,x;
	
capturar_persona(){
	y=0;
	x=0;
	if(y<5){
		printf("Ingresa el nombre del personaje ");
		fflush(stdin);
		fgets(per[y].nombre,sizeof(per[y].nombre),stdin);
		printf("Ingresa el tipo del personaje ");
		fflush(stdin);
		fgets(per[y].tipo,sizeof(per[y].tipo),stdin);
		printf("Ingresa la fuerza del personaje ");
		scanf("%d",&per[y].fuerza);
		printf("Ingresa la salud del personaje ");
		scanf("%d",&per[y].salud);
		y++;
	}
	else{
		printf("Arreglo Lleno");
	}
	
	return 0;
}
void mostrar_personaje(){
	for(x=0;x<y;x<x++){
		printf("\nNombre: %s",per[x].nombre);
		printf("\nTipo: %s",per[x].tipo);
		printf("\nFuerza %d",per[x].fuerza);
		printf("\nSalud: %d\n",per[x].salud);
	}
}
#endif 
