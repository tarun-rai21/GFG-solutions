/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        
        Node* slow = head;
        Node* fast = head;
        Node* head_new = nullptr;
        int count = 1;
        
        // find loop
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                slow = head;
                
                while(slow!=fast){
                    fast = fast->next;
                    slow = slow->next;
                }
                head_new = slow->next;
                while(slow != head_new){
                    head_new = head_new->next;
                    count++;
                }
                return count;
            }
        }
        return 0;
    }
};