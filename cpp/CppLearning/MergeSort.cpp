#include<iostream>
#include<vector>

using namespace std;

// void merge(vector<int> L,vector<int> &R,int i,int m,int n){
//     int mid = i+(n-i)/2;
//     merge(L,R,i,(i+(mid-i)/2),mid);
//     merge(L,R,mid+1,(mid+1+(n-mid-1)/2),n);
//     int j = 0, k = 0;
//     for(j = m+1, k=i; i<=m && j<=n; ++k){
//         // cout << i << j <<endl;
//         if(L[i]<= L[j]) R[k]= L[i++];
//         else R[k] = L[j++];
//     }
//     while(i<=m){
//         R[k] = L[i];
//         i++;
//         k++;
//     }
//     while(j<=n){
//         R[k] = L[j];
//         j++;
//         k++;
//     }
// }
// int main(){
//     vector<int> oo{0,1,1,2,3,4};
//     vector<int> kk;
//     vector<int> ll(10);
//     for(int i =10;i>0;i--){
//         kk.push_back(i);
//     }
//     merge(kk,ll,0,4,9);
//     for(int i = 0; i<10;i++){
//         cout << oo[i]<<endl;
//     }
//     return 0;
// }


//merge
struct ListNode{
     int val;
     ListNode* next;
     ListNode(){
         val = 0;
         next = nullptr;
     }
     ListNode(int x){
         val = x;
         next = nullptr; 
     }
};

ListNode* merge(ListNode *a, ListNode *b){
    ListNode sub(0), *ptr = &sub;
    while(a && b){
        auto &node = a->val < b->val? a : b;
        ptr->next = node;
        ptr = ptr->next;
        node = node->next;
    }
    ptr->next = a?a:b;
    return sub.next;
}
//切链
ListNode* sortList(ListNode *head){
    if(!head || !head->next) return head;
    ListNode* slow = head, *fast = head->next;
    // cout << fast->val;
    while (fast->next && fast->next->next)
            slow = slow->next, fast = fast->next->next;
    fast = slow->next, slow->next = nullptr;
    return merge(sortList(head),sortList(fast));
}
//排序
int main(){
    // ListNode *node4 = new ListNode(4);ListNode *node3 = new ListNode(3);ListNode *node2 = new ListNode(2);ListNode *node1 = new ListNode(1);
    // node4->next = node2; node2->next = node1; node1->next = node3;
    // auto head = sortList(node4);
    // while(head){
    //     cout << head->val <<endl;
    //     head = head->next;
    // }
    int x = 3001;
    string s = to_string(x);
    cout <<s<<endl;
    return 0;
}
// "  q-, vqdo!btpmtmui.bb83lf g .!v9-lg 2fyoykex uy5a 
// 8v whvu8 .y sc5 -0n4 zo pfgju 5u 4 3x,3!wl  fv4   s  aig cf j1 a 
// i  8m5o1  !u n!.1tz87d3 .9    n a3  .xb1p9f  b1i a j8s2 cugf l494cx1! 
// hisceovf3 8d93 sg 4r.f1z9w   4- cb r97jo hln3s h2 o .  8dx08as7l!mcmc 
// isa49afk i1 fk,s e !1 ln rt2vhu 4ks4zq c w  o- 6  5!.n8ten0 6mk 2k2y3e335,yj  
// h p3 5 -0  5g1c  tr49, ,qp9 -v p  7p4v110926wwr h x wklq u zo 16. !8  u63n0c 
// l3 yckifu 1cgz t.i   lh w xa l,jt   hpi ng-gvtk8 9 j u9qfcd!2  kyu42v dmv.cst6i5fo 
// rxhw4wvp2 1 okc8!  z aribcam0  cp-zp,!e x  agj-gb3 !om3934 k vnuo056h g7 t-6j! 
// 8w8fncebuj-lq    inzqhw v39,  f e 9. 50 , ru3r  mbuab  6  wz dw79.av2xp . gbmy gc 
// s6pi pra4fo9fwq k   j-ppy -3vpf   o k4hy3 -!..5s ,2 k5 j p38dtd   !i   b!fgj,nx qgif "