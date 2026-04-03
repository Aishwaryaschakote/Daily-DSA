#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1,2,3};
    int n = arr.size();

    // start index
    for (int i = 0; i < n; i++) {

        // end index
        for (int j = i; j < n; j++) {

            // print subarray from i to j
            for (int k = i; k <= j; k++) {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}