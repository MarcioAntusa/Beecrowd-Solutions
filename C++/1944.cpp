#include <iostream>
#include <stack>

std::stack<std::string> letras;

void preencherPilha()
{
    letras.push("F");
    letras.push("A");
    letras.push("C");
    letras.push("E");
}

int main()
{
    int n = 0, cont = 0, res = 0;
    std::string l[4];
    std::stack<std::string> aux;

    std::cin >> n;

    preencherPilha();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cin >> l[j];

            if (l[j] == letras.top() && cont == j)
            {
                aux.push(letras.top());
                letras.pop();
                cont++;
            }
        }

        if (cont == 4)
        {
            while (!aux.empty())
            {
                aux.pop();
            }

            res++;

            if (letras.empty())
            {
                preencherPilha();
            }
        }

        else
        {
            while (!aux.empty())
            {
                letras.push(aux.top());
                aux.pop();
            }

            for (int j = 0; j < 4; j++)
            {
                letras.push(l[j]);
            }
        }

        cont = 0;
    }
    
    std::cout << res << "\n";
}
