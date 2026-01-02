
#include <iostream>
using namespace std;

class Node
{
public:

	int data;			// making members public so that printList can access these
	Node *next;

	Node(int newData)
	{
		this->data = newData;
		next = NULL;
	}
};

void printList(Node *head)
{
	Node *current = head;		// now current and head both pointing to the already existing Node
	while(current != nullptr)		// Looping until current not pointing to anything
	{
		cout << current->data << "\t";
		current = current->next;			// current now pointing to the next Node if available otherwise to NULL
	}
	cout << endl;
}

void insertAtTheEnd(Node *head)
{
	Node *newNode = new Node(2);		// created a new Node to be inserted
	Node *current = head;				
	while (current->next != nullptr)				// Mind the condition
	{
		current = current->next;
	}
	
	current->next = newNode;			// If condition would have not being this, this would be like NULL = newNode which
									// results as the Segmentation fault
}

Node* insertAtThebegining(Node *head)
{
	Node *newNode = new Node(3);		// created a new Node to be inserted
	newNode->next = head;				// newly created Node's next is pointing to the head now
	head = newNode;					// newly created Node is made the head. So head should always point to the first 															// element in the list
	return head;
}

Node* insertAtPosition(Node *head, int pos)
{
	Node *current = head;
	if (pos < 1 /* || pos > (size+1)*/ )
		cout << "Invalid position" << endl;

	if (pos ==1)
	{
		// to be completed
	}
	else
	{
		for (int i =1; i < (pos -1); i++)
			current = current->next;
		
		Node *newNode = new Node(4);
		newNode->next = current->next;
		current->next = newNode;
	}
	
	return head;
}

Node* deleteFromTheEnd(Node* head)
{
	if (head == nullptr)
		return nullptr;	
	
	if (head->next == nullptr)
	{
		delete head;
		return nullptr;
	}

	Node* secondLast = head;
	while (secondLast->next->next != nullptr)
		secondLast = secondLast->next;

	delete(secondLast->next);
	secondLast->next = nullptr;

	return head;
}

Node* deleteFromTheBeginning(Node* head)
{
	if (head == nullptr)
		return nullptr;

	Node* temp = head;
	head = head->next;
	delete temp;
	return head;
}

Node* deleteFromposition(Node* head, int pos)
{
	if (head == nullptr || pos < 1 )
		return head;

	if (pos == 1)
	{
		head = deleteFromTheBeginning(head);
		return head;
	}
	
	Node* current = head;
	for (int i = 1; i < (pos - 1); i++)
		current = current->next;

	if (current->next == nullptr || current == NULL)
		return head;
	
	Node* temp = current->next;
	current->next = current->next->next;
	delete temp;
	return head; 
}

Node* reverseList(Node* head)
{
	Node* current = head, *previous = nullptr, *next;

	while(current != nullptr)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}

	return previous;
}


int main()
{
	Node *head = NULL;
	
	Node *newNode = new Node(1);			// Created a Node
	if(head == nullptr)
	{
		head = newNode;					// head and newNode both pointing to the newly created Node
	}

	printList(head);						// Traversing the list

	insertAtTheEnd(head);					// Inserting element at the end
	printList(head);

	head = insertAtThebegining(head);			// Inserting element at the beginning 
	printList(head);

	head = insertAtPosition(head, 2);			// Inserting element at a specific position
	printList(head);

	head = deleteFromTheEnd(head);			// Deleting from the end
	printList(head);

	head = deleteFromTheBeginning(head);		// Deleting from the beginning
	printList(head);

	head = insertAtPosition(head, 2);
	printList(head);
	head = deleteFromposition(head, 2);		// Deletion from a specific position
	printList(head);

	head = reverseList(head);				// Reversing a list
	printList(head);

	return 0;
}




