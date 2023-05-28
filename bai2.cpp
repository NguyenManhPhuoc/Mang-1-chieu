#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[20];
	int n,x;
	cout<<"Nhap n: "; cin>>n;
	cout<<"Nhap mang: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Nhap x: "; cin>>x;
	for(int i=x;i<n-1;i++){
		a[i]=a[i+1];
	}
	n--;
	cout<<"Mang sau khi xoa: ";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
return 0;
}
	
