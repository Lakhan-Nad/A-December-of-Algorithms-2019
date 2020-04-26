#include<iostream>
#include<string>

using namespace std;

int main(){
    string num;
    cin >> num;
    if(num.length() != 16){ // Valid length for Credit or Debit Card
        cout << num << " fails the test";
    }
    int sum = 0;
    int digit;
    for(int i = 0; i < num.length(); i++){
        digit = s[i]-'0';
        if(i%2==0){
            if(i <= 4) sum += 2*digit;
            else sum += 2*digit - 9;
        }else{
            sum += digit;
        }
    }
    if(sum%10==0){
        cout << num << " passes the test";
    }else{
        cout << num << " fails the test";
    }
}