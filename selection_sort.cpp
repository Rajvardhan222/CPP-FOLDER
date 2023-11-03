#include<iostream>
using namespace std;
int main(){
int arr[6]{6,5,4,3,2,1};
for (int  i = 0; i <= 6-2; i++)
{
    for (int j = i; j <= 6-1; j++)
    {
        if (arr[i]>arr[j])
        {
            swap(arr[i],arr[j]);

        }
        
    }
    
}
for (int i = 0; i < 6; i++)
{
    cout<<arr[i]<<" ";
}


return 0;
}