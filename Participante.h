#ifndef PARTICIPANTE_H
#define PARTICIPANTE_H



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct participante{
	char programa[40];
	char nome[100];
	char cpf[15];
	char categoria[20];
	float saldo;
} typedef Participante;

struct celula_participante{
	Participante *participante;
	struct celula_participante *prox;
} typedef Celula_Participante;

struct lista_participante{
	Celula_Participante *primeiro;
	Celula_Participante *ultimo;
} typedef Lista_Participante;

//Cria uma nova celula
//Entrada: Nenhuma
//Retorno: Uma nova celula apos receber malloc
//Pre-condicao: Nenhuma
//Pos-condicao: Celula criada
Celula_Participante *set_celula_participante(void);

//Realiza a leitura dos dados de um participante
//Entrada: Nenhuma
//Retorno: Struct Participante com os dados preenchidos
//Pre-condicao: Nenhuma
//Pos-condicao: Leitura de dados realizada
Participante *scaneia_participante(void);

//Verifica se a lista de participantes esta vazia
//Entrada: A lista na qual sera realizada a checagem
//Retorno: Se a lista esta vazia ou nao
//Pre-condicao: Ponteiro de lista nao nulo
//Pos-condicao: Lista verificada
int vazia_participante(Lista_Participante *l);

//Checa o tamanho de uma lista de participantes
//Entrada: A lista na qual sera realizada a checagem
//Retorno: O numero de voos presentes na lista
//Pre-condicao: Ponteiro de lista nao nulo
//Pos-condicao: Tamanho da lista eh checado
int checa_tamanho_lista_participante(Lista_Participante *l);

//Insere um participante no inicio da lista
//Entrada: A lista na qual o participante sera inserido e o participante que sera inserido
//Retorno: Nenhum
//Pre-condicao: Ponteiro de lista nao nulo, ponteiro de participante nao nulo
//Pos-condicao: Participante inserido no comeco da lista
void insere_participante_comeco(Lista_Participante *l, Participante *p);

//Insere um participante no final da lista
//Entrada: A lista na qual o participante sera inserido e o participante que sera inserido
//Retorno: Nenhum
//Pre-condicao: Ponteiro de lista nao nulo, ponteiro de participante nao nulo
//Pos-condicao: Participante inserido no final da lista
void insere_participante_final(Lista_Participante *l, Participante *p);

//Insere um participante em uma posicao especifica na lista
//Entrada: A lista na qual o participante sera inserido, o participante que sera inserido e a posicao na qual ele sera inserido
//Retorno: Nenhum
//Pre-condicao: Ponteiro de lista nao nulo, ponteiro de participante nao nulo
//Pos-condicao: Participante inserido na lista
void insere_participante_meio(Lista_Participante *l, Participante *p, int posicao);

//Remove um participante no comeco da lista
//Entrada: A lista que contem os participantes
//Retorno: Nenhum
//Pre-condicao: Ponteiro de lista nao nulo
//Pos-condicao: Participante no comeco da lista removido
void remove_participante_comeco(Lista_Participante *l);

//Remove um voo no final da lista
//Entrada: A lista que contem os participantes
//Retorno: Nenhum
//Pre-condicao: Ponteiro de lista nao nulo
//Pos-condicao: Participante no final da lista removido
void remove_participante_final(Lista_Participante *l);

//Remove um participante em uma posicao especifica na lista
//Entrada: A lista que contem os participantes e a posicao que esta o participante que sera removido
//Retorno: Nenhum
//Pre-condicao: Ponteiro de lista nao nulo
//Pos-condicao: Participante removido da lista
void remove_participante_meio(Lista_Participante *l, int posicao);

//Consultar um participante presente na lista atraves do seu cpf
//Entrada: A lista onde ocorrera a busca e o cpf que sera procurado
//Retorno: Nenhum
//Pre-condicao: Ponteiro de lista nao nulo
//Pos-condicao: Participante printado
void consulta_participante(Lista_Participante *l, char cpf[]);

//Printa apenas um participante
//Entrada: A celula que contem o participante que sera printado e a posicao que o participante esta na lista
//Retorno: Nenhum
//Pre-condicao: Ponteiro de celula nao nulo
//Pos-condicao: Participante printado
void printa_participante(Celula_Participante *c, int n);

//Printa todos os participantes presentes na lista
//Entrada: A lista com os participantes que serao printados
//Retorno: Nenhum
//Pre-condicao: Ponteiro de lista nao nulo
//Pos-condicao: Lista printada
void printa_lista_participante(Lista_Participante *l);

//Checa se um determinado cpf ja existe na lista
//Entrada: A lista com os participantes e o cpf que sera buscado
//Retorno: 1 Se o cpf esta presente na lista e 0 se o cpf nao esta presente
//Pre-condicao: Ponteiro de lista nao nulo
//Pos-condicao: Lista verificada
int checa_cpf(Lista_Participante *l, char cpf[]);

#endif
