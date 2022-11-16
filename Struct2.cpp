#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int dia, mes, ano;
}DataNasc;
	
typedef struct
{
	DataNasc dataNas;
	int idade;
	char sexo;
	char nome[100];
}Pessoa;

void imprimirPessoa(Pessoa p);
Pessoa lerPessoa();
	
main()
{
	Pessoa pessoas[2][2];
	int i, j;
	
	for(i = 0; i < 2;i++)
	{
		for(j = 0; j < 2;j++)
		{
			pessoas[i][j] = lerPessoa();
		}
	}
	
	for(i = 0;i < 2;i++)
	{
		for(j = 0;j < 2;j++)
		{
			imprimirPessoa(pessoas[i][j]);
		}
	}
}

void imprimirPessoa(Pessoa p)
{
	printf("\n\tNome: %s", p.nome);
	printf("\tIdade: %d\n", p.idade);
	printf("\tSexo: %c\n", p.sexo);
	printf("\tData de nasc.: %d/%d/%d\n\n", p.dataNas.dia, p.dataNas.mes, p.dataNas.ano);
}

Pessoa lerPessoa()
{
	Pessoa p;
	printf("\nDigite seu nome: ");
	fgets(p.nome, 100, stdin);
	printf("Digite sua idade: ");
	scanf("%d", &p.idade);
	fflush(stdin);
	printf("Digite f ou m para o sexo: ");
	scanf("%c", &p.sexo);
	printf("Digite sua data de nascimento no formato dd mm aaaa: ");
	scanf("%d%d%d", &p.dataNas.dia, &p.dataNas.mes, &p.dataNas.ano);
	fflush(stdin);
	return p;
}
