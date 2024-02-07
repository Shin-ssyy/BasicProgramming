#include <stdio.h>

int main() {

    printf("\n\n*******************************\n\n");

    int tmp;

    printf("Make Diamond!\n");

    printf("Write your ODD Number Under 100!\n");
    scanf("%d", &tmp);

    if((tmp % 2) == 0){
        printf("(ERROR)%d is a ODD!\n", tmp);
    }


    

    for(int i = 1; i <= tmp; i++){

        for(int j = 1; j <= tmp - i; j++){
            printf("0");
        }

        for(int j = 1; j <= i; j++ ){
            printf("◇");
        }

        for(int j = 1; j <= tmp - i; j++){
            printf("0");
        }
        printf("\n");

        
    }

    for(int i = 1; i <= tmp; i++){
        for(int j = tmp - i; j <= tmp; j++){
            printf("0");
        }

        for(int j = 1; j <= i; j++ ){
            printf("◇");
        }

        for(int j = tmp - i; j <= tmp; j++){
            printf("0");
        }
        printf("\n");
    }

    printf("\n\nGood Bye!");
    printf("\n\n*******************************\n\n");

   
    return 0;
}
