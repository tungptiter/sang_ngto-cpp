#include<bits/stdc++.h>

using namespace std;

bool check[10000005];

void sang_ngto(){
	for(int i=2;i<=100000;i++)
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
	int m,n;
	cin>>test;
	sang_ngto();
	while(test--){
		cin>>m>>n;
		for(int i = m;i <=n;i++){
			if(check[i] == true) {
				cout<<i<<" ";
			}
		}
		cout<<endl;
	}
}
