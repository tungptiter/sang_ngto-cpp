#include<iostream>
#include<cmath>
using namespace std;

int number(int n){
	if(n==2) return 1;else {
		int x=sqrt(n)+1;
		for(int i=2;i<x;i++)
		if(n % i == 0) return 0;
		return 1;
	}
}

int main()
{
	int T,n;
	cin>>T;
	while(T--){
		cin>>n;
		for(int i=2;i<=n;i++)
		if(number(i)==1) cout<<i<<" ";
		cout<<endl;	
	}

}




