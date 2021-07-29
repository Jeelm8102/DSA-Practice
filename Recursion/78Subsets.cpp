#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    void subsets(vector<int>& nums, int i, vector<int>& sub, vector<vector<int>>& subs) {
        subs.push_back(sub);
        for (int j = i; j < nums.size(); j++) {
            sub.push_back(nums[j]);
            subsets(nums, j + 1, sub, subs);
            //j+1 increments the sequence here, like first a, then b, then c, then ab, ac, bc, abc etc.
            sub.pop_back();
        }
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> subs;
        vector<int> sub;
        subsets(nums, 0, sub, subs);
        return subs;
    }
};
int main() {
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    Solution obj;
    vector<vector<int>> subs = obj.subsets(nums);
    for (int i = 0; i < subs.size(); i++) {
        for (int j = 0; j < subs[i].size(); j++) {
            cout << subs[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}