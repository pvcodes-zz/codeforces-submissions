#include <iostream>
using namespace std;

typedef long long int ll;

int main() {
    ll n;
    cin >> n;
    ll abs_sum = 0;
    for (ll i = 0; i < n; i++) {
        ll tmp;
        cin >> tmp;
        abs_sum += tmp;
    }
    abs_sum = (abs_sum < 0) ? (-abs_sum) : abs_sum;
    cout << abs_sum << endl;
    return 0;
}