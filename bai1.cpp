#include<bits/stdc++.h>
using namespace std;
int main(){
	int numbers[20];
	int n,x;
	cout<<"Nhap n: "; cin>>n;
	for(int i=0;i<n;i++){
		cin>>numbers[i];
		}
	cout<<"Nhap x: "; cin>>x;
	cout<<"Mang sau khi them phan tu x la: ";
	numbers[n]=x;
	n++;
	for(int i=0;i<n;i++){
		cout<<numbers[i]<<" ";
		}
return 0;
}
