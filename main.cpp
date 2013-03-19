#include <iostream>

using namespace std;

class info
    {
        int rno;
        char name[20];

        public:

        void input()
        {
            cout<<"\nEnter name :";
            cin>>name;
            cout<<"Enter roll no.";
            cin>>rno;

        }

        void output()
        {
            cout<<"\nName :";
            cout<<name;
            cout<<"\nRoll no.";
            cout<<rno;
        }
    };

    class marks
    {
        float s1,s2;

        public:


        void in()
        {
            cout<<"Enter marks in subject 1 :";
            cin>>s1;

             cout<<"Enter marks in subject 2 :";
            cin>>s2;
        }

        void out()
        {
            cout<<"\nMarks in subject 1 :";
            cout<<s1;

             cout<<"\nMarks in subject 2 :";
            cout<<s2;

         }

    };

    class disp:public info,public marks
        {
            public:
           disp(){ cout<<"INFORMATION";}

        };


        int main()
        {
            disp d;
            d.input();
            d.in();
            d.output();
            d.out();

            return 0;
        }
