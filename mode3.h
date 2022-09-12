void mode3(){
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
