#include<bits/stdc++.h>

using namespace std;

int n;
int check[1000005];

void sang_ngto(){
	for(int i=1;i<=100000;i++)
		check[i]=i;
	for(int i = 2;i <= 100000;i++){
		if( check[i] == i){
			for(int j = 2*i; j <= 100000;j = j+i){
				if(check[j] == j){
					check[j] = i;
				}
			}
		}
	}
}

int main(){
	cout<<endl;
	int test;
	cin>>test;
	sang_ngto();
	while(test--){
		cin>>n;
		for(int i = 1;i <=n;i++){
				cout<<check[i]<<" ";
		}
		cout<<endl;
	}
}
