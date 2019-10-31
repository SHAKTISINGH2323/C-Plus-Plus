/* CPP program to delete node of a linkedlist at nth position*/

#include<iostream>

using namespace std;

struct node{
    int data;
    node* next;
};
struct node* head = NULL;
void insertAtBeg(int data){
    struct node* temp = new node();
    temp->data= data;
    temp->next = head;
    head = temp;
}
void delNth(int n){
    struct node* temp1 = head;
    if(n==1){
        head = temp1->next;
        free(temp1);
        return;
    }
    int i;
    for(i=0;i<n-2;i++){
        temp1 = temp1->next;
    }    
    struct node* temp2 = temp1->next;
    temp1->next = temp2->next;
    free(temp2);

}
void print(){
    struct node* temp = head;
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
}
int main(){
    insertAtBeg(2);
    insertAtBeg(3);
    insertAtBeg(4);
    insertAtBeg(5);
    insertAtBeg(6);
    delNth(3);
    delNth(2); 
    print();
    return 0;
}