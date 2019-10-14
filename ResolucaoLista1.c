#include <stdio.h>
#include <stdlib.h>

void questao_1() {
	printf("Hello World");
}

void questao_2() {
	int a, b;
	printf("\ndigite um numero: "); scanf("%i",&a);
	printf("\ndigite outro numero: "); scanf("%i",&b);
	printf("\nprimeiro: %i",a);
	printf("\nsegundo: %i",b);
}

void questao_3() {
	int a;
	printf("\ndigite um numero: "); scanf("%i",&a);
	printf("\nantecessor = %i\nsucessor = %i",(a-1),(a+1));
}

void questao_4() {
	int idade, telefone;
	printf("\ndigite sua idade: "); scanf("%i",&idade);
	printf("\ndigite seu telefone: "); scanf("%i",&telefone);
	printf("\nidade = %i\ntelefone = %i",idade,telefone);
}

void questao_5() {
	int a, b;
	printf("\nprimeiro numero: "); scanf("%i",&a);
	printf("\nsegundo  numero: "); scanf("%i",&b);
	printf("\nsoma = %i",a+b);
}

void questao_6() {
	int a, b, c, d;
	printf("\nprimeiro numero: "); scanf("%i",&a);
	printf("\nsegundo  numero: "); scanf("%i",&b);
	printf("\nterceiro numero: "); scanf("%i",&c);
	printf("\nquarto   numero: "); scanf("%i",&d);
	printf("\nsoma = %i",a+b+c+d);
}

void questao_7() {
	int a, b, c, d;
	printf("\nprimeira nota: "); scanf("%i",&a);
	printf("\nsegunda  nota: "); scanf("%i",&b);
	printf("\nterceira nota: "); scanf("%i",&c);
	printf("\nmedia aritimetica = %i",(a+b+c)/3);
}

void questao_8() {
	float salario;
	printf("\ndigite seu salario: R$ "); scanf("%f",&salario);
	printf("\nsalario com aumento = R$ %.2f", (float) salario*1.25 );
}

void questao_9() {
	int anoNascimento, anoAtual;
	printf("\nseu ano nascimento: "); scanf("%i",&anoNascimento);
	printf("\nano atual: "); scanf("%i",&anoAtual);
	printf("\nsua idade atual = %i", anoAtual - anoNascimento);
	printf("\nsua idade em 2025 = %i", 2025 - anoNascimento);
}

void questao_10() {
	int a = 10, b = 20, c;
	printf("\na = %i, b = %i",a,b);
	c = a;
	a = b;
	b = c;
	printf("\na = %i, b = %i",a,b);
	
}

void questao_11() {
	int a;
	printf("\ndigite um numero: "); scanf("%i",&a);
	printf("\nsucessor do antecessor = %i",a);
}

void questao_12() {
	float a, b;
	printf("\naltura: "); scanf("%f",&a);
	printf("\ncomprimento: "); scanf("%f",&b);
	printf("\narea = %.1f",a*b);
}

void questao_13() {
	int numCavalos;
	printf("Digite a quantidade de cavalos: "); scanf("%i",&numCavalos);
	printf("Sao necessarias %i ferraduras", numCavalos*4);
}

void questao_14() {
	float real;
	printf("digite o valor dolar: $ "); scanf("%f",&real);
	printf("valor em real: R$ %.2f", real*3.99 );
}

void questao_15() {
	//TODO
}

void questao_16() {
	int a;
	printf("digite um numero: "); scanf("%i",&a);
	if(a%2 == 0) printf("%i eh par",a);
	else printf("%i eh impar",a);	
}


int main(int n, char* args[]) {
	questao_16();
	return 0;
}
