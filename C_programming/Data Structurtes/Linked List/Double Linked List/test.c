void insert_first*(int item)
{
    node *prt = (node *)malloc(sizeof(node));
    if(ptr == NULL)
    {
        printf("memory can not allocate.");
        return;
    }
    else
    {
        ptr->data = item;

        if(head == NULL)
        {
            head = ptr;
            head->next = NULL;

            printf("Data inserted");\
            return;
        }
        else
        {
            ptr->next = head;

            ptr = head;

            printf("node added");

            return;
        }
    }
}