//BEATA SAGAN

#include <iostream>
using namespace std;

int main() {
    int liczbaRozgrywek, i = 0;
    char gracz1 = 0;
    char gracz2 = 0;

    int wygrane_a = 0; int przegrane_a = 0; int remisy_a = 0;
    int wygrane_b = 0; int przegrane_b = 0; int remisy_b = 0;
    int wygrane_c = 0; int przegrane_c = 0; int remisy_c = 0;
    int wygrane_d = 0; int przegrane_d = 0; int remisy_d = 0;
    int wygrane_e = 0; int przegrane_e = 0; int remisy_e = 0;

    int zagranea = 0; int zagraneb = 0; int zagranec = 0; int zagraned = 0; int zagranee = 0;

    float wygrane_g1, wygrane_g2, przegrane_g1, przegrane_g2, remisy_g1, remisy_g2 = 0;


    //wprowadzanie danych wej�ciowych
    cout << "Liczba rozgrywek: ";
    cin >> liczbaRozgrywek;

    int kostka1g1, kostka2g1, kostka3g1, kostka4g1, kostka1g2, kostka2g2, kostka3g2, kostka4g2;

    while (i < liczbaRozgrywek){
        int _break = 0;
        int pary_max_1, pary_max_2;
        int wygrana_g1, wygrana_g2, remis = 0;
        cout << "komplet danych rozgrywki: ";
        cin >> gracz1 >> kostka1g1 >> kostka2g1 >> kostka3g1 >> kostka4g1 >> gracz2 >> kostka1g2 >> kostka2g2 >> kostka3g2 >> kostka4g2;

        int czworki = 0; int trojki = 0; int dwojki = 0; int pary = 0; int brak = 0;

        // cztery jednakowe wyniki
        if (kostka1g1 == kostka2g1 && kostka2g1 == kostka3g1 && kostka3g1 == kostka4g1) {
            wygrana_g1 = 5;
            czworki++;
        }
        //brak powtorzen
        else if (kostka1g1 != kostka2g1 && kostka1g1 != kostka3g1 && kostka1g1 != kostka4g1 && kostka2g1 != kostka3g1 && kostka2g1 != kostka4g1 && kostka3g1 != kostka4g1) {
            wygrana_g1 = 4;
            brak++;
        }
            //dwie rozne pary powtorzen
        else if ((kostka1g1 == kostka2g1 && kostka3g1 == kostka4g1) || (kostka1g1 == kostka3g1 && kostka2g1 == kostka4g1) || (kostka1g1 == kostka4g1 && kostka2g1 == kostka3g1)) {
            wygrana_g1 = 3;
            if (kostka1g1 >= kostka2g1 && kostka1g1 >= kostka3g1) {
                pary_max_1 = kostka1g1;
            }
            else if (kostka2g1 >= kostka3g1) {
                pary_max_1 = kostka2g1;
            }
            else {
                pary_max_1 = kostka3g1;
            }
            pary++;

        }
            //trzy jednakowe wyniki
        else if ((kostka1g1 == kostka2g1 && kostka2g1 == kostka3g1) || (kostka1g1 == kostka3g1 && kostka1g1 == kostka4g1) || (kostka2g1 == kostka3g1 && kostka2g1 == kostka4g1) || (kostka1g1 == kostka2g1 && kostka2g1 == kostka4g1)) {
            wygrana_g1 = 2;
            trojki++;
        }
            //dwa jednakowe wyniki
        else if ((kostka1g1 == kostka2g1) || (kostka1g1 == kostka3g1) || (kostka1g1 == kostka4g1) || (kostka2g1 == kostka3g1) || (kostka2g1 == kostka4g1) || (kostka3g1 == kostka4g1)) {
            wygrana_g1 = 1;
            dwojki++;
        }



        //zliczanie punktow - wygrane gr2
        //cztery jednakowe wyniki
        if (kostka1g2 == kostka2g2 && kostka2g2 == kostka3g2 && kostka3g2 == kostka4g2) {
            wygrana_g2 = 5;
            czworki++;
        }
            //brak powtorzen
        else if (kostka1g2 != kostka2g2 && kostka1g2 != kostka3g2 && kostka1g2 != kostka4g2 && kostka2g2 != kostka3g2 && kostka2g2 != kostka4g2 && kostka3g2 != kostka4g2) {
            wygrana_g2 = 4;
            brak++;
        }
            //dwie rozne pary powtorzen
        else if ((kostka1g2 == kostka2g2 && kostka3g2 == kostka4g2) || (kostka1g2 == kostka3g2 && kostka2g2 == kostka4g2) || (kostka1g2 == kostka4g2 && kostka2g2 == kostka3g2)) {
            wygrana_g2 = 3;
            if (kostka1g2 >= kostka2g2 && kostka1g2 >= kostka3g2) {
                pary_max_2 = kostka1g2;
            }
            else if (kostka2g2 >= kostka3g2) {
                pary_max_2 = kostka2g2;
            }
            else {
                pary_max_2 = kostka3g2;
            }
            pary++;
        }
            //trzy jednakowe wyniki
        else if ((kostka1g2 == kostka2g2 && kostka2g2 == kostka3g2) || (kostka1g2 == kostka3g2 && kostka1g2 == kostka4g2) || (kostka2g2 == kostka3g2 && kostka2g2 == kostka4g2) || (kostka1g2 == kostka2g2 && kostka2g2 == kostka4g2)) {
            wygrana_g2 = 2;
            trojki++;
        }
            //dwa jednakowe wyniki
        else if ((kostka1g2 == kostka2g2) || (kostka1g2 == kostka3g2) || (kostka1g2 == kostka4g2) || (kostka2g2 == kostka3g2) || (kostka2g2 == kostka4g2) || (kostka3g2 == kostka4g2)) {
            wygrana_g2 = 1;
            dwojki++;
        }

        int wynik1 = kostka1g1 + kostka2g1 + kostka3g1 + kostka4g1;
        int wynik2 = kostka1g2 + kostka2g2 + kostka3g2 + kostka4g2;


        // #################################### //
        if (czworki > 1) {
            if (wynik1 > wynik2){
                wygrana_g1 = 1;
                wygrana_g2 = 0;
            }
            else if (wynik1 == wynik2){
                remis = 1;
            }
            else {
                wygrana_g2 = 1;
                wygrana_g1 = 0;
            }
        }
        else if (brak > 1) {
            if (wynik1 > wynik2){
                wygrana_g1 = 1;
                wygrana_g2 = 0;
            }
            else if (wynik1 == wynik2){
                remis = 1;
            }
            else {
                wygrana_g2 = 1;
                wygrana_g1 = 0;
            }
        }
        else if (trojki > 1)
        {
            if (wynik1 > wynik2){
                wygrana_g1 = 1;
                wygrana_g2 = 0;
            }
            else if (wynik1 == wynik2){
                remis = 1;
            }
            else {
                wygrana_g2 = 1;
                wygrana_g1 = 0;
            }
        }
        else if (pary > 1){
            if (pary_max_1 > pary_max_2) {
                wygrana_g1 = 1;
            }
            else if (pary_max_1 == pary_max_2) {
                remis = 1;
            }
            else {
                wygrana_g2 = 1;
            }
        }
        else if (dwojki > 1){
            if (wynik1 > wynik2){
                wygrana_g1 = 1;
                wygrana_g2 = 0;
            }
            else if (wynik1 == wynik2){
                remis = 1;
            }
            else {
                wygrana_g2 = 1;
                wygrana_g1 = 0;
            }
        }

        if (czworki == 0 && trojki == 0 && dwojki == 0 && pary == 0 && brak == 0){
            if (wynik1 > wynik2){
                wygrana_g1 = 1;
                wygrana_g2 = 0;
            }
            else if (wynik1 == wynik2){
                remis = 1;
            }
            else {
                wygrana_g2 = 1;
                wygrana_g1 = 0;
            }
        }

        if (gracz1 == 'a'){
            zagranea++;
            if (remis){
                remisy_a++;
            }
            else if(wygrana_g1 > wygrana_g2){
                wygrane_a++;
            }
            else{
                przegrane_a++;
            }
        }
        else if (gracz2 == 'a'){
            zagranea++;
            if (remis){
                remisy_a++;
            }
            else if(wygrana_g1 < wygrana_g2){
                wygrane_a++;
            }
            else{
                przegrane_a++;
            }
        }

        if (gracz1 == 'b'){
            zagraneb++;
            if (remis){
                remisy_b++;
            }
            else if(wygrana_g1 > wygrana_g2){
                wygrane_b++;
            }
            else{
                przegrane_b++;
            }
        }
        else if (gracz2 == 'b'){
            zagraneb++;
            if (remis){
                remisy_b++;
            }
            else if(wygrana_g1 < wygrana_g2){
                wygrane_b++;
            }
            else{
                przegrane_b++;
            }
        }

        if (gracz1 == 'c'){
            zagranec++;
            if (remis){
                remisy_c++;
            }
            else if(wygrana_g1 > wygrana_g2){
                wygrane_c++;
            }
            else{
                przegrane_c++;
            }
        }
        else if (gracz2 == 'c'){
            zagranec++;
            if (remis){
                remisy_c++;
            }
            else if(wygrana_g1 < wygrana_g2){
                wygrane_c++;
            }
            else{
                przegrane_c++;
            }
        }

        if (gracz1 == 'd'){
            zagraned++;
            if (remis){
                remisy_d++;
            }
            else if(wygrana_g1 > wygrana_g2){
                wygrane_d++;
            }
            else{
                przegrane_d++;
            }
        }
        else if (gracz2 == 'd'){
            zagraned++;
            if (remis){
                remisy_d++;
            }
            else if(wygrana_g1 < wygrana_g2){
                wygrane_d++;
            }
            else{
                przegrane_d++;
            }
        }

        if (gracz1 == 'e'){
            zagranee++;
            if (remis){
                remisy_e++;
            }
            else if(wygrana_g1 > wygrana_g2){
                wygrane_e++;
            }
            else{
                przegrane_e++;
            }
        }
        else if (gracz2 == 'e'){
            zagranee++;
            if (remis){
                remisy_e++;
            }
            else if(wygrana_g1 < wygrana_g2){
                wygrane_e++;
            }
            else{
                przegrane_e++;
            }
        }



        ++i;
    }

    //dane wyj�ciowe
    if (zagranea){
        cout << "gracz a: " << endl;
        if (wygrane_a > 0) {
            cout << "\twygrane: " << ((float) wygrane_a / (float) zagranea)*100 << "%"<< endl;
        }
        if (remisy_a > 0) {
            cout << "\tremisy: " << ((float) remisy_a / (float) zagranea)*100 << "%"<< endl;
        }
        if (przegrane_a > 0) {
            cout << "\tprzegrane: " << ((float) przegrane_a / (float) zagranea)*100 << "%"<< endl;
        }
    }

    if (zagraneb){
        cout << "gracz b: " << endl;
        if (wygrane_b > 0) {
            cout << "\twygrane: " << ((float) wygrane_b / (float) zagraneb)*100 << "%"<< endl;
        }
        if (remisy_b > 0) {
            cout << "\tremisy: " << ((float) remisy_b / (float) zagraneb)*100 << "%"<< endl;
        }
        if (przegrane_b > 0) {
            cout << "\tprzegrane: " << ((float) przegrane_b / (float) zagraneb)*100 << "%"<< endl;
        }
    }

    if (zagranec){
        cout << "gracz c: " << endl;
        if (wygrane_c > 0) {
            cout << "\twygrane: " << ((float) wygrane_c / (float) zagranec)*100 << "%"<< endl;
        }
        if (remisy_c > 0) {
            cout << "\tremisy: " << ((float) remisy_c / (float) zagranec)*100 << "%"<< endl;
        }
        if (przegrane_c > 0) {
            cout << "\tprzegrane: " << ((float) przegrane_c / (float) zagranec)*100 << "%"<< endl;
        }
    }

    if (zagraned){
        cout << "gracz d: " << endl;
        if (wygrane_d > 0) {
            cout << "\twygrane: " << ((float) wygrane_d / (float) zagraned)*100 << "%"<< endl;
        }
        if (remisy_d > 0) {
            cout << "\tremisy: " << ((float) remisy_d / (float) zagraned)*100 << "%"<< endl;
        }
        if (przegrane_d > 0) {
            cout << "\tprzegrane: " << ((float) przegrane_d / (float) zagraned)*100 << "%"<< endl;
        }
    }

    if (zagranee){
        cout << "gracz e: " << endl;
        if (wygrane_d > 0) {
            cout << "\twygrane: " << ((float) wygrane_e / (float) zagranee)*100 << "%"<< endl;
        }
        if (remisy_e > 0) {
            cout << "\tremisy: " << ((float) remisy_e / (float) zagranee)*100 << "%"<< endl;
        }
        if (przegrane_e > 0) {
            cout << "\tprzegrane: " << ((float) przegrane_e / (float) zagranee)*100 << "%"<< endl;
        }
    }

    return 0;
}