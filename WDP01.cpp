#include <iostream>

int main() {
    // Input data
    int liczbaRozgrywek;
    std::cin >> liczbaRozgrywek;

    // Variables to store statistics for each player
    float wygrane['e' - 'a' + 1] = {0};
    float remisy['e' - 'a' + 1] = {0};
    float przegrane['e' - 'a' + 1] = {0};

    // Process each game
    int i = 0;
    while (i < liczbaRozgrywek) {
        char gracz1, gracz2;
        int kostki1[4], kostki2[4];

        // Input game data
        std::cin >> gracz1 >> kostki1[0] >> kostki1[1] >> kostki1[2] >> kostki1[3]
                 >> gracz2 >> kostki2[0] >> kostki2[1] >> kostki2[2] >> kostki2[3];

        // Calculate points for each player
        int suma1 = kostki1[0] + kostki1[1] + kostki1[2] + kostki1[3];
        int suma2 = kostki2[0] + kostki2[1] + kostki2[2] + kostki2[3];

        // Determine the winner or a tie
        if (suma1 > suma2)
            wygrane[gracz1 - 'a']++;
        else if (suma1 == suma2)
            remisy[gracz1 - 'a']++;
        else
            przegrane[gracz1 - 'a']++;

        if (suma2 > suma1)
            wygrane[gracz2 - 'a']++;
        else if (suma1 != suma2)
            przegrane[gracz2 - 'a']++;

        ++i;
    }

    // Output statistics for each player
    int gracz = 'a';
    while (gracz <= 'e') {
        int index = gracz - 'a';
        std::cout << "gracz " << static_cast<char>(gracz) << ":" << std::endl;
        if (wygrane[index] > 0)
            std::cout << "    wygrane: " << (wygrane[index] * 100 / liczbaRozgrywek) << "%" << std::endl;
        if (remisy[index] > 0)
            std::cout << "    remisy: " << (remisy[index] * 100 / liczbaRozgrywek) << "%" << std::endl;
        if (przegrane[index] > 0)
            std::cout << "    przegrane: " << (przegrane[index] * 100 / liczbaRozgrywek) << "%" << std::endl;

        ++gracz;
    }

    return 0;
}
