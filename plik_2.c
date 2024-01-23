/* WskaŸniki a funkcje */

#include <stdio.h>
 
void linia(int k);
void mniejsza(float x,float y);

int main(void){
linia(1);

/* 
Zmodyfikowaæ funkcjê mniejsza tak, aby obu jej
argumentom (zmiennym a i b)zosta³a przypisana wartoœæ mniejszego z nich */

float a=10.5,b=25.8; 
printf("\na=%.2f b=%.2f\n",a,b);

mniejsza(a,b);

printf("\na=%.2f b=%.2f\n",a,b);

linia(0);
 
return 0;
}

void mniejsza(float x, float y){
printf("\nW funkcji, przed zamiana: x=%.2f y=%.2f\n",x,y);	
if (x<y)
   y=x;
else
   x=y;  
printf("\nW funkcji, po zamianie: x=%.2f y=%.2f\n",x,y);

}


void linia(int k){
if (k>0) printf("\n______________ %d ___________________________________\n",k);
else printf("\n___________________________________________________\n");
}


 
