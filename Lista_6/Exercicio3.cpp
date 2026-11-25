
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Funcionario {
	int codigo;
	char nome[50];
	char cargo[50];
	float horas_trabalho;

	float salario_base;
	float salario_liquido;
	int quantidade_horas_extras;

};

// 1 - Cadastrar funcionarios____________________________________
void registro(struct Funcionario funcionario[], int i, int *total) {
	system("cls");
	int repetido = 0;
	int j;

	printf("-----------CADASTRO----------");
	printf("\n--Funcionario %d", *total + 1);
	printf("\nDigite o codigo: ");
	scanf("%d", &funcionario[i].codigo);

	for(j = 0; j < *total; j++) {
		if(funcionario[i].codigo == funcionario[j].codigo) {
			repetido = 1;
		}
	}

	while(repetido == 1) {
		system("cls");
		repetido = 0;

		printf("-----------CADASTRO----------");
		printf("\n--Funcionario %d", *total + 1);
		printf("\nEste codigo ja existe!!");
		printf("\nDigite outro codigo: ");
		scanf("%d", &funcionario[i].codigo);

		for(j = 0; j < *total; j++) {
			if(funcionario[i].codigo == funcionario[j].codigo) {
				repetido = 1;
			}
		}
	}

	getchar();

	printf("Digite o nome: ");
	fgets(funcionario[i].nome, 50, stdin);
	funcionario[i].nome[strcspn(funcionario[i].nome, "\n")] = '\0';

	printf("Digite o salario base: ");
	scanf("%f", &funcionario[i].salario_base);

	getchar();

	printf("Digite o cargo: ");
	fgets(funcionario[i].cargo, 50, stdin);
	funcionario[i].cargo[strcspn(funcionario[i].cargo, "\n")] = '\0';

	funcionario[i].quantidade_horas_extras = 0;
	funcionario[i].salario_liquido = funcionario[i].salario_base * 0.90;

	printf("Funcionario cadastrado!");
	(*total)++;
}

// 2 - Calcular hora extra_________________________________________
void hora_extra(struct Funcionario funcionario[], int i, int total) {
	system("cls");
	int busca;
	int encontrado = 0;
	float valor_hora;
	float valor_extra;
	float total_extra;
	float salario_bruto;
	float desconto;

	printf("--------HORA EXTRA-------");
	printf("\nDigite o codigo do funcionario: ");
	scanf("%d", &busca);

	for(i = 0; i < total; i++) {
		if(busca == funcionario[i].codigo) {
			encontrado = 1;

			system("cls");
			printf("--------HORA EXTRA-------");
			printf("\nFuncionario encontrado!");
			printf("\nNome: %s", funcionario[i].nome);
			printf("\nCargo: %s", funcionario[i].cargo);

			printf("\n\nSalario base: %.2f", funcionario[i].salario_base);
			printf("\nDigite quantidade de horas extras: ");
			scanf("%d", &funcionario[i].quantidade_horas_extras);

			valor_hora = funcionario[i].salario_base / 160;
			valor_extra = valor_hora * 1.5;
			total_extra = valor_extra * funcionario[i].quantidade_horas_extras;

			printf("\nValor da hora normal: %.2f", valor_hora);
			printf("\nValor da hora extra: %.2f", valor_extra);
			printf("\nTotal hora extra: %.2f", total_extra);

			salario_bruto = funcionario[i].salario_base + total_extra;
			printf("\n\nSalario bruto: %.2f", salario_bruto);

			desconto = salario_bruto * 0.10;

			funcionario[i].salario_liquido = salario_bruto - desconto;
			printf("\nDesconto: %.2f", desconto);
			printf("\nSalario liquido: %.2f", funcionario[i].salario_liquido);
		}
	}

	if(encontrado == 0) {
		printf("Funcionario nao encontrado!");
	}
}

