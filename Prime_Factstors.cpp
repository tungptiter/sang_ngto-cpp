// Example program
#include <iostream>
#include <string>
using namespace std;
int main()
{
    long long n;
    cout<<"Nhap n: ";
    cin>>n;
    long i = 2;
    while(n > 1){
        if (n%i == 0){
            n /= i;
            cout<<i <<" ";
        }
        else i++;
    }
}
