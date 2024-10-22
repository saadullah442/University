#include <stdio.h>



/*void go_right(int *i, int *j, int matrix[][size], int *num, int *count){
	(*j)++;
    if (matrix[*i][*j] == 0) {
	    for(*count = 0; *count < *col; (*j)++, (*count)++){
	      printf("Going right\n");
	      matrix[*i][*j] = *num;
	      printf("%d\n", matrix[*i][*j]);
	      (*num)++;
	    }
    }
	
}


void go_left(int *j, int matrix[][size], int *num, int *count){
	(*j)--;
    if (matrix[*i][*j] == 0) {
	    for(*count = 0; *count < *col; (*j)--, (*count)++){
	      printf("Going left\n");
	      matrix[*i][*j] = *num;
	      printf("%d\n", matrix[*i][*j]);
	      (*num)++;
	    }
    }
	
}


void go_up(int *j, int matrix[][size], int *num, int *count){
	(*i)--;
    if(matrix[*i][*j] == 0) {
	    for(*count = 0; *count < *row;(*count)++, (*i)--){
	      printf("Going up\n");
	      matrix[*i][*j] = *num;
	       printf("%d\n", matrix[*i][*j]);
	      (*num)++;
	    }
    }
}


void go_down(int *j, int matrix[][size], int *num, int *count){
	(*i)++;
    if(matrix[*i][*j] == 0) {
	    for(*count = 0; *count < *row;(*count)++, (*i)++){
	      printf("Going up\n");
	      matrix[*i][*j] = *num;
	       printf("%d\n", matrix[*i][*j]);
	      (*num)++;
	    }
    }
}

*/

int main() {

  int size;
  printf("Enter Size: ");
  scanf("%d", &size);
  int row,col,i,j;
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
  //matrix[i][j] = num;
  //num++;
  
  i++;
  printf("initial i: %d\n", i);
  printf("initial j: %d\n", j);
 
 
 
 // spiralling
  while(row < size && col < size){
  	
  	printf("row: %d\n", row);
    printf("col: %d\n", col);
    
  
   // for going down
  count = 0;
 
  while(count < row){
  	printf("Going down\n");
  	

	matrix[i][j] = num;
  	
  	printf("%d\n", matrix[i][j]);
  	if (count != row) i--;
  	count++;
  	num++;
  }  
  
  // for going right
  count = 0;
  
  while(count < col){
    printf("Going right\n");
    
	
  	matrix[i][j] = num;
  
  	printf("%d\n", matrix[i][j]);
  	if (count != col) j++;
  	count++;
  	
  	num++;
  }
  
  // for going up
  count = 0;
  
  while(count < row){
  	printf("Going up\n");
  	
	
  	matrix[i][j] = num;
  	
	printf("%d\n", matrix[i][j]);
	if (count != row) i++;
  	count++;
  	
  	num++;
  }
  
  //for going left
  count = 0;
  
  while(count <= col){
  	printf("Going left\n");
  	if (count != col) j--;
  	matrix[i][j] = num;
  
  	printf("%d\n", matrix[i][j]);
  	count++;
  	
  	num++;
  }
  
  

 
 
   row++;col++;
 
}
 
 
 // Wrong Code
 /* while(row <= size && col <= size){

    printf("row: %d\n", row);
    printf("col: %d\n", col);
    
	// for going down
    i++;
    if(matrix[i][j] == 0) {
    	//row = 0;
    	row = row + i;
		for(; i < row;i++){
	      printf("Going down\n");
	      matrix[i][j] = num;
	      printf("%d\n", matrix[i][j]);
	      num++;
	    }
	}

    // for going right
    j++;
    if (matrix[i][j] == 0) {
    	//col = 0;
		col = col + j;
	    for(; j < col; j++){
	      printf("Going right\n");
	      matrix[i][j] = num;
	      printf("%d\n", matrix[i][j]);
	      num++;
	    }
    }
   
    // for going up
    i--;
    if(matrix[i][j] == 0) {
    	//row = 0;
    	row = row + i;
	    for(; i > row;i--){
	      printf("Going up\n");
	      matrix[i][j] = num;
	       printf("%d\n", matrix[i][j]);
	      num++;
	    }
    }
    
    // for going left
    j--;
	if(matrix[i][j] == 0) {
		//col = 0;
		col = col + j;
	    for(; j > col; j--){
	      printf("Going left\n");
	      matrix[i][j] = num;
	       printf("%d\n", matrix[i][j]);
	      num++;
	    }
	
	}
    
    
    
    row++;col++;
    for(i = 0; i < size; i++){
	    for(j = 0; j < size; j++){
	      printf("%d ", matrix[i][j]);
	    }
	    printf("\n");
    }
    
  }
  
*/
  for(i = 0; i < size; i++){
    for(j = 0; j < size; j++){
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}
