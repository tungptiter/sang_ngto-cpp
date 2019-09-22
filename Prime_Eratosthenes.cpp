#include<bits/stdc++.h>

using namespace std;

int n;
bool check[10000005];

void sang_ngto(){
	for(int i=2;i<=n;i++)
		check[i]=true;
	for(int i = 2;i <= 100000;i++){
		if( check[i] == true){
			for(int j = 2*i; j <= 100000;j += i){
				check[j] = false;
			}
		}
	}
}

int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>n;
		sang_ngto();
		for(int i = 2;i <=n;i++){
			if(check[i] == true) {
				cout<<i<<" ";
			}
		}
		cout<<endl;
	}
}
