#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define max 50

void linia(int);

char funkcja_przykladowa(const char *s){
    return *s;
}

char *my_strcpy_1(char *p, const char *q)
{
    char *s = p;  // to return the pointer later
    while (*q != '\0')
    {
        if(*q == ' '){  // use single quotes for character literals
            *p = '_';   // replace space with underscore
        }
        else {
            *p = *q; // copy
        }
        p++;
        q++;
    }
    *p = '\0';  // terminate the string
    return s;
}

size_t my_strlen1(const char *p)
{
    size_t i;
    for(i = 0; *p != '\0'; p++)
        i++;
    return i;
}

void polaczenie(char *s, const char *s1, const char *s2){
    while(*s1){
        *s = *s1;
        s1++;
        s++;
    }
    while(*s2){
        *s = *s2;
        s2++;
        s++;
    }
    *s = '\0';  // terminate the concatenated string
}

struct ulamek{
    int licz;
    unsigned int mian;
};

float wartosc_ulamka(struct ulamek u){
    return (float)u.licz / u.mian;
}

int wiekszy(struct ulamek *u1, struct ulamek *u2){
    float wartosc_u1 = wartosc_ulamka(*u1);
    float wartosc_u2 = wartosc_ulamka(*u2);
    if(wartosc_u1 > wartosc_u2) return 1;
    return 0;
}

int main(void){
    char tekst[max+1]="Sztuka dobrego wyboru";
    linia(1);
    puts(tekst);
    printf("%c\n", funkcja_przykladowa(tekst));
    linia(2);

    char *string = "Tekst przykladowy";
    printf("String len: %zu\n", strlen(string));
    printf("tekst len: %zu\n", strlen(tekst));

    linia(3);

    char *s = (char *)malloc(strlen(string) + 1); // allocate memory for the copy
    if (s == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Pierwotny tekst: ");
    puts(string);
    printf("Kopia z podklresleniem: ");
    my_strcpy_1(s, string);
    puts(s);

    free(s); // free allocated memory

    linia(4);
    char *tekst1 = (char *)malloc(strlen(tekst) * 2 + 1); // allocate memory for the concatenated string
    if (tekst1 == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    polaczenie(tekst1, tekst, tekst);
    printf("Połączenie: %s\n", tekst1);
    free(tekst1); // free allocated memory



    linia(5);
    struct ulamek u1 = {3, 4};
    struct ulamek u2 = {1, 2};
    printf("Czy ulamek u1 jest większy od u2? %s\n", wiekszy(&u1, &u2) ? "Tak" : "Nie");

    struct ulamek ulamki[7] = {{5,2},{3,4},{4,7},{3,7},{7,8},{56,2},{63,3}};
    for(int i = 0; i<7; i++){
        printf("%f\n", wartosc_ulamka(ulamki[i]));
    }
    return 0;
}

void linia(int k){
    if (k > 0) printf("\n\n______________ %d ________________\n\n",k);
    else printf("\n\n___________________________________\n\n");
}
