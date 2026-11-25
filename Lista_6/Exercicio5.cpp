
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Data
struct Data {
    char data[11];
};

// Paciente
struct Paciente {
    int codigo;
    char nome[50];
};

// Consulta
struct Consulta {
    struct Paciente paciente_registro;
    struct Data data_consulta;
    char descricao[50];
};


// 1 - Cadastrar paciente______________________________________
void cadastro(struct Consulta paciente[], int i, int *total) {
    system("cls");

    printf("-- Paciente %d", i + 1);
    printf("\nDigite o codigo: ");
    scanf("%d", &paciente[i].paciente_registro.codigo);

    int repetido = 0;

    for(int j = 0; j < *total; j++) {
        if(paciente[j].paciente_registro.codigo == paciente[i].paciente_registro.codigo) {
            repetido = 1;
            break;
        }
    }

    while(repetido == 1) {
        printf("\nEste codigo ja existe!\n-Digite outro: ");
        scanf("%d", &paciente[i].paciente_registro.codigo);

        repetido = 0;

        for(int j = 0; j < *total; j++) {
            if(paciente[j].paciente_registro.codigo == paciente[i].paciente_registro.codigo) {
                repetido = 1;
                break;
            }
        }
    }

    getchar();

    printf("Digite o nome: ");
    fgets(paciente[i].paciente_registro.nome, 50, stdin);
    paciente[i].paciente_registro.nome[strcspn(paciente[i].paciente_registro.nome, "\n")] = '\0';
}


// 2 - Registrar consulta______________________________________
void registrar_consulta(struct Consulta consulta[], struct Consulta paciente[], int i, int total, int *total_consultas) {

    system("cls");
    int busca = 0;
    int encontrado = 0;

    printf("-------------Registro de consulta--------");
    printf("\nDigite o codigo do paciente: ");
    scanf("%d", &busca);

    for(i = 0; i < total; i++) {
        if(paciente[i].paciente_registro.codigo == busca) {
            encontrado = 1;
            break;
        }
    }

    if(encontrado == 1) {
        system("cls");

        printf("-------------Registro de consulta--------");
        printf("\nPaciente encontrado!");
        printf("\n--Nome: %s", paciente[i].paciente_registro.nome);
        printf("\n--Codigo: %d\n", paciente[i].paciente_registro.codigo);

        getchar();

        printf("\nDigite a data da consulta: ");
        fgets(consulta[*total_consultas].data_consulta.data, 11, stdin);
        consulta[*total_consultas].data_consulta.data[strcspn(consulta[*total_consultas].data_consulta.data, "\n")] = '\0';

        printf("Digite descricao da consulta: ");
        fgets(consulta[*total_consultas].descricao, 50, stdin);
        consulta[*total_consultas].descricao[strcspn(consulta[*total_consultas].descricao, "\n")] = '\0';

        consulta[*total_consultas].paciente_registro = paciente[i].paciente_registro;

        (*total_consultas)++;

        printf("\nConsulta registrada com sucesso!");

    } else {
        printf("\nEste codigo nao existe!!");
    }
}


// 3 - Pesquisar consulta por paciente
void consulta_paciente(struct Consulta consulta[], int i, int total_consultas) {

    system("cls");

    int busca = 0;
    int encontrado = 0;
    int quantidade = 0;

    printf("---------CONSULTA PACIENTE---------");
    printf("\nDigite o codigo do paciente: ");
    scanf("%d", &busca);

    for(i = 0; i < total_consultas; i++) {

        if(busca == consulta[i].paciente_registro.codigo) {

            encontrado = 1;

            printf("\n--Consulta %d", i + 1);
            printf("\nPaciente: %s", consulta[i].paciente_registro.nome);
            printf("\nCodigo: %d", consulta[i].paciente_registro.codigo);
            printf("\nData: %s", consulta[i].data_consulta.data);
            printf("\nDescricao: %s", consulta[i].descricao);
            printf("\n");
            
            quantidade++;
        }
    }

    if(encontrado == 0) {
        printf("\nNenhuma consulta encontrada para este paciente!");
    }

    printf("\nTotal de consultas: %d", quantidade );
}


// 4 - Consultas por data
void consultas_data(struct Consulta consulta[], int i, int total_consultas) {

    system("cls");

    char busca[11];
    int encontrado = 0;
    int quantidade = 0;

    printf("--------CONSULTA POR DATA-----------");
    printf("\nDigite a data: ");
    getchar();
    fgets(busca, 11, stdin);

    busca[strcspn(busca, "\n")] = '\0';

    for(i = 0; i < total_consultas; i++) {

        if(strcmp(busca, consulta[i].data_consulta.data) == 0) {

            encontrado = 1;
            quantidade++;

            printf("\n--Consulta %d", i + 1);
            printf("\nPaciente: %s", consulta[i].paciente_registro.nome);
            printf("\nCodigo: %d", consulta[i].paciente_registro.codigo);
            printf("\nData: %s", consulta[i].data_consulta.data);
            printf("\nDescricao: %s", consulta[i].descricao);
            printf("\n");
        }
    }

    if(encontrado == 0) {
        printf("\nNenhum paciente registrado nessa data!");
    }

    printf("\nTotal de consultas nessa data: %d", quantidade);
}


// Paciente destaque___________________________________________
void paciente_destaque(struct Consulta consulta[], int i, int total) {
    int  j;
    int quantidade, maior = 0;
    int p = 0;

    for(i = 0; i < total; i++) {
        quantidade = 0;

        for(j = 0; j < total; j++) {
            if(consulta[i].paciente_registro.codigo == consulta[j].paciente_registro.codigo) {
                quantidade++;
            }
        }

        if(quantidade > maior) {
            maior = quantidade;
            p = i;
        }
    }

    printf("\nPaciente com mais consultas:");
    printf("\nNome: %s", consulta[p].paciente_registro.nome);
    printf("\nQuantidade de consultas: %d", maior);
}

int main() {
    struct Consulta consulta[30];
    struct Consulta paciente[15];

    int i;
    int total = 0;
    int total_consultas = 0;
    int op = -1;

    while(op != 0) {
        system("cls");

        printf("----------MENU HOSPITAL-------");
        printf("\n1 - Cadastrar pacientes");
        printf("\n2 - Registrar consulta");
        printf("\n3 - Pesquisar consulta por paciente");
        printf("\n4 - Consultas por data");
        printf("\n5 - Paciente destaque");
        printf("\n0 - Sair");
        printf("\nEscolha: ");
        scanf("%d", &op);

        switch(op) {

            // 1 - Cadastrar pacientes
            case 1:
                if(total < 15) {
                    cadastro(paciente, total, &total);
                    total++;
                } else {
                    printf("Voce atingiu o limite de cadastros!!");
                }
                getchar();
                break;


            // 2 - Registrar consultas
            case 2:
                if(total_consultas < 30) {
                    registrar_consulta(consulta, paciente, i, total, &total_consultas);
                } else {
                    printf("Limite de consultas excedido!!");
                }

                getchar();
                break;


            // 3 - Pesquisar consulta
            case 3:
                consulta_paciente(consulta, i, total_consultas);
                getchar();
                getchar();
                break;


            // 4 - Consultas por data
            case 4:
                consultas_data(consulta, i, total_consultas);
                getchar();
                break;


            // 5 - Paciente destaque
            case 5:
                paciente_destaque(consulta, i, total_consultas);
                getchar();
                getchar();
                break;
                
            case 0:
            	printf("Encerrando...");
            	break;
            	
            default:
            	printf("Essa opcao nao existe!");
            	getchar();
            	getchar();
            	break;

        }
    }

    return 0;
}
