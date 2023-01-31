#include <stdio.h>

int main () {
	char frase [500];
	int t = 0;
	
	printf("Digite a frase: ");
	gets(frase);
	
	for(int idx = 0; idx < 500; idx++) {
		if(frase[idx] == '\0') {
			t = idx;
			break;
		}
	}
	printf("A frase digitada tem %d caracteres", t);
	
	return 0;
}
