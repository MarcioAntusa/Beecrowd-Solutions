#include <iostream>
#include <queue>

using namespace std;

int matriz[8][8];
const int x[8] = {1, 1, 2, 2, -1, -1, -2, -2};
const int y[8] = {-2, 2, -1, 1, -2, 2, -1, 1};

void inicializar()
{
    for (int i = 0; i < 8; ++i)
    {
        for (int j = 0; j < 8; ++j)
        {
            matriz[i][j] = 0;
        }
    }
}

int bfs(int x1, int y1, int x2, int y2)
{
    if (x1 == x2 && y1 == y2)
    {
        return 0;
    }

    inicializar();

    queue<pair<int, int>> fila;
    fila.push(make_pair(x1, y1));

    int v1 = 0, v2 = 0;
    bool test = true;

    while (!fila.empty())
    {
        v1 = fila.front().first;
        v2 = fila.front().second;

        fila.pop();

        for (int i = 0; i < 8; ++i)
        {
            if (!matriz[v1 + x[i]][v2 + y[i]] && (v1 + x[i]) > -1 && (v1 + x[i]) < 8 && (v2 + y[i]) > -1 && (v2 + y[i]) < 8 && !matriz[x2][y2])
            {
                fila.push(make_pair(v1 + x[i], v2 + y[i]));
                matriz[v1 + x[i]][v2 + y[i]] = matriz[v1][v2] + 1;
            }
        }
        if (test)
        {
            test = false;
            matriz[x1][y1] = -1;
        }
    }

    return matriz[x2][y2];
}

int main()
{
    char posI[3], posF[3];

    while (cin >> posI >> posF)
    {
        // Caracter - '0' para converter char para int
        cout << "To get from " << posI << " to " << posF << " takes " << bfs(int(posI[0] - 97), (int(posI[1]) - '0') - 1, int(posF[0] - 97), (int(posF[1]) - '0') - 1) << " knight moves.\n";
    }
}