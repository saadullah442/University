// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int star_num, max_star, space, mid_space;
    int mid_space2, mid_space3;
    int i,j;
    
    printf("Enter a number: ");
    scanf("%d", &max_star);
    // Space is starting from 0
    space = max_star + (max_star - 3); // 7 if max_star = 5
    // mid space is always odd
    mid_space = 1;
    
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
       printed by the loop
       We are going to print (n-1) stars diagonally*/
    for(star_num=0;star_num< max_star-2;star_num++){
        for(i=space;i>=0;i--){
            printf(".");
        }
        printf("*");
        
        for(i=0;i<mid_space;i++){
            printf(".");
        }
        printf("*");
        
        space--;
        mid_space += 2;
        printf("\n");
        
    }
    
    
    // Printing star horizontally on left side
    for(star_num=0;star_num< max_star;star_num++){
        printf("*");
    }
    
    for(i=0;i<mid_space;i++){
        printf(".");
    }

    // Printing star horizontally on right side
    for(star_num=0;star_num< max_star;star_num++){
        printf("*");
    }
    printf("\n");
    // Number of spaces in middle after printing stars horizontally
    mid_space = (mid_space * 2) - 1;
    
     /* Printing stars diagonally again
        Printing (n-1) stars
        space from left of screen border is increasing
     */ 
    space = 1; 
    for(star_num=0;star_num< max_star - 1; star_num++){
        // for printing space
        for(i=0;i<space;i++){
            printf(".");
        }
        printf("*");
       
        // for printing space in middle
        for(i=0;i<mid_space;i++){
            printf(".");
        }
        printf("*");
        printf("\n");
        // Decreasing space by 2 to keep it odd
        mid_space -= 2;
        // icreasing space from left side of screen
        space++;
    }


    // These spaces are for spaces between leg stars  
    mid_space += 2;
    mid_space2 = mid_space3 = mid_space / 2;
    mid_space = 1;

    // Space from left screen border
    space -= 2;
    // printf("Space is: %d\n", space);
    // printf("mid_space2: %d\n",mid_space2 );
    // printf("mid_space3: %d\n",mid_space3 );
    /* Printing stars diagonally again
        Printing (n-1) stars
        space from left of screen border is decreasing
    */ 
    for(star_num=0;star_num< max_star - 1; star_num++){
        // for printing space
        for(i=0;i<space;i++){
            printf(".");
        }
        printf("*");
       
        // for printing space in middle of first 2 legs
        for(i=0;i<mid_space2;i++){
            printf(".");
        }
        // if not last row
        if(star_num != max_star - 2)printf("*");
        
        // if this is the last row
        if(star_num == max_star - 2){
            // printf("maxStar: %d\n", max_star - 2);
            // printf("star_num; %d\n", star_num);
            // printf("In last row\n");
            mid_space += 2;
            for(i=0;i<mid_space;i++){
                printf(".");
            }
            printf("*\n");
            break;
        }

        // for printing space in middle of first center legs
        for(i=0;i<mid_space;i++){
            printf(".");
        }
        printf("*");
        for(i=0;i<mid_space3;i++){
            printf(".");
        }
        printf("*");
        printf("\n");

        // Decreasing space by (n - 1)
        mid_space += max_star - 1;
        // icreasing space from left side of screen
        space--;
        mid_space2--;
        mid_space3--;
    }
    

    
    
    return 0;

}
