/*#include <stdlib.h> 
#include <stdio.h> /* 
#include "matriz.h"
struct matriz
{
	int lin;
	int col;
	float** v;
};

Matriz* cria (int m, int n){
	int i;
	Matriz* mat = (Matriz*) malloc(sizeof(Matriz));
	if (mat == NULL)
	{
		printf("Mem�ria insuficiente!\n");
		exit(1);
	}
	mat->lin = m;
	mat->col = n;
	mat->v = (float**) malloc(m * sizeof(float*));
	for (i = 0; i < m; i++)
		mat->v[i] = (float*) malloc(n * sizeof(float));
	return mat;
}

void libera (Matriz* mat){
	int i;
	for (i = 0; i < mat->lin; i++)
		free(mat->v[i]);
	free(mat->v);
	free(mat);
}

float acessa (Matriz* mat, int i, int j){
	if (i < 0 || i >= mat->lin || j < 0 || j >= mat->col){
		printf("Acesso inv�lido!\n");
		exit(1);
	}
	return mat->v[i][j];
}

void atribui (Matriz* mat, int i, int j, float v){
	if (i < 0 || i >= mat->lin || j < 0 || j >= mat->col){
		printf("Atribui��o inv�lida!\n");
		exit(1);
	}
	mat->v[i][j] = v;
}

int linhas (Matriz* mat){
	return mat->lin;
}

int colunas (Matriz* mat){
	return mat->col;
}
*/