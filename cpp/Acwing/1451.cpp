/*** 
 * @Author: zqc
 * @Date: 2022-01-21 14:57:45
 * @LastEditTime: 2022-01-21 15:04:19
 * @LastEditors: zqc
 * @Description: zqc's file configuration
 * @FilePath: \cpp\Acwing\1451.cpp
 * @version: 1.0
 */

#include<iostream>
#include<string>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* gettail(ListNode* head){
        while(head->next) head = head->next;
        return head;
    }
    ListNode* quickSortList(ListNode* head) {
        if(!head || !head->next) return head; 
        
        ListNode *left = new ListNode(-1) , *mid = new ListNode(-1) , * right = new ListNode(-1);
        ListNode *leftail = left , *midtail  = mid , *rightail = right;
        
        int val = head->val;
        
        while(head){
            if(head->val < val){
                leftail = leftail->next = head;
            }else if(head->val == val){
                midtail =midtail->next = head;
            }else{
                rightail = rightail->next = head;
            }
            head = head->next;
        }
        leftail->next = midtail->next = rightail->next = NULL;
        
        left->next = quickSortList(left->next);
        right->next = quickSortList(right->next);
        
        gettail(left)->next= mid->next;
        gettail(left)->next = right->next;
        auto p = left->next;
        delete left;
        delete mid;
        delete right;
        return p;
    }
};
int main(){
    ListNode *head = new ListNode(5);
    ListNode *head1 = new ListNode(3);
    ListNode *head2 = new ListNode(2);
    head->next = head1;
    head1->next = head2;
    Solution s;
    head = s.quickSortList(head);
    while (head)
    {
        cout << head->val;
        head = head->next;
    }
    
    return 0;
}
