Node* add_at_begin(Node* head, int data) {
    Node* ptr = createNode(data);

    ptr->next = head;
    head = ptr;

    return head;

}
