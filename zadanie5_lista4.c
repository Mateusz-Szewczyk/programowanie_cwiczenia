#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100

// Funkcja zliczająca nakładające się wystąpienia wzorca w tekście
int count_pattern(const char *line, const char *pattern) {
    int count = 0;
    int pattern_length = (int)strlen(pattern);
    const char *tmp = line;
    while ((tmp = strstr(tmp, pattern)) != NULL) {
        count++;
        tmp += 1;  // Przesuń wskaźnik o jeden znak do przodu, aby zliczyć nakładające się wzorce
    }
    return count;
}

int main() {
    FILE *file;
    FILE *patterns;

    char *filename = "words.txt";
    char *patterns_filename = "paterns.txt";
    if ((file = fopen(filename, "r")) == NULL) {
        printf("Can't open the file or it doesn't exist.\n");
        return 1;
    }

    if ((patterns = fopen(patterns_filename, "r")) == NULL) {
        printf("Can't open the file or it doesn't exist.\n");
        return 1;
    }

    char line[N];
    char patterns_list[10][N];
    int patterns_n = 0;

    // Wczytaj wzorce z pliku
    while (patterns_n < 10 && fscanf(patterns, "%s", patterns_list[patterns_n]) != EOF) {
        patterns_n++;
    }

    int max_occurrences = 0;
    char word_with_max_pattern[N];
    char pattern_with_max_occurrences[N];

    // Przetwarzaj każdy wyraz z pliku words.txt
    while (fscanf(file, "%s", line) != EOF) {
        for (int i = 0; i < patterns_n; i++) {
            int count = count_pattern(line, patterns_list[i]);
            if (count > max_occurrences) {
                max_occurrences = count;
                strcpy(word_with_max_pattern, line);
                strcpy(pattern_with_max_occurrences, patterns_list[i]);
            }
        }
    }

    // Wyświetl wyniki
    if (max_occurrences > 0) {
        printf("Word with max pattern occurrences: %s\n", word_with_max_pattern);
        printf("Pattern: %s\n", pattern_with_max_occurrences);
        printf("Max occurrences: %d\n", max_occurrences);
    } else {
        printf("No patterns found in the provided words.\n");
    }

    fclose(file);
    fclose(patterns);
    return 0;
}
