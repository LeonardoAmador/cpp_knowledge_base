#include <iostream>
#include <locale.h>

using namespace std;

void AverageResult(float ClassMedia);

struct Student{
    /* data */
    string name;
    int grade1;
    int grade2;
};


int main(){
    setlocale(LC_ALL, "Turkish");

    /* code */
    int NumberStudents, sum = 0;
    float ClassAverage;

    cout<<"Enter the number of students: ";
    cin>>NumberStudents;
    cout<<"\n";

    Student student[NumberStudents];

    for(int i = 0; i < NumberStudents; i++){
        cout<<"Enter the "<<i<< " student's name: ";
        cin>>student[i].name;
        cout<<"Enter the first grade: ";
        cin>>student[i].grade1;
        cout<<"Enter the second grade: ";
        cin>>student[i].grade2;

        cout<<"\n";
        system("clear||cls");
        
        sum+=(student[i].grade1 + student[i].grade2);
    }

    ClassAverage = ((sum / NumberStudents) / 2);
    
    for(int i = 0; i < NumberStudents; i++){
        cout<<"\n"<<student[i].name<<"\n";
        cout<<student[i].grade1<<" ";
        cout<<student[i].grade2<<" ";

        cout<<"\n";
    }

    cout<<"\n";
    AverageResult(ClassAverage);

    return 0;
}

void AverageResult(float ClassMedia){
    if(ClassMedia < 7){
        cout<<"Class Bellow Average"<<endl;
    }else{
        cout<<"Class Above Averege"<<endl;
    }
    cout<<"\n";
    cout<<"The avegare is: "<<ClassMedia;
}
