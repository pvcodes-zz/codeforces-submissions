#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

#define test(t) int t; cin >> t; while (t--)
#define f(i, a, b) for (int(i) = (a); (i) < (b); ++(i))
#define endl "\n"
#define deb(x) cout << #x << ": " << x << endl;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
  // INPUT
  ll n, q;
  cin >> n >> q;
  ll deck[n];
  ll queries[q];
  ll q_index = 0;
  for (ll i = 0; i < n; ++i) {
    cin >> deck[i];
  }

  // Solution
  for (int i = 0; i < q; ++i) {
    ll query;
    cin >> query;
    for (ll j = 0; j < n; j++) {
      if (deck[j] == query) {
        queries[q_index++] = j + 1;
        while (j > 0) {
          deck[j] = deck[j - 1];
          j--;
        }
        deck[0] = query;
        break;
      }
    }
  }

  //OUTPUT
  for (auto i : queries) cout << i << " ";

}

int main() {
  fast;
  solve();
  return 0;
}