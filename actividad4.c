#include <stdio.h>
#include <stdlib.h>

main(){
	int y=0;
	struct car{
		char tipo_llantas[50];
		char modelo[50];
		int no_velocidades;
		int velo_maxima;
	}a[2];
	while(y<2){
		printf("Ingresa el tipo de llantas\n ");
		fgets("%s",a[y].tipo_llantas);
		
		printf("Ingresa el modelo\n ");
		scanf("%s",a[y].modelo);
		
		printf("Ingresa el numero de velocidades\n ");
		scanf("%d",&a[y].no_velocidades);
		
		printf("Ingresa la velocidad maxima\n ");
		scanf("%d",&a[y].velo_maxima);
		
		y++;
	}
}
