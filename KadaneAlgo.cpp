#include <iostream>
using namespace std;
int sum(int* arr,int si,int ei){
    int ans = 0;
    for(int i = si;i <= ei;i++){
        ans = ans + arr[i];
    }
    return ans;
}
int main(){
int arr[5] = [1,0,0,1,0];
int ans = sum(arr,0,4);
cout<<ans<<endl;
}