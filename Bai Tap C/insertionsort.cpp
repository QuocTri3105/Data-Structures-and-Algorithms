#include<stdio.h>
#include<stdlib.h>
 
struct LinkedList{
    int data;
    struct LinkedList *next;
 };
 
typedef struct LinkedList *node;
 
node CreateNode(int value){
    node temp;
    temp = (node)malloc(sizeof(struct LinkedList));
    temp->next = NULL;
    temp->data = value;
    return temp;
}
 
node AddTail(node head, int value){
    node temp,p;
    temp = CreateNode(value);
    if(head == NULL){
        head = temp;
    }
    else{
        p  = head;
        while(p->next != NULL){
            p = p->next;
        }
        p->next = temp;
    }
    return head;
}
 
 
node AddHead(node head, int value){
    node temp = CreateNode(value);
    if(head == NULL){
        head = temp;
    }else{
        temp->next = head;
        head = temp;
    }
    return head;
}
 
int Get(node head, int index){
    int k = 0;
    node p = head;
    while(p != NULL && k != index){
        p = p->next;
    }
    return p->data;
}
 
 
 
void Traverser(node head){
    printf("\n");
    for(node p = head; p != NULL; p = p->next){
        printf("%5d", p->data);
    }
}
 
node InitHead(){
    node head;
    head = NULL;
    return head;
}
 
 
node Input(){
    node head = InitHead();
    int n, value;
    do{
        printf("\nNhap so luong phan tu:  ");
        scanf("%d", &n);
    }while(n <= 0);
 
    for(int i = 0; i < n; ++i){
        printf("\nNhap gia tri phan tu thu %d: ",i);
        scanf("%d", &value);
        head = AddTail(head, value);
    }
    return head;
}
 
 
 
int main(){
	int value;
    node head = Input();
    Traverser(head);
    printf("\nNhap gia tri phan tu ban muon them vao dau danh sach: ");
    scanf("%d",&value);
    AddHead(head,value);
    Traverser(head);
 
}
