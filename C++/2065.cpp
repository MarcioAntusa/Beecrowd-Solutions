#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n, m, c, id, l, ans = 0;

    cin >> n >> m;
    int v[n];

    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    priority_queue<pair<int, int>> fila;

    for (int i = 1; i <= n; i++) {
        fila.push(make_pair(0, -i));
    }

    while (m--) {
        cin >> c;
        id = -fila.top().second;
        l = -fila.top().first;
        fila.pop();
        fila.push(make_pair(-(l + v[id] * c), -id));
        ans = max(ans, l + v[id] * c);
    }

    cout << ans << "\n";
}