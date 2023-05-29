#include<bits/stdc++.h>
using namespace std;

bool pairsum(int a[],int n,int k){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
         cout<<i<<" "<<j;
         if(a[i]==a[j]){
            return true;
         }
        }
            

        }
        return false;
    }
    int main(){
        int a[]={ 1,11,12,13,14,15};
        int k=25;
        cout<<pairsum(a,6,k)<<endl;
        return 0;

    }