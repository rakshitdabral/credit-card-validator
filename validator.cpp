#include <iostream>
#include <string>
using namespace std;
int main(){
    string number;
    int sum_odd=0;
    cout << "Enter cc number: " << "";
    cin >> number;
//string to array conversion
    int arr[number.size()];
    for(int i=0;i<number.length();i++){
        char ck=(char)(number[i]);
        arr[i] = (int)(ck) - 48;
    }
//sum of odd place digits
    while(number.size()>0){
        
    }
    return 0;
}
