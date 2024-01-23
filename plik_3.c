/*Wskaüniki  a funkcje */

#include <stdio.h>
 
void linia(int k);
/*
       ZdefiniowaÊ funkcjÍ, ktÛra oblicza dwie úrednie
       wartoúci swoich argumentÛw: arytmetycznπ i geometrycznπ.
       Obliczone úrednie powinny zostaÊ przekazane do funkcji main() poprzez  
       parametry funkcji. Argumenty, z ktÛrych sπ obliczane úrednie powinny  
       pozostaÊ niezmienione. Funkcja powinna zwracac wartoúÊ 2, jeøeli obie
       úrednie zosta≥y policzone lub 1, jeøeli úrednia geometryczna
       nie istnieje. 
*/       

int main(void){
linia(1);
 
//ZastosowaÊ funkcjÍ w programie.

linia(0);
 
return 0;
}



void linia(int k){
if (k>0) printf("\n______________ %d __________________\n",k);
else printf("\n___________________________________\n");
}


 
