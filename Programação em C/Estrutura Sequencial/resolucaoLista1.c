/*
	Resolu��es das quest�es referentes a Lista de exerc�cio 1
*/
#include<stdio.h>
/* 	Quest�o 1

int main(){
	printf("Hello World!");
}

*/

/*  Quest�o 2

int main(){
	int a, b;
	
	printf("Digite o primeiro numero: ");
	scanf("%d",&a);
	
	printf("Digite o segundo numero: ");
	scanf("%d",&b);
	
	printf("primeiro: %d e segundo: %d",a,b);
}

*/

/* Quest�o 3

int main(){
	int num,antecessor,sucessor;
	
	printf("digite um n�mero: ");
	scanf("%d",&num);
	
	antecessor = num - 1;
	sucessor = num + 1; 
	
	printf("Antecessor: %d\nSucessor: %d",antecessor,sucessor);
}

*/

/* Quest�o 4

int main(){
	int idade,telefone;
	
	printf("digite sua idade e telefone (separados por espa�o): ");
	scanf("%d %d", &idade, &telefone);
	
	printf("Idade: %d \t Telefone: %d", idade, telefone);
}

*/

/* Quest�o 5

int main(){
	int num1, num2;
	printf("Digite dois n�mero (separados por espa�o): ");
	scanf("%d %d",&num1,&num2);
	
	printf("Soma: %d",(num1+num2));
}

*/

/* Quest�o 6

int main(){
	int num_1,num_2,num_3,num_4;
	printf("digite quatro n�meros (separados por espa�o): ");
	scanf("%d %d %d %d",&num_1,&num_2,&num_3,&num_4);
	int soma = num_1+num_2+num_3+num_4;
	printf("Soma: %d",soma);
}

*/

/* Quest�o 7

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
	
	printf("A media �: %f",media);
}

*/

/* Quest�o 8

int main(){
	float salario;
	printf("Digite seu sal�rio: ");
	scanf("%f",&salario);
	
	float aumento = salario*1.25;
	
	printf("Aumento: %f", aumento);
}

*/

/* Quest�o 9

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

/* Quest�o 10

int main(){
	int a,b;
	printf("Digite dois n�meros(Separados por virgula): ");
	scanf("%d,%d",&a,&b);
		
	int aux;
	aux = a;
	a = b;
	b = aux;
	
	printf("%d %d",a,b);
}

*/

/* Quest�o 11

int main(){
	int num;
	
	printf("digite um n�mero: ");
	scanf("%d",&num);
	
	printf("%d",num);
}

*/

