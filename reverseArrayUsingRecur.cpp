#include <iostream>
using namespace std;
void reverseArrayR(int arr[],int start,int end){
	if(start >= end) return;
	int temp = arr[start];
	arr[start] = arr[end];
	arr[end] = temp;
	reverseArrayR(arr,start + 1,end - 1);
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0;i < n;i++) cin >> arr[i];
	reverseArrayR(arr,0,n - 1);	
	for(int i = 0;i < n;i++) cout << arr[i] << " ";
	cout << "\n";
	return 0;
}