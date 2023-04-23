#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// bool cmp(pair<int,int> &a,pair<int,int> &b){
// 	return a.second > b.second;
// }
bool cmp(int &a,int &b){
	return a > b;
}
int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0;i < n;i++) cin >> a[i];
	string str;
	cin >> str;
	//reverse string & vector
	reverse(a.begin(),a.end());
	reverse(str.begin(),str.end());
	for(int i = 0;i < n;i++) cout << a[i] << " ";
	cout << endl;	
	cout << str << endl;
	//sort given vector & string
	sort(a.begin(),a.end()); // sorts in ascending order by default;
	cout << "In ascending order : " << endl;
	for(int i = 0;i < n;i++) cout << a[i] << " ";
	cout << endl;
	sort(a.begin(),a.end(),greater<int>()); // sort in descending order;
	cout << "In descending order : " << endl;
	for(int i = 0;i < n;i++) cout << a[i] << " ";
	cout << endl;
	sort(a.begin(),a.end(),cmp); // sort in descending using comparator;
	cout << "In descending order using comparator : " << endl;
	for(int i = 0;i < n;i++) cout << a[i] << " ";
	cout << endl; 
	int max_itr = max_element(a.begin(),a.end()) - a.begin();
	cout << "Max element of vector is at " << max_itr << endl;
	cout << "Max element " << *max_element(a.begin(),a.end()) << endl;
	int min_itr = min_element(a.begin(),a.end()) - a.begin();
	cout << "Min element of vector is at " << min_itr << endl;
	cout << "Min element " << *min_element(a.begin(),a.end()) << endl;
	int find_ele = find(a.begin(),a.end(),-1) - a.begin();
	cout << "Found element index " << find_ele << endl;
	int sum = accumulate(a.begin(),a.end(),15);
	cout << "sum of all elements of vector " << sum << endl;
	cout << "Max element " << max({4,5,6,1}) << endl;
	cout << "Min element " << min({1,5,6,9}) << endl;

}