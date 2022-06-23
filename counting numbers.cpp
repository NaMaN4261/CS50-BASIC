#include <iostream>
using namespace std;

int counting(int n){
    for (int i=0;i<=n;i++){
        cout << i <<" ";
    }
    cout << endl;
    return 0;
}

int main(){
    int n;
    cin >>n;
    int ans = counting(n);
    cout<<ans;
    return 0;
}