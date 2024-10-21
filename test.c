#include <stdio.h>
int main() {

  int size;
  printf("Enter Size: ");
  scanf("%d", &size);
  int row,col,i,j;
  int num = 1;
  row = 1;
  col = 1;  

  int matrix[size][size];
  
  for(i = 0; i < size; i++){
    for(j = 0; j < size; j++){
      matrix[i][j] = 0;
    }
  }

  i = size/2;
  j = size/2;
  martrix[i][j] = num;
  num++;

  while(row != size && col != size){

    // for going right
    for(j++; j < col; j++){
      matrix[i][j] = num;
      num++;
    }

    // for going up
    for(i++; i < row; i++){
      matrix[i][j] = num;
      num++;
    }
  
    // for going left
    for(j--; j < col; j--){
      matrix[i][j] = num;
      num++;
    }

    // for going down
    for(i--; i < col; i--){
      matrix[i][j] = num;
      num++;
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