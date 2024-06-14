#include <stdio.h>
#include <string.h>

int main(void){
    int t[4]={2,5,-4,-3}, *p;
    p=t+2; p++;
    printf("%d\t %d\t %d\t %d\t %d\t", 2**p, 2**t+4, 2**(t+1), 4*(*p+2), p-t);


    return 0;
}
