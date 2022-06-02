#include <iostream>
#include <string>
#include <math.h>
#include <conio.h>
using namespace std;
int main()
{
    system("color F");
    cout<<"\t\t\tPythagorean triangle"<<endl<<endl;
    float a,b,c;
    cout<<"Enter the first leg:"<<endl;
    cin>>a;
    cout<<"Enter the second leg:"<<endl;
    cin>>b;
    c=sqrt(pow(a,2)+pow(b,2));
    system("cls");
    cout<<"The hypotenuse is:"<<"\n"<<c<<endl<<endl;
    cout<<"\t"<<"_\\"<<endl;
    cout<<"\t"<<"___\\"<<endl;
    cout<<"\t"<<"_____\\"<<endl;
    cout<<"\t"<<"_______\\"<<endl;
    cout<<"\t"<<"_________\\"<<endl;
    cout<<"\t"<<a<<"__________"<<c<<endl;
    cout<<"\t"<<"_____________\\"<<endl;
    cout<<"\t"<<"_______________\\"<<endl;
    cout<<"\t"<<"_________________\\"<<endl;
    cout<<"\t"<<"_________"<<b<<"__________\\"<<endl<<endl;
    cin.ignore();
    getch();
    return 0;
}