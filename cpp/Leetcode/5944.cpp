#include<iostream>
#include<vector>
#include<string>

using namespace std;
class Solution {
public:
    void dfs(TreeNode* root, vector<int> &flag, int target, vector<int> &path){
        if(!root) return;
        if(root->val == target){
            flag[0] = 1;
            return;
        }
        path.push_back(0);
        dfs(root->left,flag,target,path);
        if(flag[0] == 1 ) return;
        path.pop_back();
        path.push_back(1);
        dfs(root->right,flag,target,path);
        if(flag[0] == 1 ) return;
        path.pop_back();
    }
    string getDirections(TreeNode* root, int startValue, int destValue) {
        vector<int> path1;
        vector<int> path2;
        vector<int> flag{0};
        dfs(root,flag,startValue,path1);
        dfs(root,flag,,path2);
        for(auto v:path2){
            cout << v <<endl;
        }
        return "ss";
    }
};
int main(){
    Solution
    return 0;
}