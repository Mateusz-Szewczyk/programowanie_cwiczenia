#include <stdio.h>
#include <string.h>
size_t my_strlen1(const char *p);
size_t my_strlen2(const char *p);
size_t my_strlen3(const char *p);
size_t my_strlen4(const char *p);
int main(void)
{
    char str[] = "Jak beda sie czuc lunatycy na Ksiezycu?";

    printf("dlugosc lancucha str: %d\n", strlen(str));
    printf("dlugosc lancucha str: %d\n", my_strlen1(str));
    printf("dlugosc lancucha str: %d\n", my_strlen2(str));
    printf("dlugosc lancucha str: %d\n", my_strlen3(str));
    printf("dlugosc lancucha str: %d\n", my_strlen4(str));
    return 0;
}
size_t my_strlen1(const char *p)
{
    size_t i;
    // tu p jest wskaźnikiem a nie tablicą wic p++ jest poprawne!
    for(i = 0; *p != '\0'; p++) // dopóki p nie wskazuje na \0
        i++;
    return i;
}
size_t my_strlen2(const char *p)
{
    size_t i = 0;
    for(; *p; p++) // dopóki p nie wskazuje na \0 (bo \0 to fałsz)
        i++;
    return i;
}
size_t my_strlen3(const char *p)
{
    size_t i = 0;

    // bo *p++ to to samo co *(p++)
    // mamy post-inkrementacje wiec przesunięcie wskaźnika nastąpi
    // po odczytaniu na tego na co wskazuje
    while(*p++) // dopóki p nie wskazuje na \0 (bo \0 to fałsz)
        i++;    // na koniec p będzie wskazywał na znak tuż za \0
    return i;
}
size_t my_strlen4(const char *p)
{
    const char *q = p;    // pamiętamy początek łańcucha
    while(*p)             // dopóki p nie wskazuje na \0 (bo \0 to fa�sz)
        p++;              // p będzie ustawione na znak \0

    return p - q;         // rónica między początkiem a końcem tablicy - długość
}
