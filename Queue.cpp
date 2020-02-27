#include <iostream>
using namespace std;
#define QUEUE_SIZE 10

class Queue {
    private:
        int data[QUEUE_SIZE]={};
        //make sure int can hold QUEUE_SIZE
        int front=-1; 
        int back=0;
        
    public:
        void push(int a) {
            //check and treat case where QUEUE_SIZE is exceed
            data[back++]=a;
        }
        
        int pop(){
            //to add check for empty array
            return data[++front];
        }
    
};

int main() {
    
    //create queue
    auto myQueue = Queue();
    
    //add 3 items using push
    myQueue.push(4);
    myQueue.push(13);
    myQueue.push(200);
    
    //remove 3 items using pop
    cout << "First popped item: " << myQueue.pop() << endl;
    cout << "Second popped item: " << myQueue.pop() << endl;
    cout << "Third popped item: " << myQueue.pop() << endl;
    
    return 0;
}
