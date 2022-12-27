#include <bits/stdc++.h>
using namespace std;
bool containsDuplicate(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        return s.size()<nums.size();
    }

int main() {
   vector<int>nums;
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   { 
     int x;cin>>x;
   nums.push_back(x);
   }
  
   
  if(containsDuplicate(nums)) cout<<"true"<<endl;
  else cout<<"false"<<endl;
    return 0;
}
