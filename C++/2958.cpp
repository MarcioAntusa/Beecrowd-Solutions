#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int a, b, c;
    std::string d;
    std::vector<std::pair<std::string, int>> v;
    
    std::cin >> a >> b;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            std::cin >> c >> d;
            v.push_back(std::make_pair(d, c));
        }
    }

    std::sort(v.begin(), v.end());

    for (int i = v.size() - 1; i >= 0; i--)
    {
        std::cout << v[i].second << v[i].first << "\n";
    }
}
