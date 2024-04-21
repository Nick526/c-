#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[]={5,1,2,3,2,5};
	sort(a+6,a);
	for(int i=0;i<=5;i++){
		cout<<a[i];
	}
	return 0; 
}
