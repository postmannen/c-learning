#include <stdio.h>
#include <string.h>

int main(){

    int index = 0;
    int max = 5;

    while(index<max){
        printf("index while loop %d\n",index);
        index++;
    }

    int i;
    for (i=0;i<max;i++){
        printf("index for loop %d\n",i);
    }

    i = 0;
    do{
        printf("index do while loop %d\n",i);
        i++;
    } while (i<max);

    return 0;
}