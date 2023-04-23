#include <iostream>
using namespace std;
#include <vector>
#include <stack>
vector<int> nextGreaterElement(vector<int> input) {
    // Write your code here
    int n = input.size();
    vector<int> output(n);
    stack<int> s;
    
    for(int i = n - 1;i >= 0;i--){
    if(s.empty()){
        s.push(input[i]);
        output[i] = -1;
    }
    else{
        while(!s.empty() && s.top() <= input[i]){
            s.pop();
        }
        if(s.empty()){
            output[i] = -1;
            s.push(input[i]);
        }
        else{
            output[i] = s.top();
            s.push(input[i]);
        }
    }
    }
    
    return output;
}

int main() {
    int size, temp;
    cin >> size;

    vector<int> input;

    for(int i = 0; i < size; i++) {
	cin >> temp;
        input.push_back(temp);
    }

    vector<int> output = nextGreaterElement(input);
    for(int i = 0; i < output.size(); i++) {
	    cout << output[i] << " ";
    }
}