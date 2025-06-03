/*
#include<iostream>
using namespace std;

class add
{
    int a,b,c;
    public:
    void input()
    {
        cout<<"enter value 1 :"<<endl;
        cout<<"enter value 2 :"<<endl;
        cin>>a>>b;
    }
    void sum()
    {
        c=a+b;
    }
    void show()
    {
        cout<<c;
    }
};
int main()
{
    add ob;
    ob.input();
    ob.sum();
    ob.show();
    return 0;
}
*/
#include<iostream>
using namespace std;
class a
{
    int n;
    public:
    a()
    {
        n=10;
        cout<<n<<endl;
    }
    ~a()
    {
        cout<<"object destroyed"<<endl;
        cout<<n<<endl;
    }
};
int main()
{
    a ob;
    return 0;
}

