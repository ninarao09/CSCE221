#include <iostream>
#include <string>
using namespace std;

struct Node { 
   int data; 
   struct Node *next; 
};


Node* push(Node* head, int new_data) { 
	
	Node* temp = new Node();
	
	temp->data = new_data;
	temp->next = head;
	head = temp;
	
	return temp;
}

void print(Node* head) { 
  
	Node* temp = new Node();
	temp = head;
		
	while(temp != NULL){ 
		cout << temp->data << "->";
		temp = temp->next;
	}
	cout << "NULL" << endl;
}

bool isEmpty(Node* head) {

    if(head != NULL){
	   cout << "Not empty" << endl;
    }
    else{
	  cout << "empty" << endl;
    }

}

int size(Node* head) {
	
	int size = 0;
	
	Node* temp = new Node();
	temp = head;
	
	while(temp != NULL){
		size++;
		temp = temp->next;	
	}
	return size;

}


int top(Node* head) {
	Node* temp = new Node();
	temp = head;
	int top;
	
	if(temp != NULL){
		top = temp->data;
	}
	
	return top;
}

Node* pop(Node* head) {
	   /*
    * Implement pop function to remove the top element of stack
    *
    * input parameter:   pointer to head of stack
    * returns: Return the new head pointer of the stack after pop
    *
    * E.g.  If stack was 4->3->2->1->NULL before pop with 
    *       head pointing to 4, then after pop, stack should
    *       be 3->2->1->NULL with head pointing to 3
   */
   	Node* temp = new Node();
	temp = head;
	head = head->next;
	delete temp;
	
	return head; 
}

Node* middle_element(Node* head) {
   /* 
    * input parameter:   pointer to head of linked list
    * returns: Return the middle element of linked list
    *
    * E.g. For 4->3->2->1->NULL, return node with value 2. (Even size)
    *      For 5->4->3->2->1->NULL, return node with value 3 (Odd size)
   */
   	
	
	int size = 0;
	
	Node* temp = new Node();
	temp = head;
	
	while(temp != NULL){
		size++;
		temp = temp->next;	
	}
	
	
	int middle = size/2;
	for(int i=0; i<middle; ++i){
		head = head->next;
	}
	
	return head;
	
}
	


Node* remove_middle_element(Node* head, Node* middle_node) {
   /* 
    * input parameter:   pointer to head of linked list,
    *                    pointer to the node to remove
    * returns: Return the head pointer
    *
    * E.g. For 5->4->3->2->1->NULL, after this operation the
    *      linked list will become 5->4->2->1->NULL
   */
	
	Node* prev = new Node();
	int size = 0;
	
	Node* temp = new Node();
	temp = head;
	
	while(temp != NULL){
		size++;
		temp = temp->next;	
	}
	
	
	int middle = size/2;
	
	for(int i=0; i<middle-1; ++i){
		prev = head->next;
	}
	
	
	prev->next = middle_node->next;
	
	
	delete middle_node;

	return head;

}


int main(){
	
	Node* head = NULL; 
	Node* middle_node = NULL; 
	
	head = push(head, 1);
	head = push(head, 2);
	head = push(head, 3);
	head = push(head, 4);
	head = push(head, 5);





	

	print(head);
	middle_node = middle_element(head);
	
	head = remove_middle_element(head, middle_node);
	print(head);


}