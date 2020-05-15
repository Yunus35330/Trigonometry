#include<stdio.h>

int main(){
	float pi = 3.14159265359 ,x = 0.0;
	int r;

	printf("Dairenizin cevre uzunlugunu ogrenmek icin yaricap'ini giriniz(cm): \n");
	scanf("%d" ,&r);
	printf("Dairenizin cevre uzunlugu = %f cm'dir.\n\n" ,(2*pi)*r);

	printf("Radyan degeri icin 'aci derecesi' degerini giriniz:\n");
	scanf("%f" ,&x);
	printf("acinizin gordugu yay uzunlugu = %f radyan'dir.\n\n" ,x*(pi/180));

	printf("%1.f derece acinin yay uzunlugu = %f cm'kadar eder." ,x ,(2*pi*r)/360*x);

    getch();
return 0;
}
