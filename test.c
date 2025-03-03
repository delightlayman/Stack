#include "stack.h"
#define arrsize 10
void test_stack(Stack* s){
    srand(time(0));
    for(int i=0;i<arrsize;i++){
        StackPush(s,rand());
    }
    Printval(s);
    for(int i=0;i<arrsize;i++){
        printf("top : %d,将其弹出。\n",StackTop(s));
        StackPop(s);
        printf("空 : %d\n",isEmptyStack(s));
        Printval(s);
    }

}
int main(){
    Stack s;
    StackInit(&s);
    test_stack(&s);
}