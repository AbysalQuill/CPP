#include <iostream>
using namespace std;

int main() {
    int a, n, m, x;
    cin >> a >> n >> m >> x;

    // up[i] represents people boarding at station i
    // We express up[i] = coef_a[i] * a + coef_b[i] * b
    // where b is the unknown up[2]
    long long coef_a_up[25], coef_b_up[25];

    // Initialize boarding coefficients
    coef_a_up[1] = 1; coef_b_up[1] = 0;  // up[1] = a
    coef_a_up[2] = 0; coef_b_up[2] = 1;  // up[2] = b

    // For i >= 3: up[i] = up[i-1] + up[i-2]
    for (int i = 3; i <= n; i++) {
        coef_a_up[i] = coef_a_up[i-1] + coef_a_up[i-2];
        coef_b_up[i] = coef_b_up[i-1] + coef_b_up[i-2];
    }

    // on[i] represents people on train after leaving station i
    // on[i] = coef_a_on[i] * a + coef_b_on[i] * b
    long long coef_a_on[25], coef_b_on[25];

    coef_a_on[1] = 1; coef_b_on[1] = 0;  // on[1] = a
    coef_a_on[2] = 1; coef_b_on[2] = 0;  // on[2] = a (up[2] = down[2])

    // For i >= 3: on[i] = on[i-1] + up[i] - down[i]
    // where down[i] = up[i-1]
    for (int i = 3; i < n; i++) {
        coef_a_on[i] = coef_a_on[i-1] + coef_a_up[i] - coef_a_up[i-1];
        coef_b_on[i] = coef_b_on[i-1] + coef_b_up[i] - coef_b_up[i-1];
    }

    // At station n, everyone gets off: on[n-1] = m
    // coef_a_on[n-1] * a + coef_b_on[n-1] * b = m
    // Solve for b
    long long b = (m - coef_a_on[n-1] * a) / coef_b_on[n-1];

    // Calculate on[x]
    long long result = coef_a_on[x] * a + coef_b_on[x] * b;

    cout << result << endl;

    return 0;
}
