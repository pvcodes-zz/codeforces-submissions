#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;

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
    ull a, b;
    cin >> a >> b;
    ull mini = ULLONG_MAX;
    ull ans1, ans2;
    for (int i = 1; i <= b; i++) {
        ull temp;
        cin >> temp;
        if (a >= temp && (a % temp < mini)) {
            mini = a % temp;
            ans1 = i;
            ans2 = a / temp;
        }
    }
    if (mini == ULLONG_MAX)
        cout << 1 << " " << 0 << endl;
    else
        cout << ans1 << " " << ans2;
}

int main() {
    fast;
    // test(t)
    solve();
    return 0;
}