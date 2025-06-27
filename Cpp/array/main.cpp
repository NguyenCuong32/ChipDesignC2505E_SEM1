#include<iostream>
using namespace std;

int main(){
    int arr[5] ;
    // Nhập 5 số nguyên vào mảng arr
    cout << "Enter 5 integers: \n";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    // In mảng arr
    cout << "Array elements: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
}