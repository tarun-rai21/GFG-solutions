/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    
    Node* reverseList(Node* head) {
        Node* prev = nullptr;
        Node* curr = head;

        while (curr != nullptr) {
            Node* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        return prev;
    }
    
    Node* addOne(Node* head) {
        // reverse 
        head = reverseList(head);
        
        // add one in the beginning
        Node* temp = head;
        
        int carry = 1;
        while (temp) {
            int sum = temp->data + carry;
            temp->data = sum % 10;
            carry = sum / 10;

            if (carry == 0) break;

            if (temp->next == NULL) {
                temp->next = new Node(carry);
                carry = 0;
                break;
            }

            temp = temp->next;
        }
        
        
        // reverse again
        head = reverseList(head);
        
        return head;
    }
};