SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position)
{
    struct SinglyLinkedListNode *new_node = (struct SinglyLinkedListNode *)
        malloc(sizeof(struct SinglyLinkedListNode));
    new_node->data = data;
    
    if (head == NULL)
    {
        return new_node;
    }   
 else 
 {
        SinglyLinkedListNode *last = head;
        int p = 0;

        if (position == 0)
        {
            new_node -> next = head;
            return new_node;
        }

        while (last != NULL) {
            if (p == position - 1) 
            {
                new_node -> next = last -> next;
                last -> next = new_node;
            } else 
            {
                last = last -> next;
            }
            p = p + 1;
        }
        return head; 
}
}