#include <iostream>

using namespace std;

int main()
{
    for (int i = 1, j = 60; i < 60; i += 3, j -= 5)
    {
        if (i >= 0 && j >= 0) {
            cout << "I=" << i << " " << "J=" << j << endl;
        }
    }
}