#include <bits/stdc++.h> 
using namespace std; 
  int main() { 
vector<int> arr={0,1,0,3,12};
 int i=0;
 int j=arr.size()-1;
      while(i<=j){
          if(arr[i]==0){
              swap(arr[i],arr[j]);
              i++;
              j--;
          }
        i++;
      }
      for(int x=0;x<arr.size();x++){
          cout<<arr[x]<<" ";
      }
  }