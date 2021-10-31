////
//// Created by Arslan on 25/10/2021.
////
//
//#include <stdio.h>
//#include <stdbool.h>
//#include <string.h>
//#define EMPTY -1
//#define SIZE 10
//#define NO_CHARACTER ' '
//
//
//void push(char value, char* stackPtr, int* top, int size){
//    if(*top >= size - 1){
//        printf("Stackoverflow!!!. Pop some values\n");
//        return;
//    }
//    (*top)++;
//    stackPtr[*top] = value;
//    printf("Pushed value from the stack = %c\n",stackPtr[*top]);
//}
//
//char pop(char* stackPtr, int* top, int size){
//    char popped_char = NO_CHARACTER;
//    if(*top <= EMPTY){
//        printf("Stackunderflow!!! Push some values\n");
//        return popped_char;
//    }
//    else {
//        popped_char = stackPtr[*top];
//        (*top)--;
//    }
//    printf("Popped char is %c\n", popped_char);
//    return popped_char;
//}
//
//void print_stack(char* stackPtr, int top){
//    printf("{ ");
//    for (int i = top; i >= 0; --i) {
//        printf("%c",stackPtr[i]);
//    }
//    printf(" }");
//}
//
//bool is_right_bracket(char character){
//    if(character == ')'){
//        return true;
//    }
//    else if(character == '}'){
//        return true;
//    }
//    else if(character == ']'){
//        return true;
//    }
//    return false;
//}
//
//bool check_parenthesis_balance(char right_bracket,char* stackPtr, int* top, int size){
//
//    bool isRight = false;
//    if(right_bracket == ')'){
//
//            if(stackPtr[*top] != '('){ //it is on top if it doesn't complete the pair then it means that the expression is imbalanced because right bracket has been encountered already.
//
//                printf("( is misplaced\n");
//                return isRight = false;
//
//            }
//            else if(stackPtr[*top] == '('){
//
//                pop(stackPtr, top,size);
//                isRight = true;
//                return isRight;
//            }
//    }
//    else if(right_bracket == '}'){
//
//        if(stackPtr[*top] != '{'){
//
//            printf("{ is misplaced\n");
//            return isRight = false;
//
//        }
//        else if(stackPtr[*top] == '}'){
//
//            pop(stackPtr, top,size);
//            isRight = true;
//            return isRight;
//        }
//
//    }
//    else if(right_bracket == ']'){
//
//        if(stackPtr[*top] != '['){
//
//            printf("[ is misplaced\n");
//            return isRight = false;
//
//        }
//        else if(stackPtr[*top] == '['){
//
//            pop(stackPtr, top,size);
//            isRight = true;
//            return isRight;
//        }
//
//    }
//
//}
//
//bool check_expression_balance(char input[],int input_size, char* stackPtr, int* top, int size){
//    bool is_balanced = false;
//    for (int i = 0; i < input_size; ++i) {
//
//        if(!is_right_bracket(input[i])){ //if the element at index i isn't right bracket then we just push it to the stackPtr.
//            push(input[i],stackPtr,top,size);
//        }
//        else{
//
//            if( check_parenthesis_balance(input[i],stackPtr,top,size) != true ){
//                printf("The expression is imbalanced\n");
//                is_balanced = false;
//                return is_balanced;
//            }
//        }
//    }
//
//    printf("The brackets are balanced\n");
//
//}
//
//
//int main(){
//    char stack[] = "{()[]}";
//    int top_stack = EMPTY;
////    push('d', &stack,&top_stack,SIZE);
////    push('c', &stack, &top_stack, SIZE);
////    push('j', &stack, &top_stack, SIZE);
////    printf("Stack is %s\n",stack);
////    pop(&stack,&top_stack,SIZE);
////    pop(&stack,&top_stack,SIZE);
////    pop(&stack,&top_stack,SIZE);
////
////    printf("Top stack is %d\n",top_stack);
////    print_stack(&stack,top_stack);
//
//    check_expression_balance(stack,strlen(stack),&stack,&top_stack,SIZE);
//}