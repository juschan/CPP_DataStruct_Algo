#include <iostream>
using namespace std;
#define STACK_SIZE 100

class Stack {
    private:
        int data[STACK_SIZE]={};
        int num=0; //make sure int can hold STACK_SIZE
    
    public:
        void push(int a) {
            data[num++]=a;
        }
        
        int pop(){
            return data[--num];
        }
    
};

int main() {
    
    //create stack
    auto myStack = Stack();
    
    //add 3 items using push
    myStack.push(4);
    myStack.push(13);
    myStack.push(200);
    
    //remove 3 items using pop
    cout << "First popped item: " << myStack.pop() << endl;
    cout << "Second popped item: " << myStack.pop() << endl;
    cout << "Third popped item: " << myStack.pop() << endl;
    
    return 0;
}
