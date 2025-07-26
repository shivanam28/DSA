#include <iostream>
using namespace std;

int main() {
    int arr1[] = {2,4,6,3};
    int arr2[] = {1,2,3,5};


    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    cout << "Common elements:\n";
    for(int i = 0; i < n1; i++) {
        bool common = true;
        for(int j = 0; j < n2; j++) {
            if( arr1[i] == arr2[j]) {
                common = false;
                break;
            }
        }
        if(!common)
            cout << arr1[i] << " ";
    }

    return 0;
}
