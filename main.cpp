//THIS PROGRAM CALCULATES THE GPA AND THE CGPA FOR THREE COURSE UNITS.
#include <bits/stdc++.h>
using namespace std;
    int main()
    {
        //FOR COURSE UNIT ONE
            float total_marks1;
            float obtained_marks1;
            float percentage1;
            float GPA1;

        cout<<"Please enter the total marks for course unit one: ";

        cin>>total_marks1;

        cout<<"please enter the marks you obtained in course unit one: ";

        cin>>obtained_marks1;

            percentage1 = 100*(obtained_marks1/total_marks1);

        cout<<"The percentage mark is: "<<percentage1<<"%"<<endl;

            GPA1=(percentage1/100)*5;

        cout<<"The GPA is equal to: "<<GPA1<<endl;
        cout<<endl;

       //FOR COURSE UNIT TWO
        float total_marks2;
        float obtained_marks2;
        float percentage2;
        float GPA2;
        cout<<"please enter the total marks for course unit two: ";

            cin>>total_marks2;

            cout<<"please enter the marks you obtained in course unit two: ";

            cin>>obtained_marks2;

            percentage2=(obtained_marks2/total_marks2)*100;

            cout<<"the percentage mark is: "<<percentage2<<"%"<<endl;

            GPA2=(percentage2/100)*5;

            cout<<"the GPA for course unit two is: "<<GPA2<<endl;
            cout<<endl;

            //COURSE UNIT THREE
                float TOTAL_MARKS;
                float OBTAINED_MARKS;
                float PERCENTAGE;
                float GPA;

                cout<<"please enter the total marks for the course unit three: ";

                cin>>TOTAL_MARKS;

                cout<<"please enter the marks you obtained in the course unit three: ";

                cin>>OBTAINED_MARKS;

                    PERCENTAGE = (OBTAINED_MARKS/TOTAL_MARKS)*100;

                cout<<"the percentage mark is: "<<percentage2<<"%"<<endl;

                    GPA= (PERCENTAGE/100)*5;

                cout<<"The GPA for the course unit three is: "<<GPA<<endl;
                cout<<endl;
                //let X represent the CGPA for the entire semester.


                float CGPA;

                CGPA=(GPA1+GPA2+GPA)/3;

                cout<<"the CGPA of the entire semester is: "<<CGPA<<endl;

                if(CGPA>=4)
                {
                    cout<<"-----GRADE A-----"<<endl;

                }

                if(CGPA>=3&& CGPA<4)
                {
                    cout<<"-----GRADE B-----"<<endl;
                }

                if(CGPA>=2&&CGPA<3)
                {
                    cout<<"-----GRADE C-----"<<endl;

                }

                if(CGPA>=1&&CGPA<2)
                {
                    cout<<"-----GRADE D-----"<<endl;

                }

                if(CGPA<1)
                {
                    cout<<"-----GRADE F-----"<<endl;
                }
                return 0;

    }
