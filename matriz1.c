#include <stdlib.h>
#include <stdio.h> 
#include "./matriz.h"

struct matriz
{
	int lin;
	int col;
	float* v;
};

Matriz* cria (int m, int n){
	Matriz* mat = (Matriz*) malloc(sizeof(Matriz));
	if (mat == NULL){
		printf("Mem�ria insuficiente!\n");
		exit(1);
	}
	mat->lin = m;
	mat->col = n;
	mat->v = (float*) malloc(m * n * sizeof(float));
	return mat;
}

void libera (Matriz* mat){
	free(mat->v);
	free(mat);
}

float acessa (Matriz* mat, int i, int j){
	int k; 
	if (i < 0 || i >= mat->lin || j < 0 || j >= mat->col){
		printf("Acesso inv�lido!\n");
		exit(1);
	}
	k = i * mat->col + j;
	return mat->v[k];
}

void atribui (Matriz* mat, int i, int j, float v){
	int k; 
	if (i < 0 || i >= mat->lin || j < 0 || j >= mat->col){
		printf("Atribui��o inv�lida!\n");
		exit(1);
	}

	k = i * mat->col + j;
	mat->v[k] = v;
}

int linhas (Matriz* mat){
	return mat->lin;
}

int colunas (Matriz* mat){
	return mat->col;
}
