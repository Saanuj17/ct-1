// Name: Saanuj
// Roll No: 2010992066
// Set 5
// Question:2
#include <bits/stdc++.h>
using namespace std;

int main(){
	try{
		int n;
		cin>>n; 
        int a[n];
		vector<vector<int>> res;
		for(int i=0;i<n;i++){
			cin>>a[i]; // taking input
        }
    //    outer looop traversing from 1 to n
		for(int i=0;i<n;i++){
			vector<int> temp;
			int sum=0;
            //  trversing from i to n
			for(int j=i;j<n;j++){
				sum+=a[j];
				temp.push_back(a[j]);
				if(sum==0)
					res.push_back(temp); 
			}
		}

        cout<<"Subarrays with sum 0 are: "<<endl;
		for(int i=0;i<res.size();i++){
			for(int j=0;j<res[i].size();j++){
				cout<<res[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	catch(...){
		cout<<"There is problem\n";
	}
    return 0;
}

