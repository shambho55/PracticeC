#include <iostream>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	int **p = new int*[m];
	int size = 0;
	for(int i = 0;i < m;i++){
		p[i] = new int [n];
		for(int j = 0;j < n;j++){
			cin >> p[i][j];
			size += 4;
		}
	}
	cout << size << endl;
for(int i = 0;i < m;i++){
	delete [] p[i];
}
delete [] p;
}