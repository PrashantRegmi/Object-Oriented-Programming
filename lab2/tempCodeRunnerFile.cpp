#include <iostream>
using namespace std;

void search(int a, int arr[], int b)
{
    for (int i = 0; i < b; i++){
        if (arr[i] == a){
            cout << "The element is at position " << i;
        }
        else{
            cout << "The element is absent \n";
        }
    }
}

int main()
{
    int n, find;
    cout << "Enter the number of elements in array :" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the data present in array :" << endl;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Enter the element to find :" << endl;
    cin >> find;
    search(find, arr, n);

    return 0;
}