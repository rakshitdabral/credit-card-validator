#include <iostream>
#include <string>
using namespace std;
int main(){
    string number;
    int sum_odd = 0,sum_even=0;
    cout << "Enter cc number: " << "";
    cin >> number;
//string to array conversion
    int arr[number.size()];
    for(int i=0;i<number.length();i++){
        char ck=(char)(number[i]);
        arr[i] = (int)(ck) - 48;
    }
//sum of odd place digits
        for(int i=0;i<number.length();i++){
            if(i==0){
                continue;
            }
            if(i%2==1){
                sum_odd=sum_odd+arr[i];
            }
        }
//sum of even place digits
        for(int i=0;i<number.length();i++){
            if(i%2==0){
                sum_even=sum_even+arr[i]*2;
                if(sum_even>9){
                    sum_even=sum_even%10;
                    
                }
            }
        }cout << sum_even;
    return 0;
}
