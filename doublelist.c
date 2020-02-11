
#include<stdio.h>
#include<stdlib.h>

struct Node  {
	int data;
	struct Node* next;
	struct Node* prev;
};

struct Node* head; // variable global, puntero a la cabeza

//Crea un nuevo nodo y retorna el puntero que apunta a el
struct Node* GetNewNode(int x) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = x;
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;
}

//Inserta un nodo a la cabeza de la lista
void InsertAtHead(int x) {
	struct Node* newNode = GetNewNode(x);
	if(head == NULL) {
		head = newNode;
		return;
	}
	head->prev = newNode;
	newNode->next = head; 
	head = newNode;
}

//Inserta un nodo al final de la lista
void InsertAtTail(int x) {
	struct Node* temp = head;
	struct Node* newNode = GetNewNode(x);
	if(head == NULL) {
		head = newNode;
		return;
	}
    // Recorre hasta llegar al final de la lista
	while(temp->next != NULL) {
    temp = temp->next;
    } 
    //Una vez llego al final de la lista, inserta al final el nuevo nodo. 
	temp->next = newNode;
	newNode->prev = temp;
}

//Imprime los elementos de la lista iniciando desde la cabeza
void Print() {
	struct Node* temp = head;
	printf("Hacia adelante: ");
	while(temp != NULL) {
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

//Imprime todos los elementos de una lista de atras para adelante
void ReversePrint() {
	struct Node* temp = head;
    //En caso que la lista este vacia
	if(temp == NULL){
        printf("La lista esta vacia\n");
     return; 
     }
	// Recorre hasta el ultimo nodo
	while(temp->next != NULL) {
		temp = temp->next;
	}
	// Estando en el ultimo nodo, recorre la lista por medio del puntero prev
	printf("Hacia atras: ");
	while(temp != NULL) {
		printf("%d ",temp->data);
		temp = temp->prev;
	}
	printf("\n");
}

int main() {

	head = NULL; // Lista vacia, se declara como NULL
	
	// Implementacion de los metodos
	InsertAtTail(2); Print(); ReversePrint();
	InsertAtTail(4); Print(); ReversePrint();
	InsertAtHead(6); Print(); ReversePrint();
	InsertAtTail(8); Print(); ReversePrint();
	
}