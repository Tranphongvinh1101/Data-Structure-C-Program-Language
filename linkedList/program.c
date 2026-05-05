#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
} Node;

// Ham tao ra 1 node, data do nguoi dung tu nhap

Node* createNode(int data){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    
    return newNode;
}

// Ham tao ra 1 linked list, nguoi dung nhap so Node mong muon (n)

Node* createLinkedList(int n) {
    int data;

    Node* head = NULL;
    Node* temp = NULL;

    for(int i = 0; i < n; i++) {
        printf("[Node %d] Type your data: ", i + 1);
        scanf("%d", &data);
        
        Node* newNode = createNode(data);

        if(head == NULL){
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    return head;
}

//Ham in ra list ()

void printList(Node* head){
    Node* temp = head;
    while(temp != NULL){
        printf("%d\t", temp->data);
        temp = temp->next;
    }
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

int main(){
    int n;
    printf("How many nodes?: ");
    scanf("%d", &n);
    Node* list = createLinkedList(n);
    append(list, 1331);
    printList(list);
}
