#include <iostream>
#include <cmath>
using namespace std;

long long calculate_series_sum(int N, int A) {
    long long sum = 0;
    for (int i = 1; i <= N; ++i) {
        sum += i * pow(A, i);
    }
    return sum;
}

int main() {
    // Sample Input
    int inputs[][2] = {{3, 3}, {4, 4}};
    int num_inputs = 2;

    for (int i = 0; i < num_inputs; ++i) {
        int N = inputs[i][0];
        int A = inputs[i][1];
        cout << calculate_series_sum(N, A) << endl;
    }

    return 0;
}

