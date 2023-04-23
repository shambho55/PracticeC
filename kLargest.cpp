#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;


vector<int> kLargest(int arr[],int n,int k){
	priority_queue<int> pq_max;
	vector<int> output;

	for(int i = 0;i < n;i++){
		pq_max.push(arr[i]);
	}

	int i = 0;
	while(i < k){
		if(!pq_max.empty()){
		output.push_back(pq_max.top());
		pq_max.pop();
		i++;}
	}
	return output;
}

int main(){
	int size;
	cin >> size;
	int* input = new int[size];
	for(int i = 0;i < size;i++){
		cin >> input[i];
	}

	int k;
	cin >> k;
	vector<int> output = kLargest(input,size,k);

	sort(output.begin(),output.end());

	for(int i = 0;i < output.size();i++){
		cout << output[i] << " ";
	}
	delete [] input;
}