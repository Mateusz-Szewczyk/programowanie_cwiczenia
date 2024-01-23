/*Wska�niki  a funkcje */

#include <stdio.h>
 
void linia(int k);
/*
       Zdefiniowa� funkcj�, kt�ra oblicza dwie �rednie
       warto�ci swoich argument�w: arytmetyczn� i geometryczn�.
       Obliczone �rednie powinny zosta� przekazane do funkcji main() poprzez  
       parametry funkcji. Argumenty, z kt�rych s� obliczane �rednie powinny  
       pozosta� niezmienione. Funkcja powinna zwracac warto�� 2, je�eli obie
       �rednie zosta�y policzone lub 1, je�eli �rednia geometryczna
       nie istnieje. 
*/       

int main(void){
linia(1);
 
//Zastosowa� funkcj� w programie.

linia(0);
 
return 0;
}



void linia(int k){
if (k>0) printf("\n______________ %d __________________\n",k);
else printf("\n___________________________________\n");
}


 
