#include<stdio.h>
int main(){
	int sum,rows, cols;
	printf("Enter the number of rows: ");
	scanf("%d",&rows);
	printf("Enter the number of columns: ");
	scanf("%d",&cols);
	printf("Enter the elemnts of matrix: ");
	int matrix[rows][cols];
		for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			printf("The inputted matrix [%d][%d] is:",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("The inputted matrix is:\n");
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			sum+=matrix[i][j];
		}
	}
	printf("\n-the sum is %d-", sum);
	return 0;
}
