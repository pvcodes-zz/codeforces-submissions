#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ll;
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

#define MOD 1000000007

void solve() {
    string a, b;
    cin >> a >> b;
    int i = 0;
    int a_size = a.size();
    int b_size = b.size();

    while (a[i] == '0') i++;
    a = a.substr(i, a_size);
    a_size -= i;

    i = 0;
    while (b[i] == '0') i++;
    b = b.substr(i, b_size);
    b_size -= i;

    if (a_size > b_size) {
        cout << ">" << endl;
    } else if (a_size < b_size) {
        cout << "<" << endl;
    } else {
        int i = 0;
        while (a[i] == b[i] && i < a_size) i++;
        if (a[i] > b[i])
            cout << ">" << endl;
        else if (a[i] < b[i])
            cout << "<" << endl;
        else
            cout << "=" << endl;
    }
}

int main() {
    fast;
    // test(t)
    solve();

    return 0;
}

// 8631749422082281871941140403034638286979613893271246118706788645620907151504874585597378422393911017
// 1460175633701201615285047975806206470993708143873675499262156511814213451040881275819636625899967479
