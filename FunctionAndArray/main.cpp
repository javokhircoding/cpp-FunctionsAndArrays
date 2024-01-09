#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << endl;
    }
}

int main(){
    int s;
    cout << "How long you want to create an array"; cin >> s;
    int arr[s];
    for(int i = 0; i < s; i++){
        cout <<i + 1<<". Enter: "; cin >> arr[i];
    }
    cout << "Array elements: " << endl;
    printArray(arr, s);
    return 0;
}