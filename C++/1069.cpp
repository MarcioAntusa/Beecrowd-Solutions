#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int n = 0, t1 = 0, t2 = 0;
    char a[1001];

    cin >> n;

    for (int i = 0; i < n; ++i) {
        
        cin >> a;

        for (int j = 0; j < strlen(a); j++) {

            if (a[j] == '<') {
                t1++;
            }
            
            else if (a[j] == '>' && t1 > 0) {
                t2++;
                t1--;
            }
        }

        cout << t2 << "\n";

        t1 = 0;
        t2 = 0;
    }
}
