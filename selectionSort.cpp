#include <iostream>
using namespace std;

void selectionSort(int input[],int n){
	for(int i = 0;i < n - 1;i++){
		int minIndex = i;
		for(int j = i + 1;j < n;j++){
			if(input[minIndex] > input[j]){
				input[minIndex] = input[minIndex] + input[j];
		input[j] = input[minIndex] - input[j];
		input[minIndex] = input[minIndex] - input[j];
			}
		}
		
	}
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n;i++){
		cin >> arr[i];
	}
	selectionSort(arr,n);
	for(int i = 0;i < n;i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}