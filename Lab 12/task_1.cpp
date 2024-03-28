#include<iostream>
using namespace std;

template<class T>
class My_Stack{
    private:
        T st[100];
        T first;
        int top;
    public:
       My_Stack(){
        top = -1;
        }
        void push(T val){
            if(top==-1)
             first =val;
            st[++top]=val;
        }
        T pop(){
            return (st[top--]);
            }
        T peek()
        {
            return first;
        }    
};

int main()
{
    My_Stack <int> si; 
    si.push(10);
    si.push(11);
    si.push(12);
    si.push(13);

    cout<<si.peek()<<endl;
    cout<<si.pop()<<endl;
    cout<<si.pop()<<endl;
    cout<<endl;

    My_Stack <float> sf;

    sf.push(10.7);
    sf.push(11.8);
    sf.push(1.22);
    sf.push(13.1);

    cout<<sf.peek()<<endl;
    cout<<sf.pop()<<endl;
    cout<<sf.pop()<<endl;
    cout<<endl;

    return 0;
}