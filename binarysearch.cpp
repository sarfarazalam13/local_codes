#include<iostream>
using namespace std;
int binarySearch(int arr[], int p, int r, int num) {
   if (p <= r) {
      int mid = (p + r)/2;
      if (arr[mid] == num)
         return mid ;
      if (arr[mid] > num)
         return binarySearch(arr, p, mid-1, num);
      if (arr[mid] < num)
         return binarySearch(arr, mid+1, r, num);
   }
   return -1;
}
int main() {
   int arr[] = {1, 4, 7, 13, 15, 20, 25, 36, 45, 55};

   int n = sizeof(arr)/ sizeof(arr[0]);
   int key;
   cout << "Enter the number to search: \n";
   cin >> key;
   int index = binarySearch (arr, 0, n-1, key);
   if(index == -1){
      cout<< key <<" is not present in the array";
   }else{
      cout<< key <<" is present at index "<< index <<" in the array";
   }
   return 0;
}