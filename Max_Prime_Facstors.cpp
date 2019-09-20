// Example program
#include <iostream>
#include <string>
using namespace std;
int main()
{
    long long n;
    int test;
    // cout<<"TEST: ";
    cin>>test;
    while(test--){
        // cout<<"Nhap n: ";
        cin>>n;
        long i = 2;
        long long max = 0;
        while(n > 1){
            if (n%i == 0){
                n /= i;
                max = i;
            }
            else i++;
        }
        cout<<max <<"\n";
    }
}

