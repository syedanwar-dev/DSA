// class representing a stack
#include <iostream>
using namespace std;

class stack {
    public :
    int arr[5];
    int top = - 1;


    //methode to push element
    void push (int x){
        if (top == 4){
            cout << "stack overflow\n";
            return;
        }
        arr [++top] = x;
    }

    // methode to pop element
    void pop (){
        if(top == -1){
cout << "stack underflow\n";
return;

        }
        top --;
}

// methode to display a sttack
void display (){
    for(int i =top; i >=0; i--){
cout << arr[i]<< " ";
    }
    cout <<endl;
}
};
int main (){
    // creating a stack object 
    stack s;
    //performing operations
    s.push (10);
    s.push(20);
    s.push(30);
    cout << "stack elements: ";
    s.display ();

    s.pop();
    cout <<"after pop:";
    s.display();
    return 0;

}

