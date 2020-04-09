#include <iostream>
#include <map>

using namespace std;

int main() {

    int lines = 0;
    string country;
    char woman[75]; // la combinacion de country + woman deberia ser máximo 75 caracteres
    map<string, int> table; // guarda el pais y la cantidad de mujeres que Giovanni amó en ese pais
    cin >> lines;

    if (lines<=2000) { //input maximo 2000

        for (; lines > 0; --lines) {

            cin >> country;

            table[country]++;//cada vez que se dececte un mismo nombre, se suma uno a int

            cin.getline(woman,75);// guardar todos los caracteres despues del pais

        }
        for (auto &i : table) {
            cout << i.first << " " << i.second << endl;
        }

    }
    else
        return 0;
}