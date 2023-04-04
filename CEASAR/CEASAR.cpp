#include <iostream>
#include <string>

using namespace std;

string caesarDecrypt(string ciphertext, int key) { //метод расшифровка
    string plaintext = "";//строка дял результата
    for (char c : ciphertext) {//цикл по тексту
        if (isalpha(c)) {//проверка на символ или нет
            char shift = isupper(c) ? 'A' : 'a';//проверка на заглавную букву 
            plaintext += (c - shift - key + 26) % 26 + shift;//формула для расшифровка
        }
        else {
            plaintext += c;
        }
    }
    return plaintext;
}

int main() {
    string ciphertext = "Olssv dvysk. P ht h zwhilthu. Tllapun dpss il ha aol tvyupun";
    int key = 7;

    string plaintext = caesarDecrypt(ciphertext, key);
    cout << plaintext << endl;

    return 0;
}
