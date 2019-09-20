// Example program
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cout<<"Nhap n: ";
    cin>>n;
    long long check[n + 1] = {0};
    // for(int i = 2;i <= n;i++) cout<<check[i];
    for(long long i = 2;i <= n;i++){
        if (check[i] == 0){
            for(long long j = 2*i;j <= n;j += i){
                check[j] = 1;
            }
        }
    }
    for(long long i = 2;i <= n;i++)
        if(check[i] == 0) cout<<i<<"\n";
    }
    

