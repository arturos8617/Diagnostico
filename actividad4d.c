#include <stdio.h>

capturar_nombres(){
	int cifras_tot[5],cont=0,sum_tot=0,x=0;
	float prom=0;
	while(cont<5){
		printf("Ingresa Un Numero Entero\n");
		scanf("%d",&cifras_tot[cont]);
		cont++;
	}
	printf("Numeros Capturados ");
	for(x=0;x<5;x++)
	{
		sum_tot+=cifras_tot[x];
		printf("%d ",cifras_tot[x]);
		
	}
	
	prom=sum_tot/5;
	printf("\nPromedio %.2f \n",prom);
	printf("Suma Total %d \n",sum_tot);
	system("PAUSE");
}
void mostrar(int n, char carac[]){
	int x,y,j;
	j=strlen(carac);
	for(x=0;x<n;x++){
		printf("\n");
		for(y=0;y<j;y++){
			printf("%c",carac[y]);
		}
	}
}
main(){
	char op;
	char carac[20];
	int n;
	do{
		printf("1.-Capturar Enteros\n");
		printf("2.-Mostrar Cadena n veces\n");
		printf("3.-Agregar personaje\n");
		printf("0.-Salir\n");
		scanf("%c",&op);
		switch(op){
			case '1':
				capturar_nombres();
				fflush(stdin);
				break;
			/*case '2':
			
				printf("Ingresa un nombre");
				fflush(stdin);
				fgets(carac,sizeof(carac),stdin);
				printf("Cuantas veces deseas imprimir la palabra\n");
				scanf("%i",&n);
				mostrar(n,carac);
				fflush(stdin);
				break;*/
			
			case '3':{
				
				}break;
			
			default:
				break;
			
		}
	}while(op !='0');
	return 0;
}
