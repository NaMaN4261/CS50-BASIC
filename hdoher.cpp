#include <iostream>
using namespace std;

int main(){
    int n;
    int fact=1;
    cin >> n;
    cout << " the number you enter: "<<n << endl;
    while (n>0){
        fact=fact*n;
        n-=1;
    }
    cout <<" The factorial of given number is: "<<fact;
    return 0;
}

