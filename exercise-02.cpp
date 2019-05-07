/*nama Nurul Ma'arif
  Kls  B
  case 2
  NPM 14810180040
*/

#include <iostream>

using namespace std;
struct Node {
   char data;
   struct Node *next;
};
struct Node* top = NULL;

void push(char val) {
   Node* newnode = new Node;
   newnode->data = val;
   newnode->next = top;
   top = newnode;
}
void pop() {
   if(top==NULL)
      cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< top->data <<endl;
      top = top->next;
   }
}
void display() {
   struct Node* ptr;
   if(top==NULL)
      cout<<"stack kosong";
   else {
      ptr = top;
      cout<<"isi stack : ";
      while (ptr != NULL) {
         cout<< ptr->data <<" ";
         ptr = ptr->next;
      }
   }
   cout<<endl;
}
int main() {
   char elementBaru;
   string word;

   cout << "input : "; cin >> word;

   for (int i=0; i<=word.length(); i++)
    {
        elementBaru = word[i];
        push(elementBaru);
    }

    display();
}
