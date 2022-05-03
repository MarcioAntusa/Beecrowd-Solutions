#include <iostream>

int mdc(int a, int b) {
    return (b == 0 ? a : mdc(b, (a % b)));
}

int main() {
    int n, a, b, aux;

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> a >> b;
        std::cout << mdc(a, b) << "\n";
    }
}
