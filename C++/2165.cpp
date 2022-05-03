#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    string nome;

    getline(cin, nome);

    for (i = 0; i < nome.size(); i++);

    if (i <= 140) {
        cout << "TWEET" << endl;
    } else {
        cout << "MUTE" << endl;
    }
}