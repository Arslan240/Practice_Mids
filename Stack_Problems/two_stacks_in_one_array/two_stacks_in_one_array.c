////
//// Created by Arslan on 24/10/2021.
//// Implement two stacks in one array.
//// One stack starts from left from index = 0, called left_stack.
//// where as other stack starts from right from index = SIZE - 1, called right_stack
//// In this implementation we don't restrict the size of any stack. It just grows if there is space in array as a whole.
//// Which means stack grows if a value is pushed to it, stackoverflow only occurs when both stacks' tops cross each other.
////
////
//#include <stdio.h>
//#define SIZE 10
//#define EMPTY -1
//#define LEFT_STACK 2
//#define RIGHT_STACK 1
//#define TOP_RIGHT_STACK 0
//#define NO_CHARACTER ' '
//
//char array[SIZE];
//int top_left = EMPTY;
//int top_right = SIZE; //we'll subtract one from it to make last index of array.
//
//
//void push(char value, int stack_type){
//
//    if(stack_type == LEFT_STACK){
//
//        if(top_left >= SIZE - 1){
//            printf("Stackoverflow!!! Pop some values.\n");
//            return;
//        }
//        else if(top_left + 1 == top_right){ //here we check if we increase top_left by 1, it doesn't become equal to the top_right i.e top of stack from right side.
//            printf("Stackoverflow!!! Left stack is overflowing due to right stack\n");
//            return;
//        }
//        else{
//            top_left++;
//            array[top_left] = value;
//            printf("Value pushed to left stack\n");
//        }
//
//    }
//    else if(stack_type == RIGHT_STACK){
//
//        if(top_right <= TOP_RIGHT_STACK){  //TOP_RIGHT_STACK = 0
//            printf("Right Stackoverflow!!! Pop some values first\n");
//            return;
//        }
//        else if(top_right - 1 == top_left){ //because we are moving in descending order for right stack.
//            printf("Right Stackoverflow!!! Because of left stack\n");
//            return;
//        }
//        else{
//            top_right--; //we move backward from the end of the array index.
//            array[top_right] = value;
//            printf("Value is pushed to right stack\n");
//        }
//
//    }
//}
//
//char pop(int stack_type){
//    char popped_char = NO_CHARACTER;
//
//    if(stack_type == LEFT_STACK){
//
//        if(top_left <= EMPTY){
//            printf("Stackunderflow!!! Please push some values\n");
//            return popped_char;
//        }
//        else{
//            popped_char = array[top_left];
//            top_left--;
//            printf("Value is popped from left stack\n");
//        }
//
//    }
//    else if(stack_type == RIGHT_STACK){
//
//        if(top_right >= SIZE){
//            printf("Stackunderflow!!! Please push some values\n");
//            return popped_char;
//        }
//        else{
//            popped_char = array[top_right];
//            top_right++;
//            printf("Value is popped from right stack\n");
//        }
//    }
//
//    return popped_char;
//}
//
//int main(){
//
//    push('a',LEFT_STACK);
//    push('b',RIGHT_STACK);
//    push('c',LEFT_STACK);
//    push('d',RIGHT_STACK);
//    push('e',LEFT_STACK);
//    push('f',RIGHT_STACK);
//    push('g',RIGHT_STACK);
//    push('h',LEFT_STACK);
//    push('i',RIGHT_STACK);
//    push('j',LEFT_STACK);
//    push('k',RIGHT_STACK);
//
//    for (int i = top_left; i >= 0; --i) {
//        printf("%c",array[i]);
//    }
//    printf(" ");
//    for (int i = top_right; i <= SIZE - 1; ++i) {
//        printf("%c",array[i]);
//    }
//    printf("\n");
//
//}
