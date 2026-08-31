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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int pos = 1;
        int first  =-1;
        int prevcrit = -1;
        int last =-1;
        int mindis = INT_MAX;

        ListNode* prev = head;
        head = head->next;

        while(head!=nullptr && head->next!= nullptr){
            if((head->val>prev->val&&head->val>head->next->val|| head->val<prev->val && head->val<head->next->val)){
                if(first ==-1){
                    first = pos;
                }

                if(prevcrit !=-1){
                    mindis = min(mindis ,pos-prevcrit);
                }
                
                prevcrit = pos;
                last = pos;
            }

            prev  = head;
            head = head->next;
            pos++;
        }

        if(first == -1|| first == last){
            return{-1,-1};
        }

        int maxdis = last-first;
        return {mindis,maxdis};
    }
};