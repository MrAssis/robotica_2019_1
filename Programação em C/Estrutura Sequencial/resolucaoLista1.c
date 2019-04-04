/*
	Resoluções das questões referentes a Lista de exercício 1
*/
#include<stdio.h>
/* 	Questão 1

int main(){
	printf("Hello World!");
}

*/

/*  Questão 2

int main(){
	int a, b;
	
	printf("Digite o primeiro numero: ");
	scanf("%d",&a);
	
	printf("Digite o segundo numero: ");
	scanf("%d",&b);
	
	printf("primeiro: %d e segundo: %d",a,b);
}

*/

/* Questão 3

int main(){
	int num,antecessor,sucessor;
	
	printf("digite um número: ");
	scanf("%d",&num);
	
	antecessor = num - 1;
	sucessor = num + 1; 
	
	printf("Antecessor: %d\nSucessor: %d",antecessor,sucessor);
}

*/

/* Questão 4

int main(){
	int idade,telefone;
	
	printf("digite sua idade e telefone (separados por espaço): ");
	scanf("%d %d", &idade, &telefone);
	
	printf("Idade: %d \t Telefone: %d", idade, telefone);
}

*/

/* Questão 5

int main(){
	int num1, num2;
	printf("Digite dois número (separados por espaço): ");
	scanf("%d %d",&num1,&num2);
	
	printf("Soma: %d",(num1+num2));
}

*/

/* Questão 6

int main(){
	int num_1,num_2,num_3,num_4;
	printf("digite quatro números (separados por espaço): ");
	scanf("%d %d %d %d",&num_1,&num_2,&num_3,&num_4);
	int soma = num_1+num_2+num_3+num_4;
	printf("Soma: %d",soma);
}

*/

/* Questão 7

int main(){
	float nota1,nota2,nota3;
	
	printf("Digite a primeira nota: ");
	scanf("%f",&nota1);
	
	printf("Digite a segunda nota: ");
	scanf("%f",&nota2);
	
	printf("Digite a terceira nota: ");
	scanf("%f",&nota3);
	
	float media;
	
	media = (nota1 + nota2 + nota3)/3;
	
	printf("A media é: %f",media);
}

*/

/* Questão 8

int main(){
	float salario;
	printf("Digite seu salário: ");
	scanf("%f",&salario);
	
	float aumento = salario*1.25;
	
	printf("Aumento: %f", aumento);
}

*/

/* Questão 9

int main(){
	int nas,ano;
	printf("digite o ano de nascimento: ");
	scanf("%d",&nas);
	
	system("cls");
	
	printf("digite o ano atual: ");
	scanf("%d",&ano);
	
	system("cls");
	
	int idade = ano - nas;
	int idade_depois = 2025 - nas;
	printf("Idade Atual: %d \t Idade em 2025: %d", idade,idade_depois);
}

*/

/* Questão 10

int main(){
	int a,b;
	printf("Digite dois números(Separados por virgula): ");
	scanf("%d,%d",&a,&b);
		
	int aux;
	aux = a;
	a = b;
	b = aux;
	
	printf("%d %d",a,b);
}

*/

/* Questão 11

int main(){
	int num;
	
	printf("digite um número: ");
	scanf("%d",&num);
	
	printf("%d",num);
}

*/

