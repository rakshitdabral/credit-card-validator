#include <iostream>
using namespace std;

int main(){
    int n;
    bool check;
    cout << "Enter the card number : " ;
    cin >> n;
        int array[n];
        for (int i = 0; i <n; i++) {
        array[i] = n % 10;
        n /= 10;
    }
    
    return 0;
}
