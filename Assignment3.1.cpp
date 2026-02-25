#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int start, end;
    cout<<"Enter first integer: ";
    cin>>start;

    cout<<"Enter the second integer: ";
    cin>>end;

    while (end < start){
        cout<<"Second integer must be larger than the first. Try again..."<<endl;
        cin>>end;
    }

    for (int i = start; i <= end; i+=5){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}
