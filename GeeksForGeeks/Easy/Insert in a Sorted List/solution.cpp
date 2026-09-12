/* Definition of a Linked List Node
class Node
{
  public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};*/

class Solution {
  public:
    Node* sortedInsert(Node* head, int key) {
        if (head == nullptr) return new Node(key); 

        if (head->data >= key) {
            Node* temp = new Node(key);
            temp->next = head;
            return temp;
        } else {
            Node* temp = head;

            while (temp->next != nullptr && temp->next->data < key) {
                temp = temp->next;
            }
            
            Node* val = new Node(key);
            val->next = temp->next;
            temp->next = val;

            return head;
        }
    }
};
