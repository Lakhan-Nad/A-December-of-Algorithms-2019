#include<iostream>

using namespace std;

/* Logic ~~
If we represent a nth sevenish number in form of base 7
then we shall get a binary number with each digit either 0 or 1
The decimal value of this sevenish number will be equal to the value of n
So using a reverse process we can convert a n to its equivalent sevenish number.

This method is applicable to all the bases not only 7 :)
*/

int sevenish(int n){
    int prod = 1;
    int result = 0;
    while(n != 0){
        if(n&1) result += prod;
        prod*=7;
        n/=2;
    }
    return result;
}

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int result =  sevenish(n);
    cout << "The " << n << " sevenish number is: " << result << endl;
}
