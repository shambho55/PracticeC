#include <iostream>
using namespace std;
int main(){
	int n,target;
	cin >> n >> target;
	int arr[n];
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	bool ans = false;
	int prev = arr[0];
	for(int i = 0;i < n;i++){
		if(prev + arr[i + 1] == target){
			ans = true;
			break;
		}
		else if(prev + arr[i + 1] > target){
			prev = prev - arr[i];
			prev = prev + arr[i + 1];
		}
		else{
			prev = prev + arr[i + 1];
		}
	}
	if(ans){
		cout << "true" << endl;
	}
	else{
		cout << "false" << endl;
	}
}