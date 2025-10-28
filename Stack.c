#include<stdio.h>

int MAXSIZE = 8;
int stack[8];
int top = -1;

/* cheak if the stack is empty */
int isempty(){
    if(top == -1)
        return 1;
    else
        return 0;
    }

/* cheak if the stack is empty */
int isfull(){
    if(top == MAXSIZE)
        return 1;
        else
            return 0;
    }

/*Function to return the topmost element in the stack*/
int peek(){
     return stack[top];}

/*Function to delete from stack*/
int pop(){
    int data;
    if(!isempty()){
        data = stack[top];
        top = top -1;
        return data;
    }else{
        printf("Sorry! Could not retrive data, becouse stack is empty./n");

}
}

/*Function to add data in stack*/
int push(int data){
    if(!isempty())
        top = top +1;
        stack[top] = data;
        }else{
        printf("Could not inser the data in stack, The stack is Full./n");
        }

/* Main Function.*/
int main()
{
    push(77);
    push(78);
    push(70);
    push(97);
    push(37);
    push(38);
    push(889);
    push(372);
    push(378);




    return 0;
}
