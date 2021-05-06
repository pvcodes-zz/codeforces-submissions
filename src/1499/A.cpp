#include <iostream>

int main() {
    int t;
    std::cin >> t;
    for (int a = 0; a < t; a++) {
        int n, k1, k2, w, b;
        std::cin >> n >> k1 >> k2 >> w >> b;
        int area = k1 + k2;
        if ((area >= 2 * w) && ((2 * n - area) >= 2 * b)) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}