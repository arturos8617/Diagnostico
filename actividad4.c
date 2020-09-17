#include <stdio.h>
#include <stdlib.h>
struct car{
		char tipo_llantas[50];
		char modelo[50];
		int no_velocidades;
		int velo_maxima;
	}a[2];
main(){
	int y=0;
	while(y<2){
		printf("Ingresa el tipo de llantas\n ");
		scanf("%s",a[y].tipo_llantas);
		
		printf("Ingresa el modelo\n ");
		scanf("%s",a[y].modelo);
		
		printf("Ingresa el numero de velocidades\n ");
		scanf("%d",&a[y].no_velocidades);
		
		printf("Ingresa la velocidad maxima\n ");
		scanf("%d",&a[y].velo_maxima);
		
		y++;
	}
	condicion();
}
condicion (){
	int x=0;
	while(x<2){
		if(a[x].no_velocidades>=5 & a[x].velo_maxima>=150){
			printf("Tu carro %d es de buen nivel\n",x+1);
		}
		else{
			printf("Tu carro %d es algo viejo\n",x+1);
		}
		x++;
		
	}
}
