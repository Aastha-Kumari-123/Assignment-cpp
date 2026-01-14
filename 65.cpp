//Progarm with friend class...
#include<iostream>
using namespace std;
class Doctor; //Forward declearation.

class Patient
{
    private:
       string name;
       string medical_history;
    public:
       Patient(string n,string history):name(n),medical_history(history){}
    
       friend class doctor; //Doctor class is decleared as a friend class
    };
    class doctor
    {
        public:
            void check(Patient p)
            {
                //directly accessing private members of patient class..
                cout<<"Doctor is checking the Patient..."<<endl;
                cout<<"Patient name is: "<<p.name<<endl;
                cout<<"Patient medical history is: "<<p.medical_history<<endl;
            }

    };
    int main()
    {
        Patient p1("XYZ","Fever,Cough,Sore throat");
        doctor d1;
        d1.check(p1);
        return 0;
    }


