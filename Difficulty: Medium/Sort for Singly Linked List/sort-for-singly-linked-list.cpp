/*Link list node
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};*/
class Solution {
  public:
    Node* insertionSort(struct Node* head_ref) {
        if (!head_ref || !head_ref->next) return head_ref;

        Node* sorted = nullptr; // new sorted list

        Node* curr = head_ref;

        while (curr) {
            Node* nextNode = curr->next; // store next
            sorted = insert(sorted, curr); // insert current node
            curr = nextNode;
        }

        return sorted;
    }

private:
    // Helper to insert node into sorted list
    Node* insert(Node* head, Node* node) {
        // Case 1: insert at beginning
        if (!head || node->data <= head->data) {
            node->next = head;
            return node;
        }

        // Case 2: insert somewhere in middle/end
        Node* curr = head;
        while (curr->next && curr->next->data < node->data) {
            curr = curr->next;
        }

        node->next = curr->next;
        curr->next = node;

        return head;
    }
};