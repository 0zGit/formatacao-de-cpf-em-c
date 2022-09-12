void mode1(){
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
}
