#include <stdio.h>

int main()
{
    int score;
    scanf("%d",&score);
    if(score>=68){
        if(score>=87){
            printf("A");
        }else if(score>=79){
            printf("B");
        }else if(score>=71){
            printf("C\n");
            printf("B is %d",79-score);
        }
       
    }else{
        if(score<=63){
            if(score>12){
                printf("D");
            }else{
                printf("F");
            }
        }
    }

    return 0;
}