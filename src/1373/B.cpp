#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

#define test(t) \
    int t;      \
    cin >> t;   \
    while (t--)
#define f(i, a, b) for (int(i) = (a); (i) < (b); ++(i))
#define endl "\n"
#define deb(x) cout << #x << ": " << x << endl;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void solve() {
    string A;
    cin >> A;
    int i = -1;
    int cnt = 0;
    while (A[++i] != '\0') {
        int j = 0;
        while (A[j] == 'X') j++;
        if (A[j] == '0' || A[j] == '1') {
            int k = j + 1;
            while (A[k] == 'X') k++;
            if (A[j] != A[k]) {
                A[j] = A[k] = 'X';
                cnt++;
            }
        }
    }
    if (cnt & 1 == 1)
        cout << "DA" << endl;
    else
        cout << "NET" << endl;
}

int main() {
    fast;
    test(t) solve();
    return 0;
}

// 000000001
// 11111111111