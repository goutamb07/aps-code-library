


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
    ListNode* mergeNodes(ListNode* head) {
     
        ListNode* temp=head;    
        ListNode* dummy=new ListNode(0); //creating a dummy node
        ListNode* node=dummy;          
        int sum=0;
        while(temp->next)       //As given last node will have 0 so stopping before
        {
            if(temp->val==0)    //As given first node will have 0 so first update temp and then traverse
            {
                temp=temp->next;
                while(temp->val!=0) //going till we dont encounter next zero 
                {
                    sum+=temp->val;    
                    temp=temp->next;
                }
                dummy->next=new ListNode(sum);  
                sum=0;
                dummy=dummy->next;
            }
            
           
        }
        return node->next;
    }
};
