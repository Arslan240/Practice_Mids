//#include <stdio.h>
//#include <string.h>
//
//#define EMPTY -1
//#define SIZE 10
//#define NO_CHARACTER ' '
//
//int top = EMPTY;
//char stack[SIZE];
//
//void push(char value){
//    if(top >=  SIZE){
//        printf("Stackoverflow!!!. Please pop some values.\n");
//        return;
//    }
//
//    top++;
//    stack[top] = value;
//}
//
//char pop(){
//    char popped_char = NO_CHARACTER;
//    if(top <= EMPTY){
//        printf("Stackunderflow!!! Please push some values.\n");
//        return popped_char;
//    }
//
//    popped_char = stack[top];
//    top--;
//    return popped_char;
//}
//
//void reverse_string(char* string, int size){
//    if(size > SIZE){
//        printf("String size is greater than stack. Please enter a smaller string.\n");
//        return;
//    }
//
//    for (int i = 0; i < size; ++i) {
//        push(string[i]); //pushing the characters of string to the stack.
//    }
//
//    for (int i = 0; i < size; ++i) {
//        string[i] = pop(); //assigning the characters in a reverse order.
//    }
//
//}
//int main(){
//    char fg[SIZE];
//    printf("Enter string of characters %d : \n",SIZE);
//    scanf("%s",&fg);
//    int length = strlen(fg);
//
//    printf("Before reversal = %s\n",fg);
//    reverse_string(&fg,length);
//    printf("After reversal = %s\n",fg);
//}