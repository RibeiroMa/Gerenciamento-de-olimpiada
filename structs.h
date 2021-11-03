#ifndef STRUCTS_H_INCLUDED
#define STRUCTS_H_INCLUDED

struct clientesAtleta{

    char nome[30];
    char modalidade[30];
    char dN[12];
    char cpf[20];
    char pais[20];
    char estado[30];
};

struct clientesMedico{
    char nome[30];
    char dN[12];
    char cpf[20];
    char pais[20];
    char crm[5];
};

struct clientesFunc{
    char nome[30];
    char dN[12];
    char cpf[20];
    char area[20];
};


struct clientesVol{
    char nome[30];
    char dN[12];
    char cpf[20];
    char area[20];
};


#endif // STRUCTS_H_INCLUDED
