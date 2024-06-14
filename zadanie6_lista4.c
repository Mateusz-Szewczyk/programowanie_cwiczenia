#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int born_in_december(char* pesel){
    if((pesel[2] == "1") && (pesel[3] == "2")) return 1;
    return 0;
}
int main(){
    FILE *file;
    char *filename = "pesele.txt";
    if((file = fopen(filename, "r")) == NULL){
        printf("Blad przy otwieraniu pliku");
    }
    char *pesel = NULL;
    int born_in_december_count = 0;

    while(fscanf(file, "%s", pesel) != EOF){
        if(born_in_december(pesel)) born_in_december_count++;
    }
    printf("born in december count: %d", born_in_december_count);
    return 0;
}