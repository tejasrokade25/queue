#include <iostream>

using namespace std;

class queue
{
    
        public;
    Node * top;
    LL l1.
    queqe()
    {
        top=NULL 
        
    }
    void enquenue(int value)
    {   l1.insertAt(value);
    
    top=l1.head;
    }
    void dequenue()
    {
        l1.deleteAt(1);
        top=l1.head;
    }
    int isEmpty()
    {if top==NULL) return 1;
    return 0;
    }
    int size(){
        return l1.countItems()
    };
    int main(){
        queue Q;
        Q.enqueue(4)
        Q.enqueue(3)
        Q.enqueue(2)
        Q.enqueue(1)
        Q.l1,display();
        Q.dequeue();
        Q.l1,display();
        cout<<"size="<<Q.size()<<endl;
        cout<<"Is it empty:"<<Q.isEmpty()<<endl;
    }
        
    
