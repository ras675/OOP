#include<iostream>
using namespace std;

template<class T>
class My_Stack{
    private:
        T st[100];
        T first;
        int top;
    public:
    class Empty{};
       My_Stack(){
        top = -1;
        }
        void push(T val){
            if(top==-1)
             first =val;
            st[++top]=val;
        }
        T pop() {
      if(top < 0)
         throw Empty();
      return st[top--];
}
        T peek()
        {
            return first;
        }    
};

int main()
{
    My_Stack <int> si; 
    try{
    si.push(10);
    si.push(11);
    si.push(12);
    si.push(13);

    cout<<si.peek()<<endl;
    cout<<si.pop()<<endl;
    cout<<si.pop()<<endl;
    cout<<si.pop()<<endl;
    cout<<si.pop()<<endl;
    cout<<si.pop()<<endl;
    }
    catch(My_Stack<int>::Empty)
      {
      cout << "stack is Empty" << endl;
      }
     My_Stack <char> sc;
    try{
    sc.push('a');
    sc.push('b');
    sc.push('c');


    cout<<sc.peek()<<endl;
    cout<<sc.pop()<<endl;
    cout<<sc.pop()<<endl;
    cout<<sc.pop()<<endl;
    cout<<sc.pop()<<endl;
    }
    catch(My_Stack<char>::Empty)
      {
      cout << "stack is Empty" << endl;
      }
    return 0;
}