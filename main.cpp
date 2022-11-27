#include <iostream>
using namespace std;

int fibonacci(int a){
    int n1=0,n2=1,n3=1;

    while(n3<=a){
        cout<<n3<<endl;
        n3=n1+n2;
        n1=n2;
        n2=n3;
    }
    return 0;
}

int main() {
    int n;
    cin>>n;
    fibonacci(n);
    return 0;
}
