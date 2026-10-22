#include<iostream>

using namespace std;

class task
{
    public:
    string title;

    void display()
    {
        cout<<""<<title;
    }
};

int main()
{
    task a;
    a.title = "work";
    a.display();
    return 0;
}

