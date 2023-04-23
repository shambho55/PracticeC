#include <iostream>
using namespace std;	
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	int max = -1;
	for(int i = 0;i < n;i++){
		if(arr[i] % 10 > max){
			max = (arr[i] % 10);
		}
	}
	cout << max << endl;
}