#include "stdio.h"
#include "conio.h"
#include "structs.h"
#include "string.h"

struct clientesAtleta Atleta[100];
int numTotalAtleta = 0;

struct clientesMedico Medico[100];
int numTotalMedico = 0;

struct clientesFunc Func[100];
int numTotalFunc = 0;

struct clientesVol Vol[100];
int numTotalVol = 0;

int main(){
    int op;
system("color F0");
    while(op != 5){
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("                                       SISTEMA DE GERENCIAMENTO DAS OLIMPIADAS\n");
        printf("\n");
        printf("\n");
        printf("                                       1 - Gerenciamento de atletas\n");
        printf("                                       2 - Gerenciamento de medicos\n");
        printf("                                       3 - Gerenciamento de funcionarios\n");
        printf("                                       4 - Gerenciamento de voluntarios\n");
        printf("                                       5 - Fechar programa de gerenciamento\n");
        printf("\n");
        printf("                                       Escolha uma da opcoes acima:  ");
        scanf("%d",&op);

        if(op==1){
            system("cls");
            int gc;
            while(gc != 4){
                printf("\n");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("                                       GERENCIAMENTO DE ATLETAS\n");
                printf("                                       1 - Cadastrar atleta\n");
                printf("                                       2 - Excluir atleta\n");
                printf("                                       3 - Consultar atleta\n");
                printf("                                       4 - Sair do menu gerenciamento de pessoas\n");
                printf("\n");
                printf("                                       Escolha uma das opcoes acima:  ");
                scanf("%d",&gc);

                if(gc==1){

                    setbuf(stdin,NULL);
                    system("cls");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("                                       CADASTRO DE ATLETAS\n");

                    printf("                                       Informe o nome do atleta :  ");
                    fgets(Atleta[numTotalAtleta].nome,30,stdin);

                    printf("                                       Informe a modalidade do atleta :  ");
                    fgets(Atleta[numTotalAtleta].modalidade,30,stdin);

                    printf("                                       Informe a data de nascimento do atleta :  ");
                    fgets(Atleta[numTotalAtleta].dN,12,stdin);

                    printf("                                       Informe o CPF do atleta:  ");
                    fgets(Atleta[numTotalAtleta].cpf,20,stdin);

                    printf("                                       Informe o Pais de origem do atleta:  ");
                    fgets(Atleta[numTotalAtleta].pais,20,stdin);

                    printf("                                       Informe o Estado de origem do atleta:  ");
                    fgets(Atleta[numTotalAtleta].estado,30,stdin);

                    numTotalAtleta++;
                    printf("\n                                     Cliente cadastrado com sucesso, pressione um tecla para continuar...");

                    getch();
                    system("cls");
                }
                if(gc == 2){
                    system("cls");
                    int ecf;
                    int j;

                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("                                     EXCLUSAO DE ATLETA\n");
                    printf("                                     Informe o numero do cliente que deseja excluir: ");
                    scanf("%d",&ecf);

                    for(j=ecf-1; j<numTotalAtleta ;j++){

                        strcpy(Atleta[j].nome, Atleta[ecf].nome);
                        strcpy(Atleta[j].modalidade, Atleta[ecf].modalidade);
                        strcpy(Atleta[j].dN, Atleta[ecf].dN);
                        strcpy(Atleta[j].cpf, Atleta[ecf].cpf);
                        strcpy(Atleta[j].pais, Atleta[ecf].pais);
                        strcpy(Atleta[j].estado, Atleta[ecf].estado);
                    }
                    numTotalAtleta--;
                    printf("                                     Exclusao feita com sucesso\n");
                    printf("                                     Pressione um tecla para continuar...");
                    getch();
                    system("cls");

                }
                if(gc == 3){
                    system("cls");
                    int i;

                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("                                     CONSULTAR ATLETAS\n");

                    for(i=0; i<numTotalAtleta; i++){

                        printf("\n***** EMPRESA %d *****\n",i+1);
                        printf("NOME : %s",Atleta[i].nome);
                        printf("MODALIDADE: %s",Atleta[i].modalidade);
                        printf("DATA DE NASCIMENTO: %s",Atleta[i].dN);
                        printf("CPF: %s",Atleta[i].cpf);
                        printf("PAIS: %s",Atleta[i].pais);
                        printf("ESTADO: %s",Atleta[i].estado);
                    }
                    printf("\n                                     Pressione um tecla para continuar...");
                    getch();
                    system("cls");
                }

                }
        }
        system("cls");

        if(op==2){
            system("cls");
            int gc;
            while(gc != 4){
                    printf("***** GERENCIAMENTO DE MEDICOS*****\n");
                    printf("1 - Cadastrar Medico\n");
                    printf("2 - Excluir Medico\n");
                    printf("3 - Consultar Medicos\n");
                    printf("4 - Sair do menu gerenciamento de medicos\n");
                    printf("Escolha uma das opcoes acima: ");
                    scanf("%d",&gc);

                    if(gc==1){

                    setbuf(stdin,NULL);
                    system("cls");

                    printf("***** CADASTRO DE MEDICOS *****\n");

                    printf("Informe o nome do medico : ");
                    fgets(Medico[numTotalMedico].nome,30,stdin);

                    printf("Informe a data de nascimento do medico : ");
                    fgets(Medico[numTotalMedico].dN,12,stdin);

                    printf("Informe o CPF do medico: ");
                    fgets(Medico[numTotalMedico].cpf,20,stdin);

                    printf("Informe o pa�s do medico: ");
                    fgets(Medico[numTotalMedico].pais,20,stdin);

                    printf("Informe o numero do CRM - Conselho regional de medicina de ate 5 numeros: ");
                    fgets(Medico[numTotalMedico].crm,5,stdin);

                    numTotalMedico++;
                    printf("\nMedico cadastrado com sucesso, pressione um tecla para continuar...");

                    getch();
                    system("cls");
                }
                    if(gc == 2){
                    system("cls");
                    int ecj;
                    int j;

                    printf("***** EXCLUSAO DE MEDICO *****\n");
                    printf("Informe o numero do medico que deseja excluir: ");
                    scanf("%d",&ecj);

                    for(j=ecj-1; j<numTotalMedico ;j++){

                        strcpy(Medico[j].nome, Medico[ecj].nome);
                        strcpy(Medico[j].dN, Medico[ecj].dN);
                        strcpy(Medico[j].cpf, Medico[ecj].cpf);
                        strcpy(Medico[j].pais, Medico[ecj].pais);
                        strcpy(Medico[j].crm, Medico[ecj].crm);

                    }
                    numTotalMedico--;
                    printf("Exclusao feita com sucesso\n");
                    printf("\nPressione um tecla para continuar...");
                    getch();
                    system("cls");

                }

                if(gc == 3){
                    system("cls");
                    int i;

                    printf("***** CONSULTAR MEDICOS *****\n");

                    for(i=0; i<numTotalMedico; i++){

                        printf("\n***** EMPRESA %d *****\n",i+1);
                        printf("NOME : %s",Medico[i].nome);
                        printf("DATA DE NASCIMENTO: %s",Medico[i].dN);
                        printf("CPF: %s",Medico[i].cpf);
                        printf("PAIS: %s",Medico[i].pais);
                        printf("CRM: %s",Medico[i].crm);
                    }
                    printf("\nPressione um tecla para continuar...");
                    getch();
                    system("cls");
                }
            }
        }
        system("cls");

        if(op==3){
            system("cls");
            int gc;
            while(gc != 4){
                    printf("***** GERENCIAMENTO DE FUNCIONARIOS*****\n");
                    printf("1 - Cadastrar Funcionario\n");
                    printf("2 - Excluir Funcionario\n");
                    printf("3 - Consultar Funcionario\n");
                    printf("4 - Sair do menu gerenciamento de medicos\n");
                    printf("Escolha uma das opcoes acima: ");
                    scanf("%d",&gc);

                    if(gc==1){

                    setbuf(stdin,NULL);
                    system("cls");

                    printf("***** CADASTRO DE FUNCIONARIOS*****\n");

                    printf("Informe o nome do funcionario : ");
                    fgets(Func[numTotalFunc].nome,30,stdin);

                    printf("Informe a data de nascimento do funcionario : ");
                    fgets(Func[numTotalFunc].dN,12,stdin);

                    printf("Informe o CPF do funcionario: ");
                    fgets(Func[numTotalFunc].cpf,20,stdin);

                    printf("Informe a area de atuacao do funcionario: ");
                    fgets(Func[numTotalFunc].area,20,stdin);

                    numTotalFunc++;
                    printf("\nFuncionario cadastrado com sucesso, pressione um tecla para continuar...");

                    getch();
                    system("cls");
                }
                    if(gc == 2){
                    system("cls");
                    int ecj;
                    int j;

                    printf("***** EXCLUSAO DE FUNCIONARIO *****\n");
                    printf("Informe o numero do funcionario que deseja excluir: ");
                    scanf("%d",&ecj);

                    for(j=ecj-1; j<numTotalFunc ;j++){

                        strcpy(Func[j].nome, Func[ecj].nome);
                        strcpy(Func[j].dN, Func[ecj].dN);
                        strcpy(Func[j].cpf, Func[ecj].cpf);
                        strcpy(Func[j].area, Func[ecj].area);

                    }
                    numTotalFunc--;
                    printf("Exclusao feita com sucesso\n");
                    printf("\nPressione um tecla para continuar...");
                    getch();
                    system("cls");

                }

                if(gc == 3){
                    system("cls");
                    int i;

                    printf("***** CONSULTAR FUNCIONARIO *****\n");

                    for(i=0; i<numTotalFunc; i++){

                        printf("\n***** EMPRESA %d *****\n",i+1);
                        printf("NOME : %s",Func[i].nome);
                        printf("DATA DE NASCIMENTO: %s",Func[i].dN);
                        printf("CPF: %s",Func[i].cpf);
                        printf("AREA: %s",Func[i].area);
                    }
                    printf("\nPressione um tecla para continuar...");
                    getch();
                    system("cls");
                }
            }
        }
        system("cls");

        if(op==4){
            system("cls");
            int gc;
            while(gc != 4){
                    printf("***** GERENCIAMENTO DE VOLUNTARIOS*****\n");
                    printf("1 - Cadastrar Voluntario\n");
                    printf("2 - Excluir Voluntario\n");
                    printf("3 - Consultar Voluntarios\n");
                    printf("4 - Sair do menu gerenciamento de medicos\n");
                    printf("Escolha uma das opcoes acima: ");
                    scanf("%d",&gc);

                     if(gc==1){

                    setbuf(stdin,NULL);
                    system("cls");

                    printf("***** CADASTRO DE VOLUNTARIOS*****\n");

                    printf("Informe o nome do funcionario : ");
                    fgets(Vol[numTotalVol].nome,30,stdin);

                    printf("Informe a data de nascimento do funcionario : ");
                    fgets(Vol[numTotalVol].dN,12,stdin);

                    printf("Informe o CPF do funcionario: ");
                    fgets(Vol[numTotalVol].cpf,20,stdin);

                    printf("Informe a area de atua��o do funcionario: ");
                    fgets(Vol[numTotalVol].area,20,stdin);

                    numTotalVol++;
                    printf("\nVoluntario cadastrado com sucesso, pressione um tecla para continuar...");

                    getch();
                    system("cls");
                }
                    if(gc == 2){
                    system("cls");
                    int ecj;
                    int j;

                    printf("***** EXCLUSAO DE VOLUNTARIO *****\n");
                    printf("Informe o numero do voluntario que deseja excluir: ");
                    scanf("%d",&ecj);

                    for(j=ecj-1; j<numTotalVol ;j++){

                        strcpy(Vol[j].nome, Vol[ecj].nome);
                        strcpy(Vol[j].dN, Vol[ecj].dN);
                        strcpy(Vol[j].cpf, Vol[ecj].cpf);
                        strcpy(Vol[j].area, Vol[ecj].area);

                    }
                    numTotalVol--;
                    printf("Exclusao feita com sucesso\n");
                    printf("\nPressione um tecla para continuar...");
                    getch();
                    system("cls");

                }
                if(gc == 3){
                    system("cls");
                    int i;

                    printf("***** CONSULTAR VOLUNTARIO *****\n");

                    for(i=0; i<numTotalVol; i++){

                        printf("\n***** EMPRESA %d *****\n",i+1);
                        printf("NOME : %s",Vol[i].nome);
                        printf("DATA DE NASCIMENTO: %s",Vol[i].dN);
                        printf("CPF: %s",Vol[i].cpf);
                        printf("AREA: %s",Vol[i].area);
                    }
                    printf("\nPressione um tecla para continuar...");
                    getch();
                    system("cls");
                }
    system("cls");
            }
        }
    }
  }

