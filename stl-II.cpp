#include <iostream>
#include <algorithm>
using namespace std;


int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0;i < n;i++) cin >> a[i];
	sort(a.begin(),a.end());
	for(int i = 0;i < n;i++) cout << a[i] << " ";
	cout << endl;

	if(binary_search(a.begin(),a.end(),n)) cout << "Present" << endl;
	else cout << "Not Present" << endl;

	cout << "Case1# " << lower_bound(a.begin(),a.end(),-1) - a.begin() << endl;
	cout << "Case1# element " << *lower_bound(a.begin(),a.end(),6) << endl;
	cout << "Case2# " << lower_bound(a.begin(),a.end(),6) - a.begin() << endl;
	cout << "Case2# element " << *lower_bound(a.begin(),a.end(),-2) << endl; 
	cout << "Case3# " << lower_bound(a.begin(),a.end(),-2) - a.begin() << endl;
	cout << "Case3# element " << *lower_bound(a.begin(),a.end(),10) << endl;

	cout << "Case4# " << upper_bound(a.begin(),a.end(),6) - a.begin() << endl;
	cout << "Case4# element " << *upper_bound(a.begin(),a.end(),6) << endl;
	cout << "Case5# " << upper_bound(a.begin(),a.end(),-2) - a.begin() << endl;
	cout << "Case5# element " << *upper_bound(a.begin(),a.end(),-2) << endl;
	cout << "Case6# " << upper_bound(a.begin(),a.end(),10) - a.begin() << endl;
	cout << "Case6# element " << *upper_bound(a.begin(),a.end(),10) << endl;
}