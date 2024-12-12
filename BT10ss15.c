#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Nhap mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")]= '\0';

    int count[128] = {0};
	int i;
    for (i=0; i<strlen(str); i++) {
        unsigned char c= str[i];
        count[c]++;
    }
    for(i=0; i<128; i++) {
        if(count[i] > 0) {
            printf("%c: %d\n", i, count[i]);
        }
    }
    return 0;
}

