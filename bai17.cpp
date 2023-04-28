#include<iostream>
using namespace std;
float tong_mang(float arr[],int n){
	if(n==0){
	return 0;}
	else {
	
        return arr[0] + tong_mang(arr + 1, n - 1);
}
}
int main(){
	float arr[]={1.2, 3.4, 5.6, 7.8};
	int n=sizeof (arr)/sizeof(arr[0]);
	float D= tong_mang(arr,n);
	cout<<"tong mang la:"<<D<<endl;
	return 0;
}