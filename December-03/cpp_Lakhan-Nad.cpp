#include <iostream>

using namespace std;


/* 
Since question is implementation dependent 
Printing the longest possible sorted input from begenning of array
With length being half property satisfied
*/

int main(){
    int n;
    cin >> n;
    int arr[n];
    int temp;
    int max = 0;
    int ok = 1; 
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(ok && (i == 0 || arr[i-1] <= arr[i])){
            max++;
        }else{
            ok = 0;
        }
    }
    int len = n;
    while(len > max){
        len/=2;
    }
    for(int i = 0; i < len; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}