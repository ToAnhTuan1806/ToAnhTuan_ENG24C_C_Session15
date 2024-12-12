#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char str[]= "hello world";
	printf("Chuoi ban dau: %s\n", str);

	int i, chuHoa =1;
	for(i=0; str[i] != '\0'; i++){
		if(str[i]== ' '){
			chuHoa=1;
		} else if(chuHoa && isalpha(str[i])) {
			str[i]= toupper(str[i]);
			chuHoa=0;
		}
	}
	printf("Chuoi sau khi viet hoa chu cai dau: %s\n", str);
	return 0;
}
