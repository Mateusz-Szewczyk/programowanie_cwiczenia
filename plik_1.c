/* Wska?niki */

#include <stdio.h>
 
int ile_k(int *t, int k, int size);
void drukujTablice(int tablica[5][5], int wiersze, int kolumny) {
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            printf("%d ", tablica[i][j]);
        }
        printf("\n");
    }
}
void transponuj(int t[5][5], int size){
    printf("\nPrzed transponowaniem:\n");
    drukujTablice(t, size, size);
    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            int tmp = t[i][j];
            t[i][j] = t[j][i];
            t[j][i] = tmp;
        }
    }
    printf("\nPo transponowaniu:\n");
    drukujTablice(t, size, size);
}

int main(void){
    int tab[5][5] = {{20,4,8,4,56},
                     {20,4,8,4,56},
                     {20,4,8,4,56},
                     {20,4,8,4,56},
                     {20,4,8,4,56}};

    int size = sizeof(tab)/sizeof(tab[0]);

    double tab1[16][8];
    for(int i = 0; i < 16; i++){
        for(int j = 0; j < 8; j++){
            tab1[i][j] = i * j;
        }
    }

    //drukujTablice(tab1, 16, 8);

    transponuj(tab, 5);

return 0;
}

int ile_k(int *t, int k, int size){
    int wynik = 0;
    int *w = t;

    for(int i = 0; i < size; i++){
        if(*w%k == 0) wynik++;
        printf("\n%d element tablicy = %d\n",i + 1, *w);
        w++;
    }
    return wynik;
}




 
