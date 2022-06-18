
// Definition for singly-linked list.
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };

class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        if(head->next==NULL) return head;
        ListNode *insert = head;
        ListNode *find = head->next;
        ListNode *prev = head;
        ListNode *temp;
        while(true){
            if(find->val<=head->val){
                // insert new node as new head
                temp = new ListNode();
                temp->val = find->val;
                temp->next = head;
                head = temp;
                // delet original node
                if(find->next == NULL){
                    prev->next = NULL;
                    delete(find);
                    break;
                }
                else{
                    ListNode *d = find;
                    find = find->next;
                    prev->next = find;
                    d->next = NULL;
                    delete(d);
                } 
            }
            else if(find->val>=prev->val){
                if(find->next == NULL){
                    break;
                }
                else{
                    find = find->next;
                    prev = prev->next;
                } 
            }
            else{
                insert = head;
                while(insert!=prev){
                    if(insert->val<=find->val && insert->next->val>=find->val)break;
                    insert = insert->next;
                }
                // insert new node
                temp = new ListNode();
                temp->next = insert->next;
                insert->next = temp;
                temp->val = find->val;
                // delete original node
                if(find->next == NULL){
                    prev->next = NULL;
                    delete(find);
                    break;
                }
                else{
                    ListNode *d = find;
                    find = find->next;
                    prev->next = find;
                    d->next = NULL;
                    delete(d);
                }   
            }
        }
        return head;
    }
};
