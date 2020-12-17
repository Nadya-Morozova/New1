#include <iostream>

using namespace std;

void elements(int arr[2][3]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {

    int arr[2][3] = {
            {1, 2, 3},
            {4, 5, 6}
    };

    elements(arr);
    cout « "Hello, world";
}



