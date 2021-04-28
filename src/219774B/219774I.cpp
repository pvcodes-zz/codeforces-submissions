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
    for (auto &i : a) cin >> i;

    int i = 0, j = 1;
    int min = pow(10, 7);

    while (i < n) {
        while (j < n) {
            int t = a[i] + a[j] + j - i;
            if (min > t) min = t;
            j++;
        }
        i++;
        j = i + 1;
    }
    cout << min << endl;
}

int main() {
    fast;
    test(t) solve();
    return 0;
}
