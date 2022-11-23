#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* next;
};

struct node* insertAtBeg(struct node* head, int data){
	
	struct node* newP = malloc(sizeof(struct node));
	newP -> data = data;
	newP -> next = head;
	head = newP;
	return head;	
	}

struct node* insertAtEnd(struct node* head, int data){

	struct node* newP = malloc(sizeof(struct node));
	newP -> data = data;
	newP -> next = NULL;
	
	struct node* temp = head;
	while (temp -> next != NULL){
		temp = temp -> next;
	}
	temp -> next = newP;
	return head;		
}

struct node* insertAtPos(struct node* head, int pos, int data){
	struct node* newP = malloc(sizeof(struct node));
	newP -> data = data;
	newP -> next = NULL;	
	
	
	struct node* temp = head;
	
	while (pos < 1){
		temp = temp -> next;
		pos--;
	}	
	newP -> next  = temp -> next;
	temp -> next = newP; 
	return head;

}


int main(){
	struct node* head = malloc(sizeof(struct node));
	head -> data = 4;
	head -> next = NULL;
	head = insertAtBeg(head, 3);
	head = insertAtBeg(head, 2);
	head = insertAtEnd(head, 5);
	head = insertAtPos(head, 2, 0);
	struct node* tempTraverse = head;
	
	while(tempTraverse != NULL){
		printf("%d", tempTraverse -> data);
		tempTraverse = tempTraverse -> next;
	}
	
	}
