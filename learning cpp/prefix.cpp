#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string tracker;
        int size = strs.size();
        if (strs.empty())
        {
           return "";
        }
        
        int counter[size-1];
        string prefix = strs[0];
        for (int i = 1; i < size; i++)
        {
            int j=0;
            while (j<strs[i].size()&&j<prefix.size())
            {
               if (prefix[j]==strs[i][j])
               {
                  counter[i-1]=0;
                  counter[i-1]++;
                  
               }
               j++;
            }
            
        }
//sort the array from small to big so we get the small value in front
        
        for (int k = 0; k < size-1; k++)
        {
            if (counter[k]>counter[k+1])
            {
                swap(counter[k],counter[k+1]);
            }
            
        }
        int a=counter[0];
        prefix = prefix.substr(0, a+1);
        
return prefix;
    }
};
int main()
{
    Solution obj;
    string commonPrefix;
    vector<string> strs = {"raj", "raju", "ram"};
    commonPrefix = obj.longestCommonPrefix(strs);
    cout << "Longest common prefix: " << commonPrefix << endl;
    return 0;
}