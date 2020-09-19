#include <iostream>

using namespace std;


typedef struct course
{
    char title[20];
    int credit;
    float mark;
}course;


/*
##################################  COURSE MANAGEMENT FUNCTIONS #########################################################
*/

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
    cout<<"Put course title :";
    cin>>x;
}

// ADDING COURSECREDIT FUNCTIOIN

int inputCourseCredit()
{
    int x;
    do
    {
        cout<<"Enter course credit between 2 and 5 :";
        cin>>x;
    }while(x < 2 || x >5);
return x;
}

// ADDING COURSEMARK FUNCTION

float inputCourseMark()
{
    float x;
    do
    {
        cout<<"Enter course mark between 0 and 20 :";
        cin>>x;
    }while(x< 0 || x >20);
    return x;
}


/*
##################################  STUDENTS MANAGEMENT FUNCTIONS #########################################################
*/

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
