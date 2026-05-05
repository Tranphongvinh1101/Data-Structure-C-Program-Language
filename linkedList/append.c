#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
} Node;
// O(n)

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}
Node* append(Node* head, int data){
    Node* newNode = createNode(data);
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}
//O(1)
Node* add_at_end(Node* head, int data) {
    Node* temp = (Node*)malloc(sizeof(Node));

    temp->data = data;
    temp->next = NULL;

    head->next = temp;
    return temp;
}

int main(){
    Node* head = (Node*)malloc(sizeof(Node));
    head->data = 45;
    head->next = NULL;

    Node* ptr = head;
    ptr = add_at_end(ptr, 98);
    ptr = add_at_end(ptr, 71);
    ptr = add_at_end(ptr, 12);

    ptr = head;

    Node* temp = ptr;
    
    while(temp != NULL) {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
}