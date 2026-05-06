Node* addAtPosition(Node* head, int data, int index){
	if(head == NULL && index == 0){
		head = createNode(data);
		return head;
	}
	Node* newNode = createNode(data);
	Node* curr = head;
	for(int i = 0; i < index && curr->next != NULL; i++){
		curr = curr->next;
	}
	newNode->next = curr->next;
	curr->next = newNode;
	return head;
}