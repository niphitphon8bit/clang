#include <stdio.h>

int main(){
    int i = 0;
    int max = 0;
    int min = 0;
    int x;

    while(i < 10){
        printf("please insert x: ");
        scanf("%d",&x);
        if(i == 0){
            max = x;
            min = x;
        }else{
            if(x > max){
                max = x;
            }else if(x < min){
                min = x;
            }
        }
        i++;
    }

    printf("max is: %d",max);
    printf(" min is: %d",min);
    
    return 0;
}