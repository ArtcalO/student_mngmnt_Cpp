#include <iostream>

using namespace std;


typedef struct course
{
    char title[20];
    int credit;
    float mark;
}course;

typedef struct date
{
    int day;
    int month;
    float year;
}course;


/*
##################################  COURSE MANAGEMENT FUNCTIONS #########################################################
*/

// ADDING COURSE FUNCTION
int inputCourseNumber()
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

// DISPLAY COURSE
void displayCourse(cour x)
{
    cout<<"Course Title : "<<x.title<<" \n Credit : "<<x.credit<<" \n Mark obtained :"<<x.mark<<"\n";
}

// CREATE COURSE FUNCTION

course createCourse()
{
    course cr;
    inputCourseTitle(cr.title);
    cr.credit = inputCourseCredit();
    cr.mark = inputCourseMark();

    return cr;
}

// CREATE M NUMBER OF COURSE BETWEEN 6-15

void create_M_nb_Course(course cr[] ,int m)
{
    int i;
    for(i = 0;i<m ;i++)
        {
            cout<<"Course number  "<<i+1<<"\n";
            cr[i] = createCourse();
        }
}

// DISPLAY M NUMBER OF COURSE

void display_M_nb_Course(course cr[],int m)
{
    int i;
    for(i = 0;i<m ;i++)
         displayCourse(cr[i]);
}

/*
##################################  STUDENTS MANAGEMENT FUNCTIONS #########################################################
*/

int inputDay(){
    int x;
    do{
        cout << "Enter a day between 1 and 30 : ";
        cin >> x;
    }while(x<1 || x>30);

    return x;
}

int inputMonth(){
    int x;
    do{
        cout << "Enter a month between 1 and 12 :";
        cin >> x;
    }while(x < 1 || x > 12);

    return x;
}

int inputYear(){
    int x;
    do{
        cout << "Enter a valid year 1981-2020: ";
        cin >> x;
    }while(x <= 1980 || x > 2020);
    return x;
}

date createDate(){
    date dt;
    dt.day = inputDay();
    dt.month = inputMonth();
    dt.year = inputYear();
}

bool isLeap(int year) 
{ 
// Return true if year 
// is a multiple pf 4 and 
// not multiple of 100. 
// OR year is multiple of 400. 
return (((year % 4 == 0) && 
        (year % 100 != 0)) || 
        (year % 400 == 0)); 
}

bool checkDate(date dt){
    
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
