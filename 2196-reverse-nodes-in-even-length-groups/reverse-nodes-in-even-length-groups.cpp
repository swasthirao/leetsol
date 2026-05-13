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

    ListNode* revSeg(ListNode* head,int count){
        ListNode* prev=NULL;
        ListNode* curr=head;

        while(count--){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
            head->next=curr;

            return prev;
        

    }
    ListNode* reverseEvenLengthGroups(ListNode* head) {
    
    int group=1;

    ListNode* dummy =new ListNode(0);
    dummy->next=head;
    ListNode *curr=head;
    ListNode *prev=dummy;

        while(curr){
        int count=0;

        ListNode* temp=curr;

        while(temp && count<group ){
        temp=temp->next;
        count++;
    }
    if(count%2 == 0){

        ListNode *tem=curr;
        ListNode *newhead=revSeg(curr,count);
        prev->next=newhead;

            prev=tem;
            curr=tem->next;

    }
    else
    {
        for(int i = 0 ;i<count ; i++){
            prev=curr;
            curr=curr->next;
        }
    }

    group++;
    }
    return dummy->next;
    }
};