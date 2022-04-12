


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

class comp
{
    public: 
    bool operator()(ListNode* a,ListNode* b)
    {
        return a->val>b->val;
    }
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
       
        priority_queue<ListNode*,vector<ListNode*>,comp>pq;
        
        ListNode* head=new ListNode(-1);
        ListNode* tail=head;
        for(int i=0;i<lists.size();i++)
        {
            if(lists[i]!=NULL)
            {
                pq.push(lists[i]);    
            }
        }
        
        while(!pq.empty())
        {
            ListNode* value=pq.top();
            tail->next=value;
            tail=tail->next;
            pq.pop();
            if(value->next!=NULL)
            {
                pq.push(value->next);
            }
        }
        return head->next;
    }
};