// 3 - Listar salarios liquidos__________________________
void listar(struct Funcionario funcionario[], int total) {
	system("cls");
	int i;
	float valor_hora;
	float total_extra;
	float salario_bruto;
	float desconto;
	float custo_total = 0;

	printf("-----------SALARIO DOS FUNCIONARIOS---------");

	if(total > 0) {
		for(i = 0; i < total; i++) {

			valor_hora = funcionario[i].salario_base / 160;
			total_extra = (valor_hora * 1.5) * funcionario[i].quantidade_horas_extras;

			salario_bruto = funcionario[i].salario_base + total_extra;

			desconto = salario_bruto * 0.10;

			funcionario[i].salario_liquido = salario_bruto - desconto;

			custo_total += funcionario[i].salario_liquido;
			
			printf("\n---Codigo: %d", funcionario[i].codigo);
			printf("\nFuncionario: %s", funcionario[i].nome);
			printf("\nCargo: %s", funcionario[i].cargo);
			printf("\nSalario base: %.2f", funcionario[i].salario_base);
			printf("\nHoras extras: %d", funcionario[i].quantidade_horas_extras);
			printf("\nSalario bruto: %.2f", salario_bruto);
			printf("\nDesconto: %.2f", desconto);
			printf("\nSalario liquido: %.2f", funcionario[i].salario_liquido);
			
			printf("\n\n");
		}

		printf("\n_______________________________");
		printf("\nCUSTO TOTAL DA FOLHA: R$ %.2f", custo_total);

	} else {
		printf("\nNenhum funcionario registrado...");
	}
}

// 4 - Funcionario destaque_______________________________________
void destaque(struct Funcionario funcionario[], int i, int total) {
	system("cls");
	int posicao = 0;
	float maior;
	float valor_hora;
	float total_extra;
	float salario_bruto;
	float desconto;

	if(total > 0) {

		for(i = 0; i < total; i++) {
			valor_hora = funcionario[i].salario_base / 160;
			total_extra = (valor_hora * 1.5) * funcionario[i].quantidade_horas_extras;

			salario_bruto = funcionario[i].salario_base + total_extra;
			desconto = salario_bruto * 0.10;

			funcionario[i].salario_liquido = salario_bruto - desconto;
		}

		maior = funcionario[0].salario_liquido;

		for(i = 1; i < total; i++) {
			if(funcionario[i].salario_liquido > maior) {
				maior = funcionario[i].salario_liquido;
				posicao = i;
			}
		}

		printf("--------FUNCIONARIO DESTAQUE--------");
		printf("\nCodigo: %d", funcionario[posicao].codigo);
		printf("\n\nFuncionario: %s", funcionario[posicao].nome);
		printf("\nCargo: %s", funcionario[posicao].cargo);
		printf("\nSalario liquido: %.2f", funcionario[posicao].salario_liquido);

	} else {
		printf("Nenhum funcionario registrado...");
	}
}

int main() {
	struct Funcionario funcionario[8];
	int op = -1;
	int i = 0, total = 0;

	while(op != 0) {
		system("cls");
		printf("----------MENU EMPRESA-----------");
		printf("\n1 - Registrar funcionarios");
		printf("\n2 - Calcular valor da hora extra");
		printf("\n3 - Listar salarios dos funcionarios");
		printf("\n4 - Funcionario destaque");
		printf("\n0 - Sair");
		printf("\nEscolha: ");
		scanf("%d", &op);

		switch(op) {
			case 1:
				if(total < 8) {
					registro(funcionario, i, &total);
					i++;

				} else {
					printf("Voce atingiu o limite de cadastro!");
				}

				getchar();
				getchar();
				break;

			case 2:
				if(total > 0) {
					hora_extra(funcionario, i, total);

				} else {
					printf("Nenhum funcionario registrado...");
				}

				getchar();
				getchar();
				break;

			case 3:
				listar(funcionario, total);

				getchar();
				getchar();
				break;

			case 4:
				if(total > 0) {
					destaque(funcionario, i, total);

				} else {
					printf("Nenhum funcionario registrado...");
				}

				getchar();
				getchar();
				break;

			case 0:
				printf("Encerrando...");
				break;

			default:
				printf("Esta opcao nao existe!");
				getchar();
				getchar();
		}
	}

	return 0;
}
