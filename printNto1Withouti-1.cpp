#include <bits/stdc++.h>
using namespace std;

#define ll long long

void printNto1(int i,int n){
	if(i > n) return;
	printNto1(i + 1,n);
	cout << i << " ";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int i = 1;
	printNto1(i,n);
	cout << "\n";
}