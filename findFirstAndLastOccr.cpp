#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int n,target;
	cin >> n >> target;

	vector<int> arr(n);
	for(int i = 0;i < n;i++) cin >> arr[i];

	if(n == 0){
	cout << -1 << " " << -1 << endl;
	}
	int left = lower_bound(arr.begin(),arr.end(),target) - arr.begin();
	int right = upper_bound(arr.begin(),arr.end(),target) - arr.begin();

	if(arr[left] == target){
	cout << left << " " << right - 1 << endl;
	}
	else{
	cout << -1 << " " << -1 << endl;
	}
}
