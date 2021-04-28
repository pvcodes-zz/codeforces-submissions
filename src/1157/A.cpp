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
    int n;
    cin >> n;
    int cnt = 0;
    if (n < 10) {
        cout << "9" << endl;
        return;
    }
    do {
        n++;
        cnt++;
        while (n % 10 == 0) n /= 10;
    } while (n != 1);

    cout << cnt + 1 << endl;
}

int main() {
    fast;
    // test(t)
    solve();
    return 0;
}