#include <stdio.h>

int read(int* num){
    *num = 10;
    return 0;
}

int main(){
    int num;
    read(&num);
    printf("number was: %d\n",num);
    
    return 0;
}

