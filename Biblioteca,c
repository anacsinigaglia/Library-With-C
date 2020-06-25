/*O problema consiste em elaborar um cadastro para 20 livros, contendo as seguintes
informações: código, título, autor, área, ano e editora. Desenvolver um menu com as seguintes
opções:
1. Cadastrar os livros.
2. Imprimir as informações dos livros.
3. Pesquisar livros por código.
4. Ordenar os livros por ano.
5. Sair do programa.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 20

struct livro {
    int codigo, ano;
    char titulo[50], autor[30], area[30], editora[30];
};

int main(){
	setlocale(LC_ALL, "Portuguese");
    struct livro ficha[TAM]; /*aqui estamos instanciando livro com o nome "ficha", em forma de vetor e por isso com tamanho da constante TAM*/
    struct livro troca;
    int busca, i, j, acha, opcoes;

    opcoes = 0;

    while(opcoes != 5) {
        printf("1-Cadastrar os livros.\n2-Imprimir os livros cadastrados.\n3-Pesquisar livros por código.\n4-Ordenar os livros por ano.\n5-Sair.\n\nDigite a opção desejada: ");
        scanf("%d", &opcoes);
        fflush(stdin);

        if (opcoes == 1) {
            system("cls");
            for (i=0; i<TAM; i++) {
                printf("Digite o código do livro da posição %d: ", i+1);
                scanf("%d", &ficha[i].codigo);
                fflush(stdin);
                
                printf("Digite o título do livro: ");
                scanf("%50[^\n]s", &ficha[i].titulo); /*(“%50[^\n]s”), permite que o scanf leia apenas, no máximo, 50 caracteres, ou até que a tecla ‘\n’ seja pressionada, além de permitir que sejam lidos espaços.*/
                fflush(stdin);
                
                printf("Digite o nome do autor: ");
                scanf("%30[^\n]s", &ficha[i].autor);
                fflush(stdin);
                
                printf("Digite a área do livro: ");
                scanf("%30[^\n]s", &ficha[i].area);
                fflush(stdin);
                
                printf("Digite o ano: ");
                scanf("%d", &ficha[i].ano]);
                fflush(stdin);
                
                printf("Digite o nome da editora: ");
                scanf("%30[^\n]s", &ficha[i].editora);
                fflush(stdin);
            }
        }
        
        else {
        	
        	if (opcoes == 3) {
        		system("cls");
        		printf("Digite o código que deseja buscar: ");
        		scanf("%d", &busca);
        		i = 0;
        		acha = 0;
        		while ((i < TAM) && <acha == 0) {
        			if (ficha[i].codigo == busca) {
        				acha = 1;
					} else {
						i++;
					}
					
					if (acha == 1) {
						printf("\nCÓDIGO: %d\n", ficha[i].codigo);
						printf("\nTÍTULO: %s\n", ficha[i].titulo);
						
					}
				}
			}
		}
    }
}
