#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[20];
	int n,x,y;
	cout<<"Nhap n: "; cin>>n;
	cout<<"Nhap mang : ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"x = "; cin>>x;
	cout<<"y = "; cin>>y;
	for(int i=n; i>x;i--)
	{
		a[i]=a[i-1];
	}
	
	a[x] = y;
	n++;
	cout<<"Mang sau khi them y vao vi tri x la: ";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
return 0;
}
		
