#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

int main(){
    FILE *file;
    char *filename = "numbers.txt";
    if((file = fopen(filename, "r+")) == NULL){
        perror("Error opening file");
        printf("Cant open the file/File doesnt exist");
    }

    char string[100];
    fgets(string, 100, file);
    printf("%s", string);

    fclose(file);
}