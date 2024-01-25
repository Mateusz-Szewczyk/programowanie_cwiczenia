//
// Created by Mateusz Szymon Szewczyk on 22/01/2024.
//

#include <stdio.h>
#include <stdlib.h>
#define W 3
#define K 3
//
//
//Ćw1. Przy poniższych deklaracjach i podstawieniach jaka jest wartość zmiennych i oraz k?
//int *a, *b, i=4, k=1;
//a= &i;
//b= &k;
//a=b;
//*a+= *b;
//.................................................................
//int i=4, k=1, *a=&i, *b;
//b=a;
//*a*= *b;
int tab[] = {1,5,9};
int x=1, y=3, z=5;

int* sumy(int t1[], int t2[][K]);
void drukuj(int n, int m, int z[n][m]);
void zamiana(int tab[W][K], int w1, int w2);
int licz(int *p1, int *p2, int x);
int fsuma(int *t, int *wsk, int roz);
int iloczyn(int z[W][K]);
void maks_czworka(int t[W][W]);
//
//void f(double *s, int n, int m){
//    n--;
//    --m;
//    *s=m*n;
//}

void modyfikuj(int tab[]){
    printf("%d\n", *tab);
}

int wskaz_element(int tab[], int n){
    return *(tab+n);
}

double g( int a, int *b){
    int c=5;
    if(c>a) c=a;
    if(c<*b) *b=c;
    return *b*0.5;
}

void f(int v, int *u, int x){
    int y=12;
    printf("%d %d %d %d %d\n", x, y, z, *u, v);
    x=y; y=v; v=*u; *u=z; z=x;
    printf("%d %d %d %d %d\n", x, y, z, *u, v);
}

int zamiana_z(int x){
    int y = 12;
    x = y; z = x;
    return x;
}

int main(void)
{
//    int liczba=1;
//    int *wliczba;
//    wliczba = &liczba;
//    liczba = zamiana(liczba);
//    printf("%d\n%d\n%d\n%d\n\n", &liczba, // zwraca adres "liczba", & zwraca adres tego co jest po tym
//                             wliczba, // wliczba zwraca przypisane do tego &liczba
//                             *wliczba, // *wliczba zwraca to co jest pod adresem wliczba
//                             liczba); // zwraca po prostu "liczba"
//
//
//    modyfikuj(tab);
//    printf("%d\n", wskaz_element(tab, 1));

//    int *a, *b, i=4, k=2;
//    a= &i;
//    b= &k;
//    a=b;
//    *a+= *b;
//    printf("%d\n", *a);

//    int i=4, k=1, *a=&i, *b;
//    b=a;
//    *a*= *b;
//    printf("%d\n", *a);

//    int x=1, *y=&x;
//    printf("%d", *y);

//    int x=-1, *y=&x;
//    printf("%d", *y*x**y);

//    int x=2, *y=&x;
//    x*=x**y;
//    printf("%d\n", x);

//    int a=10, b=50, c=-100;
//    int *p =&a;
//    int *q=&b;
//    int *r=&c;
//    p=&c;
//    a=*p + *q + *r;
//    printf("%d", a);

//    int y=5,z=7;
//    double x=2;
//    f(&x,y,z);
//    printf("y=%d x=%.2f z=%d\n",y, x, z);
//
//    y=g(3,&z);
//    printf("y=%d x=%.2f z=%d\n",y, x, z);

    //f(x,&y,z);
//    printf("%d %d %d\n", x, y, z);
//
//    zamiana_z(z);
//    printf("%d %d %d\n", x, y, z);


    printf("\n\n============================\n");


//    int a = 2, b = 15;
//    while(a++<b){
//        a+=b/2;
//        b-=3;
//        printf("\n%d\n%d\n", a, b);
//    }
//    printf("\n%d\n%d", a, b);

//    int t[3] = {6,4,2}, k = 3; x = 1;
//    do{
//        t[--k] += x++;
//        x *= 2;
//    }while(k);
//
//    printf("t[0] = %d\nt[1] = %d\nt[2] = %d\nx = %d", t[0], t[1], t[2], x);

    /*
     * Zadanie 2
            Wskaźnik wsk dzieli N elementową tablicę liczb typu int na dwie części. Napisz
            definicję funkcji, której parametrami będą wskaźnik na początek tablicy, wskaźnik
            wsk i rozmiar tablicy. Funkcja powinna obliczyć dwie sumy elementów tablicy:
            umieszczonych przed elementem wskazanym przez wsk (łącznie z nim) oraz sumę
            elementów położonych za nim. Jeśli suma pierwszej części tablicy jest większa, to
            funkcja powinna zwrócić 0, w przeciwnym wypadku 1.
            Prototyp funkcji:
            int fsuma(int *t, int *wsk, int roz);
     */

    int tablica[] = {1,2,3,4};
//    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);
//    if(fsuma(tablica, &tablica + 2, rozmiar)){
//        printf("\nPrawa strona jest większa od lewej");
//    } else{
//        printf("\nLewa strona jest większa od prawej");
//    }
//    printf("\n%d\n%d", *(tablica+1), tablica);
//    printf("%d", licz(&tablica[0], &tablica[2], 2));

    int t2[W][K] = {{1,2,30},
                  {4,5,6},
                  {7,8,90}};
//    printf("\n\n%d", t2[2][2]);
//    printf("\n\nTablica t2 przed zamianą:\n");
//    drukuj(W, K, t2);
//    zamiana(t2, 0, 1);
//    printf("\n\nTablica t2 po zamianie:\n");
//    drukuj(W, K, t2);

//    printf("\niloczyn = %d\n\n", iloczyn(t2));
//
//    int t1[3];
//    printf("%d", *(sumy(t1, t2) + 2));

    maks_czworka(t2);

    return 0;
}
    /*
     Zad1.  Napisz funkcję, która otrzymuje jako parametr tablicę dwuwymiarową liczb
            rzeczywistych i zamienia miejscami dwa wskazane wiersze tej tablicy – numery
            wierszy są również parametrami tej funkcji.
       */
