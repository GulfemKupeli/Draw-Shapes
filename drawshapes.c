#include <stdio.h>

int main()
{
     int i, height, shno, j;


    printf("Shape 1: square\n");
    printf("Shape 2: triangle, left\n");
    printf("Shape 3: triangle, right\n");
    printf("Shape 4: triangle, upside down left\n");
    printf("Shape 5: triangle, upside down right\n");
    printf("Shape 6: triangle, centered\n");
    printf("Shape 7: triangle, upside down centered\n");
    printf("Enter shape no: ");
    scanf("%d", &shno);

    printf("Enter height: ");
    scanf("%d", &height);

    for(i=0; i < height;i++) {
        if(shno==1){
            for(j = 0; j<height; j++){
                printf("*");
            }
            printf("\n");
        }
    }
     for(i=0;i<height; i++){
        if(shno==2) {
            for(j =0; j<i+1; j++) {
                printf("*");
            }
            printf("\n");
        }
     }
      for(i=0;i<height; i++){
        if(shno==3) {
            for(j=i; j<height-1; j++){
                printf(" ");
            }
            for(j=0; j<i+1; j++){
                printf("*");
            }
            printf("\n");
        }
      }

      for(i=0; i<height; i++) {
        if(shno==4) {
            for(j=i; j<height; j++) {
                printf("*");
            }
            printf("\n");
        }
      }
      for(i=0; i<height; i++) {
        if(shno==5) {
            for(j=0; j<i; j++ ) {
                printf(" ");
            }
            for(j=i; j<height; j++) {
                printf("*");
            }
            printf("\n");
        }
      }
      for(i=0; i<height; i++) {
        if(shno==6) {
            for(j=i;j<height-1;j++) {
                printf(" ");
            }
            for(j=-1;j<i;j++){
                printf("*");
            }
            for(j=-1;j<i-1;j++){
                printf("*");
            }
            for(j=i;j<height;j++) {
                printf(" ");
            }
            printf("\n");
        }
      }
      for(i=0; i<height; i++) {
        if(shno==7) {
          for(j=0;j<i; j++) {
            printf(" ");
          }
          for(j=i;j<height-1; j++) {
            printf("*");
          }
          for(j=i;j<height; j++) {
            printf("*");
          }
          for(j=0;j<i;j++) {
            printf(" ");
          }
          printf("\n");
        }
      }
    
    return 0;
}
