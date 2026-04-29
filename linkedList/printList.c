void printList(Node* node){
    while(node->next != NULL){
        printf("%d -> ", node->data);
        node = node->next;
    }
}