#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,c,r;
    printf("enter the number of column you want ");
    scanf("%d",&c);
    printf("enter the number of rows you want ");
    scanf("%d",&r);
    int * *ptr = (int **)malloc(r * sizeof(int *));
    for(i=0;i<r;i++){
          ptr[i]=(int *)malloc(c * sizeof(int));
    }
    for(i=0;i<r;i++){
     printf("enter the numbers for row no. %d. Press Enter key after each number.\n",i);
     for(j=0;j<c;j++){
          scanf("%d",&ptr[i][j]);
     }
    }
     printf("\n");
     for(i=0;i<r;i++){
     for(j=0;j<c;j++){
          printf("%d  ",ptr[i][j]);
     }
     printf("\n");
    }
    getch();
    return 0;
}
