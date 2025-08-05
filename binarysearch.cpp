#include<iostream>
using namespace std;
int binary(int arr[],int low,int high,int key){
  if(low>high){
    return -1;
  }
  int mid = (low+high)/2;
  if(arr[mid]==key){
    return mid;
  }
  else if(arr[mid]<key){
   return binary(arr,mid+1,high,key);
  }
  else{
    return binary(arr,low,mid-1,key);
  }
}
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int key;
  cin>>key;
 int res = binary(arr,0,n-1,key);
 if(res==-1){
   cout<<"The number is not present in the list";
 }
 else{
   cout<<"The number is present at index "<<res;
 }
}