#include<stdio.h>
#include<string.h>

int main(){
	char str[100];
	printf("Nhap mot chuoi bat ky: ");
	fgets(str, 100, stdin);

	char xoa, result[100];
	printf("Nhap ky tu muon xoa: ");
	scanf("%c", &xoa);
	int i, j=0;
	for(i=0; i<strlen(str); i++){
		if(str[i] != xoa){
			result[j++] = str[i];
		}
	}
	result[j]= '\0';
	
	
	printf("Chuoi sau khi xoa 1 ky tu: %s\n", result);
	
	return 0;
}
