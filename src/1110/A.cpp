#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define test(t) \
    ll t;       \
    cin >> t;   \
    while (t--)
#define f(i, a, b) for (ll(i) = (a); (i) < (b); ++(i))
#define endl "\n"
#define deb(x) cout << #x << ": " << x << endl;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void solve() {
    int b, k;
    cin >> b >> k;
    vector<ll> a(k);
    for (auto &i : a) cin >> i;

    // Logic
    int ans = 0;
    for (int i = 0, j = k - 1; i < k; i++, j--) {
        int p = pow(b, j);
        p %= 100000000;
        int tmp = ((a[i] % 100000000) * p) % 100000000;
        ans += tmp;
    }

    cout << ((ans & 1) ? "odd" : "even") << endl;
}
int main() {
    fast;
    // test(t)
    solve();
    return 0;
}