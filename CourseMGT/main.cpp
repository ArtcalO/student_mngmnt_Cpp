#include <iostream>

using namespace std;

int integer_between_6_15()
{
    int y;
    do{
        cout<<"Input a number between 6-15 : ";
        cin>>y;
    }while(y<6 || y>15);
    return y;
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
