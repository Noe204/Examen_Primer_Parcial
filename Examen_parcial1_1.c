#include <stdio.h>
int main (){
	int a,b,c,d,e,f,g,h,respuesta1,respuesta2,precio_estudiantes,precio_adulto;
	printf("Mencione a continuacion los integrantes de tu familia con los que vienes al museo (si no hay nadie ponga \"0\"): \n");
	printf("Menores de 4 anos: ");
	scanf("%d",&a);
	printf("Entre 4 y 16 anos: ");
	scanf("%d",&b);
	printf("Adultos: ");
	scanf("%d",&c);
	if(b!=0){
		printf("Las personas entre 4 y 16 anos, son estudiantes con credencial? (Responda si=1, no=2): ");
		scanf("%d",&respuesta1);
		if(respuesta1==1){
			printf("Cuantos estudiantes son?: ");
			scanf("%d",&d);
			precio_estudiantes=((50*d)*0.1);
		}
		else{
			printf("OK\n");
			precio_estudiantes=(50*d);
		}
	}
	if(c!=0){
		printf("Los adultos tienen credencial de docente o INAPAM? (credencial de docente=1, INAPAM=2, Ambas=3, Ninguna=0): ");
		scanf("%d",&respuesta2);
		if(respuesta2==1){
			printf("Cuantos adultos son?: ");
			scanf("%d",&e);
			precio_adulto=(100*e)*0.3;
		}
		else if(respuesta2==2){
			printf("Cuantos adultos son?: ");
			scanf("%d",&f);
			precio_adulto=(100*f)*0.5;
		}
		else if(respuesta2==3){
			printf("Cuantos aultos son?: ");
			scanf("%d",&g);
			precio_adulto=(100*g)*0.8;
		}
		else{
			printf("Cuantos adultos son?: ");
			scanf("%d",&h);
			precio_adulto=(100*h);
		}
	}
	printf("El precio total sera: %d pesos",precio_adulto+precio_estudiantes);
}
