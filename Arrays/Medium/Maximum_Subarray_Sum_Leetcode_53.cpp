#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,351,35,13,5};
    int n = sizeof(arr)/sizeof(int);

    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = i;j < n;j++){
            cout << arr[j] << " ";
        }
        cout << "\n";
    };
    

    return 0;
}