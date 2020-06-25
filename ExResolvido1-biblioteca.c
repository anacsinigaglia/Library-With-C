/*O problema consiste em elaborar um cadastro para 20 livros, contendo as seguintes
informa��es: c�digo, t�tulo, autor, �rea, ano e editora. Desenvolver um menu com as seguintes
op��es:
1. Cadastrar os livros.
2. Imprimir as informa��es dos livros.
3. Pesquisar livros por c�digo.
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
    struct livro ficha[TAM]; //aqui estamos instanciando livro com o nome "ficha", em forma de vetor e por isso com tamanho da constante TAM
    struct livro troca;
    int busca, i, j, acha, opcoes;

    opcoes = 0;

    while(opcoes != 5) {
        printf("1-Cadastrar os livros.\n2-Imprimir os livros cadastrados.\n3-Pesquisar livros por c�digo.\n4-Ordenar os livros por ano.\n5-Sair.\n\nDigite a op��o desejada: ");
        scanf("%d", &opcoes);
        fflush(stdin);

        if (opcoes == 1) {
            system("cls");
            for (i=0; i<TAM; i++) {
                printf("Digite o c�digo do livro da posi��o %d: ", i+1);
                scanf("%d", &ficha[i].codigo);
                fflush(stdin);
                
                
    
            }
        }
    }
}

