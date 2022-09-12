#include <stdio.h>

main(){
	printf("Este programa simula diferentes impressões dinâmicas de um CPF na tela em C.\n\n");
	
	//1
	char primeira_parte = '1';
	char segunda_parte = '4';
	char terceira_parte = '7';
	char quarta_parte = '0';
	
	for (primeira_parte = '1'; primeira_parte <= '3'; primeira_parte++){
		putchar(primeira_parte);
		if(primeira_parte=='3')
			putchar('.');
	}
	for (segunda_parte = '4'; segunda_parte <= '6'; segunda_parte++){
		putchar(segunda_parte);
		if(segunda_parte=='6')
			putchar('.');
	}
	for (terceira_parte = '7'; terceira_parte <= '9'; terceira_parte++){
		putchar(terceira_parte);
		if(terceira_parte=='9')
			putchar('-');
	}
	for (quarta_parte = '0'; quarta_parte <= '1'; quarta_parte++)
		putchar(quarta_parte);
		
		
	printf("\n");
	
	//2
	char num = '1';
	
	switch(num){
		case '1':{
			while(num<='3'){
				putchar(num);
				num++;
			}
			putchar('.');
		}
		case '4':{
			while(num<='6'){
				putchar(num);
				num++;
			}
			putchar('.');
		}
		case '7':{
			while(num<='9'){
				putchar(num);
				num++;
			}
			putchar('-');
		}
		for (num = '0'; num <= '1'; num++)
		putchar(num);
	}
	
	printf("\n");
	
	//3 (funcionamento idêntico com ints)
	char cpf[] = {'1','2','3','4','5','6','7','8','9','0','1'};
	int i;
	for(i=0;i<11;i++){
		printf("%c",cpf[i]);
		if(i==2 || i==5)
			putchar('.');
		else if(i==8)
			putchar('-');
	}
}
