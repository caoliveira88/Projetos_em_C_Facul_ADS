#include <stdio.h>

int main () 
{
	float salario, reajuste1, reajuste2, novoSalario1, novoSalario2;
	
	printf("Empresa: Lado DiCa Ltda \nCamila de Oliveira \nRA: 21144179-5\n");
	printf("\n");
	printf("Ola, seja bem vindo a calculadora de reajuste salarial!\n");
	printf("\n");
	printf("Digite seu salario: R$");
	scanf("%f", &salario);
	if(salario<=1750)
	{
	   reajuste1 = 7.5/100*salario;
	   novoSalario1 = reajuste1+salario+150;
       printf("Possivel novo salario: R$%.2f", novoSalario1);
	}	
	else
	{
		salario>1750;
		reajuste2 = 7.5/100*salario;
		novoSalario2 = reajuste2+salario;
		printf("Possivel novo salario: R$%.2f", novoSalario2);
	}
		
	return (0);
}


