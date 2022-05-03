#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

int main()
{
    std::string a;
    int aux, cont;
    bool t = false;
    std::list<int> list;
    std::vector<std::pair<int, int>> v;
    std::vector<std::pair<int, int>> v1;

    while (std::cin >> a)
    {
        if (t)
        {
            std::cout << "\n";
        }

        for (int i = 0; a[i] != '\0'; i++)
        {
            list.push_front(int(a[i]));
        }

        list.sort();
        cont = 0;
        aux = list.back();

        for (int i = 0; i < a.size(); i++)
        {
            if (list.back() == aux)
            {
                cont++;
                list.pop_back();
            }
            else
            {
                v.push_back(std::make_pair(cont, aux));

                aux = list.back();
                list.pop_back();
                cont = 1;
            }
            if (i == a.size() - 1)
            {
                v.push_back(std::make_pair(cont, aux));
            }
        }

        sort(v.begin(), v.end());

        int i = 0;

        while (i < v.size())
        {
            aux = v[i].first;

            while (aux == v[i].first && i < v.size())
            {
                v1.push_back(std::make_pair(v[i].first, v[i].second));
                i++;
            }

            sort(v1.begin(), v1.end());

            for (int j = v1.size() - 1; j >= 0; j--)
            {
                std::cout << v1[j].second << " " << v1[j].first << "\n";
            }
            v1.clear();
        }

        v.clear();
        t = true;
    }
}
