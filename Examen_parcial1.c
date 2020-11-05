#include <stdio.h>
int main (){
	float peso_payaso=0.12,peso_mesa=0.15,peso_total,peso_total_payaso,peso_total_mesa,peso_excesivo;
	int payasos,juegos_de_mesa,precio_payaso=150,precio_mesa=130;
	printf("Cuantos payasos requiere enviar? ");
	scanf("%d",&payasos);
	printf("Cuantos juegos de mesa requiere enviar? ");
	scanf("%d",&juegos_de_mesa);
	peso_total_payaso=peso_payaso*payasos;
	peso_total_mesa=peso_mesa*juegos_de_mesa;
	peso_total=peso_total_payaso+peso_total_mesa;
	printf("Sumatoria total por la compra de payasos: %d pesos\n",payasos*precio_payaso);
	printf("Sumatoria total por la compra de juegos de mesa: %d pesos\n",juegos_de_mesa*precio_mesa);
	printf("Sumatoria total del pedido: %d pesos\n",((payasos*precio_payaso)+(juegos_de_mesa*precio_mesa)));
	printf("Peso total del envio: %.2f kg\n",peso_total);
	if(peso_total<8){
		printf("Tu peso es menor a los 8 kg, por lo que no se aplicara envio\n");
		printf("Costo total del envio: %d pesos\n",0);
		printf("Total: %d pesos",((payasos*precio_payaso)+(juegos_de_mesa*precio_mesa)));
	}
	else if(peso_total>=8&&peso_total<8.5){
		printf("Costo total del envio: %d pesos\n",2000);
		printf("Total: %d pesos",((payasos*precio_payaso)+(juegos_de_mesa*precio_mesa))+2000);
	}
	else{
		peso_excesivo=peso_total-8.5;
		printf("Tu peso es mayor a los 8 kg, por lo que se aplicara gastos de envio adicionales \n");
		printf("Costo total del envio: %.0f pesos\n",(2000*peso_excesivo));
		printf("Total: %.0f pesos",((payasos*precio_payaso)+(juegos_de_mesa*precio_mesa))+(2000*peso_excesivo));	
		}
	
}
