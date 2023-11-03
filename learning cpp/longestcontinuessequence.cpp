#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool linearsearch(vector<int>&a,int n){
        for(int i=0;i<a.size();i++){
            if(a[i]==n){
                return true;
            }
        }
        return false;
    }
    int longestConsecutive(vector<int>& a) {
        int length=1;
        int cnt=1;
        for(int i=0;i<a.size();i++){
            int x=a[i];
            cnt=1;
            while(linearsearch(a,x+1)==true){
                x+=1;
                cnt+=1;
            }

        }
        return max(cnt,length);
    }
};
int main(){
Solution obj;
vector<int>v={100,4,200,1,3,2};
int a=obj.longestConsecutive(v);
cout<<a;
return 0;
}