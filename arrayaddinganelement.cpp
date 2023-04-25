#include<iostream>
int main()
{
 int arr[100],element,position,n;
 std::cin>>n;
 for(int i=0;i<n;i++)
 {
    std::cin>>arr[i];
 }  
  for(int i=0;i<n;i++)
 {
    std::cout<<arr[i];
 } 
std::cin>>element>>position; 
  for(int i=n-1;i>=position;i--)
 {
    arr[i+1]=arr[i];
 } 
 arr[position]=element;
  for(int i=0;i<n+1;i++)
 {
    std::cout<<arr[i];
 } 
}