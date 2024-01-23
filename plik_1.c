/* Wskaüniki */

#include <stdio.h>
 
void linia(int k);

int main(void){
int x=1;
int *p;
linia(1);
/*(1) Sprawdü dzia≥anie programu */

printf ("\nadres x=%p, wartosc x=%d\n",&x,x);  

p=&x;

printf ("\nwartosc x=%d, wartosc wskazywana przez p to: %d\n",x,*p);  

(*p)++;

printf ("\nwartosc x=%d, wartosc wskazywana przez p to: %d\n",x,*p);  

linia(2);
/*
// *(2)Popraw b≥Ídy w poniøszym kodzie, tak aby program skompilowa≥ siÍ i wykona≥

int n=5;
double z, *wsk;

printf ("\nwartosc z=%f, wsk=%p\n",z,wsk);

z=45.5;

*wsk=17.0;  
printf ("\nwartosc z=%f, wartosc wskazywana przez wsk to: %f\n",z,*wsk); 

printf ("\nadres z=%p, wskazanie wsk= %p\n",z,wsk); 

wsk=&n; 
printf ("\nwartosc n=%d, wartosc wskazywana przez wsk to: %f\n",n,*wsk); 

&z=wsk; 
wsk++;
printf ("\nwskazanie wsk= %p, wartosc wskazywana przez wsk to: %f\n",wsk,*wsk);
*/

linia(0);

return 0;
}

void linia(int k){
if (k>0) printf("\n______________ %d _____________________________________\n",k);
else printf("\n______________________________________________________\n");
}


 
