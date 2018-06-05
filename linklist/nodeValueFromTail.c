int getNode(SinglyLinkedListNode* head, int positionFromTail)
{
    int len = 0, elem;
    struct SinglyLinkedListNode *temp = head;
    while(temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    if(len < positionFromTail)
        return 0;
    temp = head;
     for (elem = 1; elem < len-positionFromTail; elem++)
    temp = temp->next;
 
   // printf ("%d", temp->data);
    return temp->data;
}