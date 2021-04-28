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
    vector<ll> a(n);
    for (auto &i : a) cin >> i;

    bool is_equal = true;
    for (int i = 1; i < n; i++) {
        a[i] = a[i - 1] ^ a[i];
        if (i == n - 2) {
            if (a[i] != a[i + 1]) {
                is_equal = false;
                break;
            }
        }
    }

    cout << (is_equal ? "YES" : "NO") << endl;
}

int main() {
    fast;
    test(t) solve();
    return 0;
}