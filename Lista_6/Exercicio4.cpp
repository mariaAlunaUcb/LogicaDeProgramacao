#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Produto {
	int codigo;
	char nome[50];
	float preco;
	int quantidade;
};

struct Venda {
	struct Produto produto_venda[10];
};

// 1 - Cadastrar
void cadastro(struct Produto produto[], int i, int *total) {
	int repetido;
	system("cls");

	printf("--Produto %d", i + 1);
	printf("\nDigite o codigo: ");
	scanf("%d", &produto[i].codigo);
    
    repetido = 0;
    
    for(int j = 0; j < *total; j++){
    	if(produto[j].codigo == produto[i].codigo){
    		repetido = 1;
    		break;
		}
	}
	
	while(repetido == 1){
		printf("\nEste codigo ja existe! Digite outro: ");
		scanf("%d", &produto[i].codigo);
		
		repetido = 0;
		
		for(int j = 0; j < *total; j++){
			if(produto[j].codigo == produto[i].codigo){
				repetido = 1;
				break;
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

// 2 - Listar
void listagem(struct Produto produto[], int i, int total) {
	system("cls");

	printf("--------Listagem--------");

	for(i = 0; i < total; i++) {
		printf("\nProduto %d", i + 1);
		printf("\nCodigo: %d ", produto[i].codigo);
		printf("\nNome: %s", produto[i].nome);
		printf("\nPreco: %.2f", produto[i].preco);
		printf("\nQuantidade: %d", produto[i].quantidade);
		printf("\n");
	}
}

// 3 - Registrar vendas
void venda(struct Produto produto[], struct Venda produto_vendido[], int *total_vendas, int total) {
	system("cls");

	int busca, quantidade_desejada;
	int encontrado;

	printf("------Venda--------");

	if(*total_vendas >= 10) {
		printf("\nLimite de vendas atingido!");
		return;
	}

	printf("\nDigite o codigo do produto: ");
	scanf("%d", &busca);

	encontrado = 0;

	for(int j = 0; j < total; j++) {

		if(produto[j].codigo == busca) {
			encontrado = 1;

			if(produto[j].quantidade > 0) {

				printf("\nNome: %s", produto[j].nome);
				printf("\nQuantidade disponivel: %d", produto[j].quantidade);

				printf("\nDigite quantidade desejada: ");
				scanf("%d", &quantidade_desejada);

				while(quantidade_desejada > produto[j].quantidade || quantidade_desejada <= 0) {
					printf("\nQuantidade invalida!");
					printf("\nDigite quantidade desejada: ");
					scanf("%d", &quantidade_desejada);
				}

				produto_vendido[*total_vendas].produto_venda[0] = produto[j];

				produto_vendido[*total_vendas].produto_venda[0].quantidade = quantidade_desejada;

				produto[j].quantidade -= quantidade_desejada;

				(*total_vendas)++;

				printf("\nVenda efetivada!");

			} else {
				printf("\nProduto esgotado...");
			}

			break;
		}
	}

	if(encontrado == 0) {
		printf("\nProduto nao encontrado!");
	}
}

// 4 - Listagem vendas
void listagem_venda(struct Venda produto_vendido[], int i, int total_vendas) {
	system("cls");

	printf("---------Listagem produtos vendidos------");

	if(total_vendas > 0) {

		for(i = 0; i < total_vendas; i++) {

			printf("\nProduto vendido %d", i + 1);
			printf("\nCodigo: %d", produto_vendido[i].produto_venda[0].codigo);
			printf("\nNome: %s", produto_vendido[i].produto_venda[0].nome);
			printf("\nPreco: %.2f", produto_vendido[i].produto_venda[0].preco);
			printf("\nQuantidade: %d", produto_vendido[i].produto_venda[0].quantidade);
			printf("\n");
		}

		printf("\nTotal de vendas: %d", total_vendas);

	} else {
		printf("\nNenhum produto vendido...");
	}
}

// 5 - Faturamento
void faturamento(struct Venda produto_vendido[], int i, int total_vendas) {
	float soma = 0;

	for(i = 0; i < total_vendas; i++) {
		float preco = produto_vendido[i].produto_venda[0].preco;
		float quantidade = produto_vendido[i].produto_venda[0].quantidade;

		soma += preco * quantidade;
	}

	printf("\nFaturamento: %.2f", soma);

	getchar();
	getchar();
}

// 6 - Produto destaque
void destaque(struct Venda produto_vendido[], int i, int total_vendas) {
	float maior = 0, faturamento;
	int posicao = 0;

	system("cls");

	if(total_vendas > 0) {

		for(i = 0; i < total_vendas; i++) {

			faturamento = produto_vendido[i].produto_venda[0].preco * produto_vendido[i].produto_venda[0].quantidade;

			if(faturamento > maior) {
				maior = faturamento;
				posicao = i;
			}
		}

		printf("------Produto Destaque------");
		printf("\nNome: %s", produto_vendido[posicao].produto_venda[0].nome);
		printf("\nCodigo: %d", produto_vendido[posicao].produto_venda[0].codigo);
		printf("\nFaturamento gerado: R$ %.2f", maior);

	} else {
		printf("\nNenhuma venda registrada...");
	}
}

int main() {

	struct Produto produto[10];
	struct Venda produto_vendido[10];

	int i = 0, total = 0;
	int total_vendas = 0;
	int op = -1;

	while(op != 0) {

		system("cls");

		printf("-------MENU VENDAS-------");
		printf("\n1 - Cadastrar produtos");
		printf("\n2 - Listar produtos");
		printf("\n3 - Registrar vendas");
		printf("\n4 - Listar produtos vendidos");
		printf("\n5 - Faturamento");
		printf("\n6 - Produto destaque");
		printf("\n0 - Sair");
		printf("\nEscolha: ");
		scanf("%d", &op);

		switch(op) {

			case 1:
				if(total < 10) {
					cadastro(produto, i, &total);
					i++;
				} else {
					printf("Voce atingiu o limite de cadastros!");
				}

				getchar();
				break;

			case 2:
				if(total > 0) {
					listagem(produto, i, total);
				} else {
					printf("Ainda nao ha produtos cadastrados...");
				}

				getchar();
				getchar();
				break;

			case 3:
				if(total > 0) {
					venda(produto, produto_vendido, &total_vendas, total);
				} else {
					printf("Ainda nao ha produtos a venda...");
				}

				getchar();
				getchar();
				break;

			case 4:
				listagem_venda(produto_vendido, i, total_vendas);

				getchar();
				getchar();
				break;

			case 5:
				faturamento(produto_vendido, i, total_vendas);
				break;
			
			case 6:
				destaque(produto_vendido, i, total_vendas);
				getchar();
				getchar();
				break;
				
			case 0:
				break;

			default:
				printf("Esta opcao nao existe");
				getchar();
				getchar();
				break;
		}
	}

	return 0;
}
