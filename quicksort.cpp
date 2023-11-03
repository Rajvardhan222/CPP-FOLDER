#include<iostream>
#include<algorithm>
using namespace std;
int partitonvalue(int arr[],int low,int high){
        int puppet=arr[low];
        int i=low;
        int j=high;
        while (i<j)
        {
           while (arr[i]<=puppet&&i<high)
           {
            i++;
           }
           while (arr[j]>puppet&&j>=low+1)
           {
            j--;
           }
           if(arr[i]>arr[j])swap(arr[i],arr[j]);
           
           
        swap(arr[low],arr[j]);
        }
        return j;
        

}
void quicksort(int arr[],int low,int high){
      if(low<high){
        int partition=partitonvalue(arr,low,high);
        //left portion
        quicksort(arr,low,partition-1);
        quicksort(arr,partition+1,high);
      }
        
}
int main(){
int arr[5]={5,9,7,1,2};
quicksort(arr,0,4);
for (int i = 0; i < 5; i++)
{
    cout<<arr[i]<<" ";
}

return 0;
}