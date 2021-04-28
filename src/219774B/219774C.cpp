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
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        if (tmp == 0)
            cout << "0 ";
        else
            cout << ((tmp > 0) ? "1" : "2") << " ";
    }
}

int main() {
    fast;
    // test(t)
    solve();
    return 0;
}
