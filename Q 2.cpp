#include <stdio.h>
#include <string.h>
int main(){
	char temp1[100], temp2[100], reversed[100];
	printf("Enter the first string:");
	scanf("%[^\n]", temp1);
	printf("\nEnter the second string:");
	getchar();
	scanf("%[^\n]", temp2);	
	strcpy(reversed, strrev(temp1));
	if (strcmp(reversed, temp2)==0){
		printf("\nBoth are Palindrome of Eachother");
	}else{
		printf("\nBoth are not Palindrome of Eachother");
	}
}
