#include <bits/stdc++.h>




    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };


Node<int> *sortTwoLists(Node<int> *first, Node<int> *second)
{
    // Write your code here.
    Node<int> *curr1 = first;
    Node<int> *curr2 = second;
    Node<int> *temp = new Node<int>(-1);
    Node<int> *curr = temp;

    while (curr1 != NULL and curr2 != NULL)
    {
        if (curr1->data < curr2->data)
        {
            curr->next = curr1;
            curr = curr1;
            curr1 = curr1->next;
        }
        else
        {
            curr->next = curr2;
            curr = curr2;
            curr2 = curr2->next;
        }
    }
    if (curr1 != NULL)
    {
        curr->next = curr1;
    }
    if (curr2 != NULL)
    {
        curr->next = curr2;
    }
    //  temp=temp->next;
    return temp->next;
}
