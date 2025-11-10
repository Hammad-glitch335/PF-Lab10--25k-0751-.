#include <stdio.h>
int main(){
	char ch;
	FILE *ptr;
	ptr = fopen("taskFile.txt", "r");
	while ((ch = fgetc(ptr)) != EOF){
		printf("%c", ch);
	}
}
