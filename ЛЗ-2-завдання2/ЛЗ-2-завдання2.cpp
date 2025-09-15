// ЛЗ-2-завдання2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string capital;
    cout << "Введіть назву столиці: ";
    getline(cin, capital);

    switch (tolower(capital[0])) {
    case 'к':
        if (capital == "Київ") cout << "Україна" << endl;
        else if (capital == "Кишинів") cout << "Молдова" << endl;
        else cout << "Невідома столиця" << endl;
        break;
    case 'л':
        if (capital == "Лондон") cout << "Велика Британія" << endl;
        else if (capital == "Лісабон") cout << "Португалія" << endl;
        else cout << "Невідома столиця" << endl;
        break;
    case 'п':
        if (capital == "Париж") cout << "Франція" << endl;
        else cout << "Невідома столиця" << endl;
        break;
    case 'б':
        if (capital == "Берлін") cout << "Німеччина" << endl;
        else if (capital == "Брюссель") cout << "Бельгія" << endl;
        else cout << "Невідома столиця" << endl;
        break;
    default:
        cout << "Невідома столиця" << endl;
    }

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
