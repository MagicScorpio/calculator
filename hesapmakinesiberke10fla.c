#include <stdio.h>
#include <stdbool.h>

hesap(){
	int sayi1;
	int sayi2;
	char islem;
	printf("Yapmak istediginiz islemi seçiniz....:");
	scanf("%c", &islem);
	printf("1. Sayiyi giriniz");
	scanf("%d", &sayi1);
	printf("2. Sayiyi giriniz");
	scanf("%d", &sayi2);
	

	while(true){
		printf("Secim....:");
		fflush(stdin);
		scanf("%c",&islem);
			switch(islem){
			case '+':
				printf("%d + %d = %d", sayi1, sayi2, (sayi1+sayi2));
				break;
			case '-':
				printf("%lf - %lf = %lf \n", sayi1, sayi2, (sayi1-sayi2));
				sayi1 = (sayi1-sayi2);
				break;
			case '*':
				printf("%lf * %lf = %lf \n", sayi1, sayi2, (sayi1*sayi2));
				sayi1 = (sayi1*sayi2);
				break;
			case '/':
				printf("%lf / %lf = %lf \n", sayi1, sayi2, (sayi1/sayi2));
				sayi1 = (sayi1/sayi2);
				break;
			case 'x':
				break;
			default:
				printf("Lutfen gecerli bir islem giriniz.\n");
			}
	 
		
		
		
	}
	
	
}

main(){
	
	hesap();
	
	
	
}
