#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int t;
	cin >> t;
	bool ans = true,isDecre = true;
	int i = 0,curr,prev = 100000;
	while(i < (t - 1)){
		cin >> curr;
		if(curr < prev){
			continue;
        }
		else if(curr > prev){
			isDecre = false;
        }
		else if(curr < prev && isDecre == false){
			ans = false;
        }
		else{
			ans = false;
			break;
        }
		prev = curr;
		i++;
    }
	if(ans){
	cout << "true" << endl;
    }
	else{
	cout << "false" << endl;
    }
}
