#include<bits/stdc++.h>

using namespace std;

int n;
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
	cin>>test;
	while(test--){
		cin>>n;
		sang_ngto();
		int gioi_han = 0;
		for(int i = 2;i <=n;i++){
			if(check[i] == true) {
				if(check[i] == true && check[n - i] == true && gioi_han == 0){
					cout<<i<<" "<<n - i;
					gioi_han = 1;	
				}
			}
		}
		cout<<endl;
	}
}
