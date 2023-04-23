#include <iostream>
using namespace std;

int main(){
	int row,column,;
	cin >> row >> column;
	int **arr = new int*[row];
	while(row > 0){
		for(int i = 0;i < column;i++){
			arr = new int[column];
			cin >> arr[row][i];
		}

	}
}