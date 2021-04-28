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

void selectionSort(vector<int>& A) {
    int n = A.size();
    for (int i = 0; i < n - 1; ++i) {
        int j, k;
        j = k = i;
        while (j < n) {
            if (A[j] < A[k]) {
                k = j;
            }
            j++;
        }
        swap(A[k], A[i]);
    }
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto& i : a) cin >> i;
    selectionSort(a);
    for (auto& i : a) cout << i << " ";
}

int main() {
    fast;
    // test(t)
    solve();
    return 0;
}
