#include <iostream>
#include <algorithm>

using namespace std;

int h_index(int n, int arr[]){
    sort(arr, arr+n);
    for(int i = n-1; i >= 0; i++){
        if(arr[i] <= n-i)
            return arr[i];
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << h_index(n, arr);
}