#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

void transposta (Matriz*,int*,int*);


int main()
{
    Matriz *mat;
    	mat = cria(10,10);
    	atribui(mat,0,0,5);
    	printf("%f", acessa(mat,0,0));
    	transposta(mat,linhas(mat),colunas(mat));
    	system("pause");
    return 0;
}

void transposta(Matriz *mat, int *l, int *c){
	Matriz *mat2;
	
	mat2 = cria(10,10);
	
}