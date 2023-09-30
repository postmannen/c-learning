#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    // Full path needed.
    FILE * fh = fopen("/Users/bt/Documents/code/c/file.txt","r");
    if (fh == NULL){
        perror("unable to open the file");
        return -1;
    }

    int chr;
    do{
        chr = fgetc(fh);
        if (feof(fh)){
            break;
        }
        printf("%c",chr);
    } while(1);

    fclose(fh);
    return 0;
}