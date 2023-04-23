#include <bits/stdc++.h>
using namespace std;
int main(){
	int x1,y1,x2,y2;
	cin >> x1 >> y1 >> x2 >> y2;
	int x3,y3,x4,y4;
	cin >> x3 >> y3 >> x4 >> y4;

	int A1 = (x3 - x1) * (y3 - y1);
	int A2 = (x4 - x2) * (y4 - y2);

	int Aintr = 0;
	int left = max(x3 , x1);
	int right = min(x2 , x4);
	int top = min(y2 , y4);
	int bottom = max(y1 , y3);

	if((left < right) && (bottom < top)){
		Aintr = (right - left) * (top - bottom);
	}
	cout << A1 + A2 - Aintr;
	return 0;
}