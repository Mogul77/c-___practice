#include<iostream>
using namespace std;
int findmax(int arr[],int n){
  if(n==1){
    return arr[0];
  }
  return max(arr[n-1],findmax(arr,n-1));
}
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int m=findmax(arr,n);
  cout<<m;
}