void zamiana(int tab[W][K], int w1, int w2){
    for(int i = 0; i < W; i ++){
        int tmp = tab[w2][i];
        tab[w2][i] = tab[w1][i];
        tab[w1][i] = tmp;
    }
}

void drukuj(int n, int m, int z[n][m])
{
    int i, j;
    for ( i = 0; i < n; i++ ) {
        printf("| ");
        for (j = 0; j < m; j++)
            printf("%d", z[i][j]);
        printf(" |\n");
    }
}
     /*
     Zad2.  Napisz funkcję, która otrzyma jako argument tablicę dwuwymiarową i zwróci
            iloczyn tych elementów tablicy, których suma indeksów jest nieparzysta, a wartości
            są różne od 0.
            */
int iloczyn(int z[W][K]){
    int wynik = 1;
    for(int i = 0; i < W; ++i){
        for(int j = 0; j < K; ++j){
            if((i+j)%2 == 1 && z[i][j] != 0){
                wynik *= z[i][j];
            }
        }
    }
    return wynik;
}

     /*
     Zad3.  Napisz funkcję, która otrzymując jako argumenty tablicę jednowymiarową i
            dwuwymiarową liczb rzeczywistych, zapisze do tablicy jednowymiarowej sumy
            elementów z poszczególnych kolumn tablicy dwuwymiarowej.
*/

int* sumy(int t1[], int t2[][K]){
    for(int i = 0; i < W; i++){
        int suma = 0;
        for(int j = 0; j < K; j++){
            suma += t2[j][i];
        }
        t1[i] = suma;
    }
    return t1;
}

      /*
     Zad4.  Dana jest tablica zwierająca N kolumn i N wierszy. Wyznaczyć taką „czwórkę„
            sąsiadujących elementów, których suma jest maksymalna.

       */
void maks_czworka(int t[W][W]){
    int max = t[0][0] + t[0][1] + t[1][0] + t[1][1];
    int w = W - 1;
    for(int i = 0; i < w; i++){
        for(int j = 0; j < w; j++){
            int can = t[i][j] + t[i][j+1] + t[i+1][j] + t[i+1][j+1];
            // printf("\n%d\n", can);
            if(can > max) max = can;
        }
    }
    printf("\n%d\n", max);
}

       /*
     Zad5.  Zdefiniować funkcję, która sprawdzi czy macierz kwadratowa, będąca jej
            parametrem jest diagonalna.

     Zad6.  Zdefiniować funkcję, która transponuje macierz kwadratową będącą jej
            parametrem.
     * */

/*
Pierwsze dwa argumenty funkcji licz
int licz(double *p1, double *p2, double x);
wskazują dwa elementy tej samej tablicy typu double. Uzupełnić jej definicję w taki
    sposób, by zwracała informację o liczbie elementów posiadających taką samą wartość
    jak trzeci argument i zawartych między elementami wskazywanymi przez pierwsze
    dwa argumenty włączając w to element wskazywany przez pierwszy argument oraz
wyłączając element wskazywany przez drugi argument. Częściowe rozwiązanie w
    pliku źródłowym plik cz3.c.

*/

int fsuma(int *t, int *wsk, int roz){
    int sumaL = 0;
    int sumaP = 0;
    int* srodek = wsk + 1;
    printf("\nSrodek = %d\n", srodek);
    while(roz > 0){
        if(t < srodek) sumaL += *t;
        if(t >= srodek) sumaP += *t;
        --roz;
        t++;
    }
    printf("\n\nSuma lewa = %d\nSuma prawa = %d", sumaL, sumaP);
    return sumaL<sumaP;
}


int licz(int *p1, int *p2, int x){
    int n = 0;
    while(p1<p2){
        if(*p1 == x) n++;
        p1++;
    }
}
