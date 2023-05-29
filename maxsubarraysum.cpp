#include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int maxSum=INT_MIN;
//     for(int i=0;i<n;i++){
//         for(int j=i;i<n;i++){
//                 int sum=0;
//             for(int k=i;k<=j;k++){
//                 sum+=a[k];
//                 // cout<<a[k]<<' ';
//              }
//              maxSum=max(maxSum,sum);
//         }
//     }cout<<maxSum<<endl;

//     return 0;
// }
// #include <iostream>

using namespace std;
void solve(int a,int b){
    while(b<a){
        b*=2;
    }
    if(a==b){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main() {
	int t;
	cin>>t;
	while(t--){
	 int a,b;
	 cin>>a>>b;
	 if(a==b){
	     cout<<"YES"<<endl;
	 }
	
	 else{
	     if(a>b){
	         solve(a,b);
	     }
	     else{
	         solve(b,a);
	     }
	 }
	
	}
	    
	return 0;
}

