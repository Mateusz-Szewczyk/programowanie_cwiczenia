//
// Created by Mateusz Szymon Szewczyk on 16/03/2024.
//


#include <stdio.h>

// Sortowanie bąbelkowe

void bubble_sort(int tablica[], int n) {

    int zamiana;

    int i; // Deklaracja zmiennej i na początku bloku

    do {
        zamiana = 0;

        for (i = 0; i < n - 1; i++) {

            if (tablica[i] > tablica[i + 1]) {

                int tmp = tablica[i];

                tablica[i] = tablica[i + 1];

                tablica[i + 1] = tmp;

                zamiana = 1;

            }

        }

    } while (zamiana);

}

int main() {

// Tablica do posortowania

    int arr[] = {1000, 33, 123, 10, 1, 12442, 99, 111};

    int n = sizeof(arr) / sizeof(arr[0]);

// Wypisz zawartość przed sortowaniem

    printf("Przed sortowaniem:\n");

    int z; // Deklaracja zmiennej z na początku bloku

    for (z = 0; z < n; z++) {

        printf("%d, ", arr[z]);

    }

// Sortuj bąbelkowo

    bubble_sort(arr, n);

// Wypisz zawartość po sortowaniu

    printf("\n\nPo sortowaniu:\n");

    for (z = 0; z < n; z++) {

        printf("%d, ", arr[z]);

    }

    return 0;

}