#include <iostream>
#include <cmath> 
using namespace std;

int countPairs(int arr[], int n, int k) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (abs(arr[i] - arr[j]) == k) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 5, 3, 4, 2};
    int n = 5;
    int k = 2;

    int result = countPairs(arr, n, k);
    cout << "Count = " << result << endl;

    return 0;
}
