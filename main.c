#include <stdio.h>
#include <locale.h>

// Minhas Funções
#include "mode1.h"
#include "mode2.h"
#include "mode3.h"

main(){
	setlocale(LC_ALL,"");
	printf("Este programa simula diferentes impressões dinâmicas de um CPF na tela em C.\n\n");
	
	mode1();
	printf("\n");
	mode2();
	printf("\n");
	mode3();
	printf("\n");
}
