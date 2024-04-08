#include <stdio.h>
#include <string.h>
#define SIZE 80
char *my_strcpy1(char *p, const char *q);
char *my_strcpy2(char *p, const char *q);
char *my_strcpy3(char *p, const char *q);
int main(void)
{
    char str1[SIZE + 1];
    char str2[SIZE + 1];
    char str3[SIZE + 1];
    char str4[SIZE + 1];
    char *s =  "Za wlosy ciagne te mysli nieuczesane.";

    //str1 = str2; //oczywiście taka próba kopiowania jest bez sensu (str1 nie może być l-wartością)

    //kopiowanie
    strcpy(str1, s);
    printf("Zmienna str1 zawiera teraz lancuch:\n");
    puts(str1);

    my_strcpy1(str2, s);
    printf("Zmienna str2 zawiera teraz lancuch:\n");
    puts(str2);

    my_strcpy2(str3, s);
    printf("Zmienna str3 zawiera teraz lancuch:\n");
    puts(str3);

    my_strcpy3(str4, s);
    printf("Zmienna str4 zawiera teraz lancuch:\n");
    puts(str4);

    return 0;
}
char *my_strcpy1(char *p, const char *q)
{
    char *s = p;  // żeby móc zwrócić ten wskaźnik
    while (*q != '\0')
    {
        *p = *q; //kopiowanie
        p++;
        q++;
    }

    return s;
}
char *my_strcpy2(char *p, const char *q)
{
    char *s = p;              // żeby móc zwrócić ten wskaźnik
    while ((*p = *q) != '\0') // możemy kopiowanie przenieść tu
    {
        p++;
        q++;
    }
    return s;
}
char *my_strcpy3(char *p, const char *q)
{
    char *s = p;                    // żeby móc zwrócić ten wskaźnik
    while ((*p++ = *q++) != '\0');  // możemy przesuwanie wskaźników też tu przenieść

    return s;
}
