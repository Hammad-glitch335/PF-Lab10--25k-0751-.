#include <stdio.h>
#include <string.h>
int main(){
	char password2[50];
	char password[50];
	char name[100];
	char temp_name[100];
	printf("Enter Your Password:");
	scanf("%[^\n]", password);
	if (strlen(password) >=8){
		printf("\nValid Length");
		printf("\nEnter Password Again:");
		getchar();
		scanf("%[^\n]", password2);	
			if (strcmp(password, password2) == 0){
				printf("Password Verified\n");
				printf("\nEnter Your Name:");
				getchar();
				scanf("%[^\n]", name);
				strcpy(temp_name, name);
				printf("The password %s has been set for the name %s", password, temp_name);
			}
			else{
			printf("Both the Password Are Not Same!");
			}
	}
	else{printf("Invalid Length\n");
	}
}
