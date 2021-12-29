#include <iostream>
#include <string>
using namespace std;
int main(){
    string number;
    int sum_odd = 0,sum_even=0;
    cout << "Enter cc number: " << "";
    cin >> number;
    int arr[number.size()];
//string to array conversion and reversing the order
    
    for(int i=number.length()-1;i>=0;i--){
        char ck=(char)(number[i]);
        arr[number.length()-1-i] = (int)(ck) - 48;
    } 
//sum of odd place digits
        for(int i=0;i<number.length();i++){
            if(i%2==0){
                sum_odd=sum_odd+arr[i];
            }
        }
        
//sum of even place digits
        for(int i=0;i<number.length();i++){
            if(i%2==1){
                int temp = arr[i]*2;
                if(temp>9){
                    temp=(temp%10)+(temp/10);
                }
                sum_even += temp;
            }
        }
        
//checker for valid
    int final_sum=sum_even+sum_odd;
    if(final_sum%10==0){
        cout << "Valid card number";
    }
    else{
        cout << "Invalid card number";
    }
    return 0;
}
