#include <stdio.h>


int main() {
  int size = 3;
  printf("Enter Size: ");
  scanf("%d", &size);
  int row,col,i,j,l,m;
  int num = 1;
  row = 1;
  col = 1;  
  int count = 0;
  int matrix[size][size];
  
  for(i = 0; i < size; i++){
    for(j = 0; j < size; j++){
      matrix[i][j] = 0;
    }
  }

  for(i = 0; i < size; i++){
    for(j = 0; j < size; j++){
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  i = size/2;
  j = size/2;
    
  i--;
  printf("initial i: %d\n", i);
  printf("initial j: %d\n", j);
 
 
 
 // spiralling
while(row < size && col < size){
  	
  	  
   // for going down
  if(num < (size*size)) {
	  count = 0;
	  while(count < row){
	  	
	  	if (count != row) i++;
		matrix[i][j] = num;
	  	count++;
	  	num++;
	   
	  }
	  while (matrix[i][j + 1] != 0 && num <= (size*size)) {
	  	i++;
	  	matrix[i][j] = num;
	  	num++;
	  }
  }
 
   // for going right
  if(num < (size*size)) {
	 
	  count = 0;
	  while(count < col){
	    printf("Going right\n");
	    if (count != col) j++;
	  	matrix[i][j] = num;
	  	printf("%d\n", matrix[i][j]);
	  	count++;
	  	num++;
	    
	  } 
	  while (matrix[i - 1][j] != 0 && num <= (size*size)) {
	  	j++;
	  	matrix[i][j] = num;
	  	num++;
	  }
  }
  
  // for going up
  if(num < (size * size)){
      	
	  count = 0;
	  while(count < row){
	  	printf("Going up\n");
	  	if (count != row) i--;
	  	matrix[i][j] = num;
		printf("%d\n", matrix[i][j]);	
	 	count++;
	  	num++;
	  	
	  }
	  while (matrix[i][j - 1] != 0 && num <= (size*size)) {
	  	i--;
	  	matrix[i][j] = num;
	  	num++;
	  }
  }

  //for going left
  if(num < (size * size)){
  
	  
	  count = 0;
	  while(count < col){
	  	printf("Going left\n");
	 	if (count != col) j--;

		matrix[i][j] = num;
	  	printf("%d\n", matrix[i][j]);
	  	count++;
	  	num++;
	  }
	  while(matrix[i + 1][j] != 0 && num <= (size*size)){
	  	j--;
	  	matrix[i][j] = num;
	  	num++;
	  }
  }
  
   row++;col++;
}
 
  for(i = 0; i < size; i++){
    for(j = 0; j < size; j++){
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}
