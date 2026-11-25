#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Produto {
	int codigo;
	char nome[50];
	float preco;
	int quantidade;
};

// 1 - Cadastro
void cadastro(struct Produto produto[],int  i, int *total) {
	system("cls");
	printf("-----Produto %d-----", i + 1 );
	printf("\nDigite o codigo: ");
	scanf("%d", &produto[i].codigo);

	if(*total > 0) {
		for(int j = 0; j < *total; j++) {
			if(produto[j].codigo == produto[i].codigo) {
				printf("Esse codigo ja existe...");
				getchar();
				getchar();
				return;
			}
		}
	}
	getchar();

	printf("Digite o nome: ");
	fgets(produto[i].nome, 50, stdin);
	produto[i].nome[strcspn(produto[i].nome, "\n")] = '\0';

	printf("Digite o preco: ");
	scanf("%f", &produto[i].preco);

	printf("Digite a quantidade: ");
	scanf("%d", &produto[i].quantidade);

	(*total)++;

}

// 2 - Listagem
void listagem(struct Produto produto[], int i) {
	printf("\n--Produto %d", i + 1);
	printf("\nCodigo: %d", produto[i].codigo);
	printf("\nNome: %s", produto[i].nome);
	printf("\nPreco: %.2f", produto[i].preco);
	printf("\nQuantidade: %d", produto[i].quantidade);
	printf("\n");


}

// 3 - Reposição
void reposicao(struct Produto produto[], int i) {
	system("cls");
	int adicao;
	int busca;
	printf("---------Reposicao---------");
	printf("\nDigite o codigo do produto: ");
	scanf("%d", &busca);

	if(busca == produto[i].codigo) {
		printf("\n--Produto %d", i + 1);
		printf("\nNome: %s", produto[i].nome);
		printf("\nQuantidade atual: %d", produto[i].quantidade);
		printf("\nDigite a quantidade: ");
		scanf("%d", &adicao);

		produto[i].quantidade = produto[i].quantidade + adicao;
		printf("Reposicao efetuada!");
	}
}

// 4 - Registrar venda
void venda(struct Produto produto[], int i) {
	system("cls");
	int busca;
	int subtracao;

	printf("----------Venda----------");
	printf("\nCodigo do produto: ");
	scanf("%d", &busca);

	if(busca == produto[i].codigo) {
		if(produto[i].quantidade != 0) {
			printf("\n--Produto %d", i + 1);
			printf("\nNome: %s", produto[i].nome);
			printf("\nQuantidade atual: %d", produto[i].quantidade);
			printf("\nDigite a quantidade: ");
			scanf("%d", &subtracao);

			produto[i].quantidade = produto[i].quantidade - subtracao;
			printf("Venda registrada!");

		} else {
			printf("Este produto esta esgotado no momento!");
		}

	}
}



// 5 - Consultar produto
void consulta(struct Produto produto[], int i, int total) {
	system("cls");

	int busca;
	printf("----------Venda----------");
	printf("\nCodigo do produto: ");
	scanf("%d", &busca);

	for(i = 0; i< total; i++) {
		if(busca == produto[i].codigo) {
			printf("\n--Produto %d", i + 1);
			printf("\nCodigo: %d", produto[i].codigo);
			printf("\nNome: %s", produto[i].nome);
			printf("\nPreco: %.2f", produto[i].preco);
			printf("\nQuantidade: %d", produto[i].quantidade);
		}
	}

}

// 6 - Valor total
void total_estoque(struct Produto produto[], int i, int total) {
	float soma = 0;
	float res;

	for(i = 0; i < total; i++) {
		soma += produto[i].preco * produto[i].quantidade;
	}

	res = soma;
	printf("Valor total do estoque: %.2f", res);

}

// Produto com maior valor
void produto_caro(struct Produto produto[], int i, int total) {
	float maior_valor = 0;
	int maior_produto = 0;

	for(i = 0; i < total; i++) {
		if(produto[i].preco > maior_valor) {
			maior_valor = produto[i].preco;
			maior_produto = i;

		}
	}


	printf("\nNome: %s", produto[maior_produto].nome);
	printf("\nPreco: %.2f", produto[maior_produto].preco);
}

int main() {
	struct Produto produto[15];
	int i = 0;
	int total = 0;
	int op = -1;


	while(op != 0) {
		system("cls");

		printf("------Menu Papelaria------");
		printf("\n1 - Cadastrar");
		printf("\n2 - Listar");
		printf("\n3 - Repor estoque");
		printf("\n4 - Registrar venda");
		printf("\n5 - Consultar produto");
		printf("\n6 - Valor total no estoque");
		printf("\n7 - Produto com maior valor");
		printf("\nEscolha: ");
		scanf("%d", &op);

		switch(op) {
			// 1 - Cadastro
			case 1:
				cadastro(produto, i, &total);
				i++;
				break;

			// 2 - Listagem
			case 2:
				system("cls");
				if(total > 0) {
					printf("---------Lista-----------");
					for(i = 0; i < total; i++) {
						listagem(produto, i);

					}
				} else {
					printf("Ops, nenhum produto cadastrado...");
				}

				getchar();
				getchar();
				break;

			// 3 - Reposição
			case 3:
				if(total > 0) {
					for(i = 0; i < total; i++) {
						reposicao(produto, i);
					}
				} else {
					printf("Ops, nenhum produto cadastrado...");
				}
				getchar();
				getchar();
				break;

			// 4 - Venda
			case 4:
				if(total > 0) {
					for(i = 0; i < total; i++) {
						venda(produto, i);
					}


				} else {
					printf("Ops, nenhum produto cadastrado..");
				}

				getchar();
				getchar();


				break;

			//Consulta
			case 5:
				if(total > 0) {
					consulta(produto, i, total);



				} else {
					printf("Ops, nenhum produto cadastrado..");
				}

				getchar();
				getchar();
				break;

			//Total de valor no estoque
			case 6:
				if(total > 0) {
					total_estoque(produto, i, total);


				} else {
					printf("Ops, nenhum produto cadastrado..");
				}

				getchar();
				getchar();
				break;

			//Produto mais caro
			case 7:

				if(total > 0) {
					produto_caro(produto, i, total);


				} else {
					printf("Ops, nenhum produto cadastrado..");
				}

				getchar();
				getchar();
				break;



		}
	}
}