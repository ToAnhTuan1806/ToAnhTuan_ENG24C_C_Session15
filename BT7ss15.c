#include<stdio.h>
#include<string.h>

int main(){
	char str[]= "Hello my gmail is test123@gmail.com";
	int chuSo=0, chuCai=0, dacBiet=0;
	
	int i;
	for(i=0; i<strlen(str); i++){
		if((str[i]>='a' && str[i]<='z') || str[i]>='A' && str[i]<='Z') {
			chuCai++;
		} else if(str[i]>='0' && str[i]<='9'){
			chuSo++;
		}	
	}
	
	printf("So ky tu la chu cai: %d\n", chuCai);
	printf("So ky tu la chu so: %d\n", chuSo);
	dacBiet= strlen(str) - (chuCai+chuSo);
	printf("So ky tu dac biet: %d\n", dacBiet);
	return 0;
}
