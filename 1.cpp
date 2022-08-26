// Name: Saanuj
// Roll No: 2010992066
// Set 5
// Question:1
#include <bits/stdc++.h>
using namespace std;

vector<int> helper(int a[],int n,int k){
	vector<int> res;
    //  applying brute force

    return res;
}
int main(){
    int n; 
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k; 
    cin>>k;
    vector<int> res;
    try{
        for(int i=0;i<n;i++){
            int sum=0;
            vector<int> stmp;
            for(int j=i;j<n;j++){
                sum+=a[j];
                stmp.push_back(a[j]);
                if(sum==k && res.size()<stmp.size()){ // checking if current one is greater then previous subaasray with k sum
                    res=stmp;
                }
            }
        }
    }
    catch(...){
        cout<<"Error"<<endl;
    }
    
    for(int i = 0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    cout<<"\n";
    cout<<"Lenght :"<<res.size();
    return 0;
}
