#include <stdio.h>
int main(){
	int size;
	int i,j;
	int k,l;
	// Taking size of matrix as input
	printf("Enter size of matrix: ");
	scanf("%d", &size);
	int temp;
	int matrix[size][size];
	int tran_matrix[size][size];

	// Taking matrix elements input
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("Enter number: ");
			scanf("%d", &matrix[i][j]);
		}
	}
	
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	
	
	// Transposing Matrix
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("Initial matrix[%d][%d]: %d\n", i, j, matrix[i][j]);
			tran_matrix[i][j] = matrix[j][i];
			tran_matrix[j][i] = matrix[i][j];
			printf("Final matrix[%d][%d]: %d\n", i, j, matrix[i][j]);
			
		}
	 	printf("transposed matrix row %d\n", i);
		for(k=0;k<size;k++){
			for(l=0;l<size;l++){
				printf("%d ", matrix[k][l]);
			}
		printf("\n");
		}
	}
	printf("Tranpose of matrix\n");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("%d ", tran_matrix[i][j]);
			
		}
		printf("\n");
	}
	
	
}
