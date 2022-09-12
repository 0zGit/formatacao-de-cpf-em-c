void mode2(){
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
}
