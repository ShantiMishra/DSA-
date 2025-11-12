#include <iostream>
using namespace std;

void intersection(int arr1[], int arr2[] ,int s1,int s2){
    int k=0;   // index for the answer.
    int ans[k];
    for(int i=0;i<s1;i++){
        for(int j=0;j<s2;j++){
            if(arr1[i]==arr2[j]){
              ans[k]=arr1[i];
              k++;
              break;
            }
            
         }
    }
      cout<<"Intersection of given array is : ";
      for (int i=0;i<k;i++){
        cout<<ans[i]<<" ";
      }
}

int main(){
   int arr1[5]={1,2,3,4,5};
   int arr2[3]={4,5,6};
   intersection(arr1,arr2,5,3);

}