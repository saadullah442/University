// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int star_num, max_star, space, mid_space;
    // int col_mid;
    int i,j;
    
    printf("Enter a number: ");
    scanf("%d", &max_star);
    space = max_star + (max_star - 3); // 7 if max_star = 5
    mid_space = 3;
    // col_mid = max_star;
    printf("space: %d\n", space);
    // printf("Space: %d\n", space);
        for(i=space;i>=0;i--){
            printf(".");
        }
        printf("*");
        printf("\n");

    space--;
    // Printing till 4 rows
    /* Already printed one start so one star less will be
       printed by the loop*/
    for(star_num=0;star_num<max_star;star_num++){
        for(i=space;i>=0;i--){
            printf(".");
        }
        printf("*");
        
        for(i=0;i<mid_space;i++){
            printf(".");
        }
        printf("*");
        
        space--;
        mid_space++;
        printf("\n");
        
    }
    
    return 0;

}
