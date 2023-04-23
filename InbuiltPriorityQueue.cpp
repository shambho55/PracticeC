#include <iostream>
#include <queue>
using namespace std;
	
auto cmp = [](int a,int b){
	return a > b;
};	
void solve(){
	int n;
	cin >> n;
	vector <int> a(n);
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}

	//max heap
	priority_queue <int> pq_max;

	//min heap
	priority_queue <int,vector<int>,greater<int>> pq_min;

	// priority queue with comparator
	priority_queue <int,vector <int>,decltype(cmp)> pq_cmp(cmp);

	for(int i = 0;i < n;i++) {
		pq_max.push(a[i]);
		pq_min.push(a[i]);
		pq_cmp.push(a[i]);
	}

	cout << "current max heap size is " << pq_max.size() << endl;
	cout << "current min heap size is " << pq_min.size() << endl;
	cout << "current comparative heap size is " << pq_cmp.size() << endl;

	while(!pq_max.empty()){
		cout << "top element of max heap : " << pq_max.top() << endl;
		pq_max.pop();
	}
	while(!pq_min.empty()){
		cout << "top element of min heap : " << pq_min.top() << endl;
		pq_min.pop();
	}

	while(!pq_cmp.empty()){
		cout << "top element of comparative heap : " << pq_cmp.top() << endl;
		pq_cmp.pop();
	}
	cout << endl;

}
int main(){
	solve();
}
