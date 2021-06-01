#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {

 // Your code here
    int n;
    cin>>n;
    int m=n/2;
    vector<int>v;
    vector<int>v1;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
  
    
    int j=n-1;
    for(int i=0;i<m;i++){
        v1.push_back(v[i]+v[j]);
        j--;
    }
    
    sort(v1.begin(),v1.end());
   
    cout<<v1[m-1]-v1[0];
 return 0;
}
