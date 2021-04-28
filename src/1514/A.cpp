#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;

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
    vector<ll> A(n);
    ll product = 1;
    bool is_perfect = true;
    for (auto &i : A) cin >> i;

    for (int i = 0; i < n; i++) {
        ll product = A[i];
        for (int j = 0; j < n; ++j) {
            if (i != j) {
                product *= A[j];
                ld sq_p = sqrt(product);
                if (sq_p - ll(sq_p) > 0) {
                    is_perfect = false;
                    break;
                }
            }
        }
    }

    cout << ((is_perfect) ? "NO" : "YES") << endl;
}

int main() {
    fast;
    test(t) solve();
    return 0;
}