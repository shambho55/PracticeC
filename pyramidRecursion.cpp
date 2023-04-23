#include <iostream>
using namespace std;

void printSpacesStar(int n,int k){
	if(n == 0){
		return;
	}
	for(int i = 0;i < n - 1;i++){
		cout << " ";
	}
	for(int i = 0;i < k;i++){
		cout << '*';
	}
	cout << endl;
	printSpacesStar(n - 1,k + 2);
}


int main(){
	int n;
	cin >> n;
	int k = 1;
	printSpacesStar(n,k);
}