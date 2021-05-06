#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

void solve() {
    ll n;
    cin >> n;
    ll n1 = n;
    vector<pair<int, int> > a;
    while (n--) {
        ll x;
        cin >> x;
        for (int i = 0; i < x; i++) {
            ll x1;
            cin >> x1;
            ll boolean = 0;
            for (int j = 0; j < a.size(); j++) {
                if (a[j].second == x1) {
                    boolean = 1;
                    a[j].first++;
                    break;
                }
            }
            if (boolean == 0) {
                a.push_back({1, x1});
            }
        }
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i].first >= n1) {
            cout << a[i].second << " ";
        }
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}
