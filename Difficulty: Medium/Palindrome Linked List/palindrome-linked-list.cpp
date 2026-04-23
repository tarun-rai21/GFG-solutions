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
    bool isPalindrome(Node *head) {
        //  code here
        if (head == NULL || head->next == NULL) return true;
        
        Node* fast = head;
        Node* slow = head;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        Node* prev = NULL;
        Node* curr = slow;
        while(curr){
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        while(prev){
            if(head->data != prev->data) return false;
            prev = prev->next;
            head = head->next;
        }

        return true;
    }
};