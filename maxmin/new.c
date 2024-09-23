#include <stdio.h>
int main (){
    
    int max = 0;
    int min = 0;
    int i = 10;
    int x;

        printf("please insert x: ");
        scanf("%d",&x);
        max = x;
        min = x;

    while(i > 1){

        printf("please insert x: ");
        scanf("%d",&x);

        if(x > max){
            max = x;
        }else if(x < min){
            min = x;
        }
        i = i - 1;
    };

    printf("max is: %d",max);
    printf(" min is: %d",min);
    return 0;
}