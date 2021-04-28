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

// this function will work just fine but for the sake of problem, i think they wanted us to do it
// with using array of char
int sdig(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void solve() {
    int n;
    cin >> n;
    // cout << sdig(n) << endl;
    string s;
    cin >> s;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += s[i] - '0';
    }
    cout << sum << endl;
}

int main() {
    fast;
    // test(t)
    solve();
    return 0;
}
