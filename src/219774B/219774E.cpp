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
    int min = pow(10, 6);
    int index = 0;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        if (min > t) {
            min = t;
            index = i + 1;
        }
    }
    cout << min << " " << index << endl;
}

int main() {
    fast;
    // test(t)
    solve();
    return 0;
}
