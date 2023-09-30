#include <stdio.h>

int main(){
    int num = 10;

    switch(num){
        case 5:
            printf("number was 5\n");
            break;
        case 10:
            printf("number was 10\n");
            break;
        default:
            printf("the number was something else.....\n")
    }

    return 0;
}