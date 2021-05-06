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
    ll n;
    cin >> n;
    ll sum{0};
    f(i, 0, n) {
        ll t;
        cin >> t;
        if (t != 2) sum++;
    }
    cout << sum << endl;
}

int main() {
    fast;
    test(t) solve();
    return 0;
}
