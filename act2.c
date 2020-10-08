#include <stdio.h>

int main(){
char a;
printf("Ingrese un caracter: ");
scanf("%c", &a);
if (a<31&&a==127){
	printf("El caracter que ingreso es de tipo control");
} else if(a>32&&a<126){
	printf("El caracter que ingreso es de tipo imprimible");
} else{
	printf("El caracter que ingreso es un codifo ASCII extendido");
}
return 0;
}
