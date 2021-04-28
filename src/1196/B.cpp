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
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    vector<int> r;
    for (auto &o : a) cin >> o;
    int a_sz = a.size();
    int i = 0;
    int cnt = 0;
    while (i < a_sz) {
        if (a[i] & 1) {
            r.push_back(i + 1);
            cnt++;
            i++;
        } else {
            int j = i + 1;
            while (j < a_sz && (a[j] & 1 == 0)) {
                j++;
            }
            if (j < a_sz && a[j] & 1) {
                cnt++;
                r.push_back(j + 1);
            }
            i = j + 1;
        }
        if (cnt == k) {
            cout << "YES" << endl;
            for (auto &a : r) cout << a << " ";
            cout << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main() {
    fast;
    test(t) solve();
    return 0;
}