/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr){
            return nullptr;
        }
        //finding lenth 
        int l = 0;
        ListNode* curr =head;
        while(curr){
            l++;
            curr=curr->next;
        }

        //update k
        k=k%l;

        //if k is 0
        if(k==0){
            return head;
        }

        //find tail
        ListNode* tail = head;
        while(tail->next){
           tail= tail->next;
        }
        //after loop tail points on the last node
        //jump(l-k) place right from head to finf the new head       
        curr = head;
        ListNode* prev = nullptr;
        for(int i=0;i<(l-k);i++){
            prev = curr;
            curr=curr->next;
            //curr is new head
        }
        //disconnect -to create to LL
        prev->next = nullptr;

        //reconnect two
        tail->next=head;

        return curr;

    }
};