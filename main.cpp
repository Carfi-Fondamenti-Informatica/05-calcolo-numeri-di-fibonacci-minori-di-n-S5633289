#include <iostream>
using namespace std;

int fibonacci(int a){
    int n1=0,n2=1,n3;
    cout<<"1"<<endl;
    for(int i=2;i<=a;i++){
        n3=n1+n2;
        if(n3<=a){
        cout<<n3<<endl;
        }
        n1=n2;
        n2=n3;
    }
    return 0;
}

int main() {
    int n;
    cin>>n;
    if(n>=2){
        fibonacci(n);
    }
    else{ cout<<"errore";}
    return 0;
}
