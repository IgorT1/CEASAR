#include <iostream>
#include <string>

using namespace std;

string ceasar(string text, int shift)
{
    string result = "";
    for (int i = 0; i < text.length(); i++)
    {
        if (isalpha(text[i]))
        {
            char c = isupper(text[i]) ? 'A' : 'a';
            result += (char)(((text[i] + shift) - c) % 26 + c);
        }
        else
        {
            result += text[i];
        }
    }
    return result;
}

int main()
{
    string message = "Olssv dvysk. P ht h zwhilthu. Tllapun dpss il ha aol tvyupun.";
    int shift = 7;
    string encrypted_message = ceasar(message, shift);
    cout << "Зашифроване повідомлення: " << encrypted_message << endl;
    string decrypted_message = ceasar(encrypted_message, -shift);
    cout << "Розшифроване повідомлення: " << decrypted_message << endl;
    return 0;
}
