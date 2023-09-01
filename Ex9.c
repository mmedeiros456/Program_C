#include <stdio.h>
#include <stdlib.h>

//prog p/ verf tarifa adicional de acordo com a bandeira da cpfl

int main (){
	float kwh,prec;
	char band;
	puts("Digite o consumo em kwh");
	scanf(" %f",&kwh);
	puts("\nDigite a letra equivalente a bandeira");
	puts("a - \tBandeira Verde");
	puts("b - \tBandeira Amarela");
	puts("c - \tBandeira Vermelha Patamar 1");
	puts("d - \tBandeira Vermelha Patamar 2");
	puts("e - \tBandeira Escassez Hidrica\n");
	fflush(stdin);
	band = getche();
	band = tolower(band);
	if (band == 'a')
		puts("\n\nNao ha alteracao no valor da tarifa de energia\n");
	else if (band == 'b')
		prec = (kwh*1.87)/100;
	else if (band == 'c')
		prec = (kwh*4.16)/100;
	else if (band == 'd')
		prec = (kwh*9.49)/100;
	else if (band == 'e')
		prec = (kwh*14.20)/100;
	else if (band != 'a','b','c','d','e')
	{
		puts("\n\nDigite uma letra correspondente a bandeira");
		return 0;
	}
	printf("\n\nSobre o consumo de %.2fKWh havera um acrescimo de R$%.2f\n\n",kwh,prec);
	system("pause");	
	return 0;	
	}
