#include <iostream>
#include <string>
using namespace std;

class Node{
	public:
		Node* next;
		int temp;
};

void push(Node** head2, int temp2){
	Node* newnode = new Node();
	newnode->temp = temp2;
	newnode->next = (*head2);
	(*head2) = newnode;
}

bool containLoop(Node* head){
	Node* slow = head;
	Node* fast = head;
	
	while(slow != NULL && fast != NULL && fast->next != NULL){
		slow = slow->next;
		fast = fast->next->next;
		if(slow == fast){
			return true;
			break;
		}
		
	}
	return false;
}

int main() 
{ 
	// example in the main
    Node* head = NULL; 
    push(&head, 1); 
    push(&head, 2); 
    push(&head, 3); 
    push(&head, 4); 
	push(&head, 5); 
	push(&head, 6); 

  
    head->next->next->next = head; 
	
    if(containLoop(head)){
		cout << "Ther is a Loop" << endl;
	}
	else{
		cout << "There is no loop" << endl;
	}
  
    return 0; 
}