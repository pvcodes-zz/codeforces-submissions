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
    unordered_map<ll, int> m;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        if (m.find(tmp) == m.end()) m[tmp] = i;
    }
    int key;
    cin >> key;
    if (m.find(key) != m.end())
        cout << m[key] << endl;
    else {
        cout << "-1" << endl;
    }
}

int main() {
    fast;
    // test(t)
    solve();
    return 0;
}
