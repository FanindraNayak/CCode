#include <stdio.h>
#include<string.h>

#define MAXSIZE 800 

// Defininging Stack
int stack[MAXSIZE];    

// Defininging Top
int top = -1;            

// Defining if the stack is empty or not
int isempty() {

   if(top == -1)
      return 1;
   else
      return 0;
}


// Checking if the satack is full or not
int isfull() {

   if(top == MAXSIZE)
      return 1;
   else
      return 0;
}


// Checking the top element of the Stack
int peek() {
   return stack[top];
}

// Writing pop function i.e deleting the topmost element
void pop() {
   int data;
   if(!isempty()) {
      data = stack[top];
      printf("\n%d -> deleted\n",data);
      top = top - 1;   
      
   } else {
      printf("Could not retrieve data, Stack is empty.\n\n");
   }
}


// Writing the push function or function for entering element
void push(int data) {

   if(!isfull()) {
      top = top + 1;   
      stack[top] = data;
   } else {
      printf("Could not insert data, Stack is full.\n");
   }
}


// Writing the display function to display the numbers entered
void display(){
    if(!isempty()){
        int i=0;
        printf("Items in the Stacks are.\n");
        for(i=top;i>=0;i--){
            printf("%d item -> %d\n",i+1,stack[i]);
        }
    }
    else{
        printf("Empty Stack");
    }
}

int main() {
   // push items on to the stack 
   push(3);
   push(5);
   push(55);
   push(50);
   push(450);
//   Displaying elements that are pushed to top
   display();
   
//  Deleting tthe topmost element from stack
   pop();
   
   printf("\n");
   
   
//   Displaying elements that are pushed to top
   display();

  
   
   return 0;
}