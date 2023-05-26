#include <iostream>
using namespace std;

struct node
{
  int data;
  node *next;
};

struct node *head = NULL;



void insertAtTop(int new_data)
{
  struct node *new_node = new node;  
  new_node -> data = new_data;
  new_node -> next = head;
  head = new_node;
  cout << "Value inserted\n";
}

void insertAtTail(int new_data)
{
  struct node *new_node = new node;
  new_node -> data = new_data;
  new_node -> next = NULL;
  if(head == NULL)
  {
    head = new_node;
    return;
  }
  struct node *ptr = head;
  while(ptr->next != NULL)
  {
    ptr = ptr -> next;
  }
  ptr -> next = new_node;
}

void insertAtMiddle(int new_data, int position)
{
  if(position <= 0)
  {
    cout << "Enter valid position\n";
    return;
  }
  if(position == 1 || head == NULL)
  {
    insertAtTail(new_data);
    return;
  }
  struct node *new_node = new node;
  new_node -> data = new_data;
  struct node *ptr = head;
  int count = 1;
  while(ptr!=NULL and count < position - 1)
  {
    ptr = ptr -> next;
    count++;
  }
  if(ptr == NULL)
  {
    cout << "Invalid position\n";
    return;
  }
  
  new_node -> next = ptr -> next;
  ptr -> next = new_node;
}

bool search(int value)
{
  struct node *ptr = head;
  while(ptr != NULL)
  {
    if(ptr -> data == value) return true;
    ptr = ptr -> next;
  }
  return false;
}

void display()
{
  node *ptr = head;
  while(ptr != NULL)
  {
    cout << ptr -> data << "->";
    ptr = ptr -> next;
  }
  cout << endl;
}

int main() 
{
    while(true)
    {
      int option; 
      cout << "Option:\n1.Insert at Top\n2.Insert at Tail\n3.Insert at Middle\n4.Search\n5.Display\n6.Exit\n";
      cin >> option;
      if(option == 1)
      {
        cout << "Enter value: \n";
        int a;
        cin >> a;
        insertAtTop(a);
      }
      else if(option == 2)
      {
        cout << "Enter value: \n";
        int a;
        cin >> a;
        insertAtTail(a);
      }
      else if(option == 3)
      {
        cout << "Enter value: \n";
        int a, p;
        cin >> a;
        cout << "Enter position to insert: \n";
        cin >> p;
        insertAtMiddle(a, p);
      }
      else if(option == 4)
      {
        int a;
        cout << "Enter value to search: \n";
        cin >> a;
        if(search(a)) cout << "Value found\n";
        else cout << "Value not found\n";
      }
      else if(option == 5) display();
      else if(option == 6) return 0;
      else cout << "Enter a valid number\n";
    }
}