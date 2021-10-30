///* ===============================================================================
// *      Q# Reverse First K elements of Queue
// * ===============================================================================
// */
//
//#include <stdio.h>
//#include <string.h>
//#define SIZE 10
//#define EMPTY -1
//#define SIMPLE_QUEUE 1
//#define TEMP_QUEUE 2
//#define NO_CHARACTER ' '
//
//int front_main = EMPTY;
//int rear_main = EMPTY;
//int front_temp = EMPTY;
//int rear_temp = EMPTY;
//int stack_top = EMPTY;
//
//char queue[SIZE];
//char temp_queue[SIZE];
//char temp_stack[SIZE];
//
//void enqueue(char value,int queue_type){
//
//    if(queue_type == SIMPLE_QUEUE) {
//
//        if (front_main == 0 && rear_main >= SIZE - 1) {
//            printf("Queueoverflow!!! Please dequeue some values from simple_queue then try again.\n");
//            return;
//        } else if (front_main == EMPTY && rear_main == EMPTY) {
//            front_main = 0;
//            rear_main = 0;
//            queue[rear_main] = value;
//        } else if (front_main != EMPTY && rear_main >= front_main) {
//            rear_main++;
//            queue[rear_main] = value;
//        }
//    }
//    else if(queue_type == TEMP_QUEUE){
//
//        if (front_temp == 0 && rear_temp >= SIZE - 1) {
//            printf("Queueoverflow!!! Please dequeue some values from temp_queue then try again.\n");
//            return;
//        } else if (front_temp == EMPTY && rear_temp == EMPTY) {
//            front_temp = 0;
//            rear_temp = 0;
//            temp_queue[rear_temp] = value;
//        } else if (front_temp != EMPTY && rear_temp >= front_temp) {
//            rear_temp++;
//            temp_queue[rear_temp] = value;
//        }
//
//    }
//}
//
//char dequeue(int queue_type) {
//    char dequeued_char = NO_CHARACTER;
//    if (queue_type == SIMPLE_QUEUE) {
//
//        if (front_main == EMPTY) {
//            printf("Queueunderflow!!! enqueue some values.\n");
//            return dequeued_char;
//        } else if (front_main == rear_main) {
//            dequeued_char = queue[(front_main)];
//            front_main = EMPTY;
//            rear_main = EMPTY;
//
//        } else if (front_main >= 0) {
//            dequeued_char = queue[front_main];
//            front_main++;
//        }
//        return dequeued_char; //returnin dequeued_char.
//
//    }
//    else if(queue_type == TEMP_QUEUE){
//
//        if (front_temp == EMPTY) {
//            printf("Queueunderflow!!! enqueue some values.\n");
//            return dequeued_char;
//        } else if (front_temp == rear_temp) {
//            dequeued_char = temp_queue[(front_temp)];
//            front_temp = EMPTY;
//            rear_temp = EMPTY;
//
//        } else if (front_temp >= 0) {
//            dequeued_char = temp_queue[front_temp];
//            front_temp++;
//        }
//        return dequeued_char; //returnin dequeued_char.
//
//    }
//}
//
//void push(char value){
//    if(stack_top >= SIZE){
//        printf("Stackoverflow!!! Please pop some values.\n");
//        return;
//    }
//    else {
//        stack_top++;
//        temp_stack[stack_top] = value;
//    }
//}
//
//char pop(){
//    char poppped_char = NO_CHARACTER;
//    if(stack_top <= EMPTY){
//        printf("Stackunderflow!!! Please push some values\n");
//        return poppped_char;
//    }
//    else{
//        poppped_char = temp_stack[stack_top];
//        stack_top--;
//    }
//    return poppped_char;
//}
//
//void modify_queue(int k){
//    int queue_size = strlen(queue);
//    if(k <= queue_size){ //if k is less or equal to queue_size then we start dequeuing values from the queue and then push them to a stack along. When popping from stack it gives the all values in reverse order.
//        for (int i = 0; i < k; ++i) {
//            char temp_char = dequeue(SIMPLE_QUEUE);
//            push(temp_char);
//        }
//        //at this point all the queue upto k is pushed to stack.
//
//        for (int i = 0; i < k; ++i) { //in this loop we pop values from the stack and enqueue to the temp_queue. Then we pop values and enqueue to the temp_queue, this will have them added to queue in a reversed order.
//            enqueue(pop(),temp_queue);
//        }
//
//        if(k != queue_size){ //if k is not equal to size which means that all the elements of the queue are not supposed to be reversed. Only upto k. then after k we need those elements in the same order.
//            int length = strlen(queue);
//            //queue is not the same because we have dequeued values from it. So, we can just iterate over it because it only have values that comes after k.
//            for (int i = 0; i < length; ++i) {
//                enqueue(dequeue(SIMPLE_QUEUE),TEMP_QUEUE); //we dequeue left values from the original queue and enqueue to the temp queue which have reversed values.
//            }
//
//        }
//    }
//}
//
//int main(){
//    int k = 5; //characters that need to be reversed.
//    enqueue('a',SIMPLE_QUEUE);
//    enqueue('b',SIMPLE_QUEUE);
//    enqueue('c',SIMPLE_QUEUE);
//    enqueue('d',SIMPLE_QUEUE);
//    enqueue('e',SIMPLE_QUEUE);
//    printf("Simple queue is %s\n",queue);
//
//    modify_queue(k);
//    printf("Modified queue is %s\n",temp_queue);
//
//
//}
//
//// { Driver Code Starts
//// Initial Template for C
//
//#include <limits.h>
//#include <stdio.h>
//#include <stdlib.h>
//
//// A structure to represent a queue
//
////struct Queue {
////    int front, rear, size;
////    unsigned capacity;
////    int* array;
////};
////int size(struct Queue* queue);
////// function to create a queue
////// of given capacity.
////// It initializes size of queue as 0
////struct Queue* createQueue(unsigned capacity) {
////    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
////    queue->capacity = capacity;
////    queue->front = queue->size = 0;
////
////    // This is important, see the enqueue
////    queue->rear = capacity - 1;
////    queue->array = (int*)malloc(queue->capacity * sizeof(int));
////    return queue;
////}
////
////// Queue is full when size becomes
////// equal to the capacity
////int isFull_Queue(struct Queue* queue) {
////    return (queue->size == queue->capacity);
////}
////
////// Queue is empty when size is 0
////int isEmpty_Queue(struct Queue* queue) {
////    return (queue->size == 0);
////}
////
////void enqueue(struct Queue* queue, int item) {
////    if (isFull_Queue(queue)) return;
////    queue->rear = (queue->rear + 1) % queue->capacity;
////    queue->array[queue->rear] = item;
////    queue->size = queue->size + 1;
////}
////
////// Function to remove an item from queue.
////// It changes front and size
////void dequeue(struct Queue* queue) {
////    if (isEmpty_Queue(queue)) return;
////    int item = queue->array[queue->front];
////    queue->front = (queue->front + 1) % queue->capacity;
////    queue->size = queue->size - 1;
////}
////
////// Function to get front of queue
////int front(struct Queue* queue) {
////    if (isEmpty_Queue(queue)) return INT_MIN;
////    return queue->array[queue->front];
////}
////
////
////// } Driver Code Ends
////// User function Template for C
////
/////*=================================================================================
////    IMPLEMENTING STACK
////  =================================================================================
////*/
////
////#define N 1000
////#define EMPTY -1
////
////int stack[N];
////int top = EMPTY;
////
////void push(int value){
////    if(top >= N){
////        printf("Stackoverflow!!! Please pop some values.\n");
////        return;
////    }
////    top++;
////    stack[top] = value;
////    printf("Pushed values is : %d\n",stack[top]);
////
////}
////
////int pop(){
////    if(top <= EMPTY){
////        printf("Stackunderflow!!! Please push some values\n");
////        return EMPTY;
////    }
////
////    int popped_value = stack[top];
////    top--;
////    return popped_value;
////}
////
////void populate_stack_until_k(struct Queue* queue,int k){
////
////    for(int i = 0; i < k; i++){
////        push(queue->array[i]); //here we are pushing the
////        printf("Inside populate_stack_until_k, the dereferenced value is : %d\n",queue->array[i]);
////    }
////}
////
////struct Queue *modifyQueue(struct Queue *queue, int n, int k) {
////    // code here
////    if(queue->front == 0 && queue->rear > 0){
////
////        if(k >= size(queue)){ //if the number passed isn't greater than the actual number of elements present in the queue.
////
////        }
////    }
////}
////
////int size(struct Queue* queue){
////    if( queue->front >= 0 && queue->rear >= queue->front){
////        int length = 0;
////        for(int i=queue->front; i <=queue->rear; i++){
////            length++;
////        }
////    }
////    return -1;
////}
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////// { Driver Code Starts.
////
////// Driver program to test above functions./
////int main() {
////    int test;
////    scanf("%d", &test);
////    while (test--) {
////        int n = 10, k = 5;
//////        scanf("%d %d", &n, &k);
////
////        struct Queue* queue = createQueue(n + 5);
////
////        for (int i = 0; i < n; i++) {
////            int data;
////            printf("Enter value : ");
////            scanf("%d", &data);
////            enqueue(queue, data);
////        }
////
////        struct Queue* queue_ans = modifyQueue(queue, n, k);
////
////        while (n--) {
////            int data = front(queue_ans);
////            dequeue(queue_ans);
////            printf("%d ", data);
////        }
////
////        printf("\n");
////    }
////}
////// } Driver Code Ends