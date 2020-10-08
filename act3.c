#include <stdio.h>

int main(){

	int alto=-1, ancho=-1, renglon, linea;

    do{
    	printf("Ingrese la altura del rectangulo (que sea mayor a 0): ");
	    scanf("%i",&alto);
	    printf("Ingrese el ancho del rectangulo (que sea mayor a 0): ");
	    scanf("%i",&ancho);
	} while (alto<0||ancho<0&&ancho!=alto);
	
	printf("\n");

	for(renglon = 1; renglon <= alto; renglon++){
	  	for(linea = 1 ; linea <=ancho; linea++){
			if((renglon==1&&linea==1)||(renglon==alto&&linea==ancho)||(renglon==1&&linea==ancho)||(renglon==alto&&linea==1)){
				printf("*");
	  		}else{
			        if(linea==1||linea==ancho)
			           printf("|");
			  else{
			       if(renglon==1||renglon==alto)
	  		          printf("-");   
	  		          else printf(" ");
				}
			}
		}
		printf("\n");
	}

	return 0;
}
