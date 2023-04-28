#include<iostream>
using namespace std;
void tang_dan(float arr[],int n){
	for(int i=0;i<n;i++)
		float key =arr[i];
		float j=i-1;
	while(j>=0 && arr[j]>key){
			arr[j]=arr[j+1];
			j--;}}
		arr[j+1]=key;
}
int main(){
	float arr[]={4.5 ,6.1 ,2.3 ,5.6};
	int n=sizeof(arr)/sizeof(arr[0]);
	tang_dan(arr,n);
	cout<<"mang sau khi sap xep la:";
	for(int i=0;i<n;i++)
	cout<<arr[0]<<" ";
	return 0;
}