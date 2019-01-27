#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int n, m, t;
	cout<<"Enter Test Cases\n";
	cin>>t;
	if(t<=1000 && t>=1){
		while(t!=0) {
			cout<<"Enter dimensions of Chessboard Matrix\n";
			cin>>n>>m;
			while(n>=1 && m<=10^9) {
				if(n%2==0) {
					cout<<pow(n,2)/2;
					cout<<"\n";
				}
				else {
					cout<<(pow(n,2)+1)/2;
					cout<<"\n";
				}
				t=t-1;
				break;
			}
		}
	}
	else{
		exit(1);
	}
	return 0;
}

