#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter the marks";
    cin>>marks;
    char grade;
    if(marks<20)
    grade='F';
    else if(marks<=40)
    grade='E';
    else if(marks<=50)
    grade='D';
    else if(marks<=60)
    grade='C';
    else if(marks<=80)
    grade='B';
    else
    grade= 'A';
    cout<<"Grade"<<grade<<endl;
    return 0;
}
