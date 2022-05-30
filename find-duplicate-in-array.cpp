//https://leetcode.com/problems/find-the-duplicate-number/submissions/

#include <bits/stdc++.h>

using namespace std;
int findDuplicate(vector<int>& nums) {
        vector<int> vect2;
        copy(nums.begin(), nums.end(), back_inserter(vect2));
        sort(vect2.begin(), vect2.end());
            int res=0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(vect2[i]==vect2[i+1]){res=vect2[i];break;};
        }
        return res;
}
int main()
{
    vector<int> n = {1,1};
    cout << findDuplicate(n)<<endl;
    return 0;
}
