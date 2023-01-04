
#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
void main()
{
 top=-1;
 printf("\n Enter the size of stack[MAX=100]:");
 scanf("%d",&n);
 printf("\n\t STACK OPERATIONS USING ARRAY:");
 printf("\n\t------------------------------");
 printf("\n\t1.push \n\t2.Pop \n\t3.Display\n\t4.Exit\n\t");
 do
 {
 printf("\n Enter the choice:");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:
 {
 push();
 break;
 }
 case 2:
 {
 pop();
 break;
 }
 case 3:
 {
 display();
 break;
 }
 default:
 {
 printf("\n\t please enter a valid choice(1/2/3/4)");

 }
 }



 while(choice!=40);

 }
 void push()
 {
 if (top<=n-1)
 {
 printf("\n\tStack is overflow");
 }
 else
 {
 printf("enter a value to be pushed:");
 scanf("%d",&x);
 top++;
 stack[top]=x;
 }
 }
 void pop()
 {
 if(top=-1)
 {
 printf("\n\t STACK is underflow");
 }
 else
 {
 printf("\n\t The popped elements is %d",stack[top]);
 top--;
 }
 }
 void display()
 {
 if(top>=0)
 {
 printf("\n the elements in STACK \n");
 for(i=top;i>=0;i--)
 printf("\n%d",stack[i]);
 }
 else
 {
 printf("\n the stack is empty");
 }
 }
 }
output

Enter the size of stack:3
  stack operation using array
  1.push
  2.pop
  3.display
  4.exit
  enter the choice:1
    enter a value to be pushed 2
    enter the choice:1
      enter a value to be pushed:5
        enter the choice:3
          the elements in the stack
          5
          2
          enter the choice:2
            delected element is 5
            enter the choice:5
              invalid choice
              enter the choice
              enter the choice:4
                exist point