#include <iostream>
using namespace std;
int main()
{
	/* code */
	int n;
	cin >> n;
	int i = 1;
	while(i < n){
		if(i == 7){
			i++;
			continue;
		}
		cout << i << endl;
		i++;
	}
	for(int i = 1;i < n;i++){
		if(i == 7){
			continue;
		}
		cout << i << endl;
	}
	return 0;
}