#include <iostream>

using namespace std;

// ADDING COURSE FUNCTION
int inputCourse()
{
    int y;
    do{
        cout<<"Input a number between 6-15 : ";
        cin>>y;
    }while(y<6 || y>15);
    return y;
}

// ADDING COURSE TITLE FUNCTION

void inputCourseTitle(char x [])
{
    cout<<"entrez nom du cour :";
    cin>>x;
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
