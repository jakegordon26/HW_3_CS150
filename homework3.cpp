#include <iostream>

using namespace std;

const int size = 5;

void addition(double *arr, double op){
    for(int i=0;i<size;i++){
        arr[i]+=op;
    }
}

void substraction(double *arr, double op){
    for(int i=0;i<size;i++){
        arr[i]-=op;
    }
}

void multiplication(double *arr, double op){
    for(int i=0;i<size;i++){
        arr[i]*=op;
    }
}

void division(double *arr, double op){
    for(int i=0;i<size;i++){
        arr[i]/=op;
    }
}

void print(const double *arr){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}
int main()
{
    double arr[size];
    cout << "Enter " <<size<<" elements of the array"<< endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"Array is "<<endl;
    print(arr);
    char ch;
    cout<<"Enter the operator"<<endl;
    cin>>ch;
    cout<<"Enter the operand"<<endl;
    double op;
    cin>>op;
    switch (ch){
        case '+':
            addition(arr,op);
            break;
        case '-':
            substraction(arr,op);
            break;
        case '*':
            multiplication(arr,op);
            break;
        case '/':
            division(arr,op);
            break;
        default:
            break;
    }
    cout<<"Array after the operation is "<<endl;
    print(arr);
    return 0;
}
