#include <iostream>
using namespace std;

int main() {
    int n = 7;
    int center = n / 2;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            
            int value = max(abs(i - center), abs(j - center)) + 1;
            cout << value;
        }
        cout << endl;
    }

    return 0;
}