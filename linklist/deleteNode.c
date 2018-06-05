SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) 
{
    if(head == NULL)
        return head;
    struct SinglyLinkedListNode *temp = head;
    if(position == 0)
    {
        head = temp->next;
        free(temp);
        return head;
    }
    for(int elem = 0; temp != NULL && elem<position-1; elem++)
    {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL)
         return temp;
     struct SinglyLinkedListNode *next = temp->next->next;
    free(temp->next);
    temp->next = next; 
    return head;
}