#include <bits/stdc++.h>
using namespace std;
int main(){
	vector <int> a;
	a.push_back(1);
	a.push_back(3);	
	a.pop_back();
	a.push_back(2);
	int answer = a.empty() ? a.front() : a.back();
	cout << answer ;
}