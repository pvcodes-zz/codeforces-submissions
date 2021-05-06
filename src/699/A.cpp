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
    //
    int n;
    cin >> n;
    vector<pair<char, ll>> a(n);

    for (auto &i : a) cin >> i.first;
    for (auto &i : a) cin >> i.second;

    ll min = 1e+10;
    for (int i = 1; i < n; i++) {
        if (a[i - 1].first == 'R' && a[i].first == 'L') {
            // cout << i << endl;
            ll diff = a[i].second - ((a[i - 1].second + a[i].second) / 2);
            if (diff < min) {
                min = diff;
            }
        }
    }
    if (min == 1e+10) {
        cout << "-1" << endl;
    } else
        cout << min << endl;
}

int main() {
    fast;
    // test(t)
    solve();
    return 0;
}
