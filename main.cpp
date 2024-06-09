/* Define a class student with the following specification:
Private members of class student: admno (integer), sname (20 characters),
eng (float), math (float), science (float), total (float), ctotal() – a function to
calculate eng + math + science with float return type.
Public member function of class student: takedata() – Function to accept
values for admno, sname, eng, science and invoke ctotal() to calculate total
and showdata() – Function to display all the data members on the screen

#include <iostream>

using namespace std;
class student {
 private:
int admno;
char sname[20];
float eng,math,science,total;
float ctotal()
{
return eng+math+science;

}

 public:
    takedata(){
cout<<"Enter the admission number: ";
cin>>admno;
cin.get();


cout<<"Enter the student name: ";

cin.getline(sname,20);

cout<<"Enter English marks: ";
cin>>eng;


cout<<"Enter Math marks: ";
cin>>math;

cout<<"Enter Science marks: ";
cin>>science;

total=ctotal();

    }
void showdata() {
        cout << endl <<"Admission number: " << admno << endl;
        cout << "Student name: " << sname << endl;
        cout << "English marks: " << eng << endl;
        cout << "Math marks: " << math << endl;
        cout << "Science marks: " << science << endl;
        cout << "Total marks: " << total << endl;
}

};
int main()
{

student st;
st.takedata();
st.showdata();

return 0;
}

*/
/*
Define a class batsman with the following specifications:
Private members: bcode (4 digits code number), bname (20 characters),
innings (integer), notout (integer), runs (integer), batavg (calculated
according to the formula: batavg =runs/[innings-notout]), calcavg() –
Function to compute batavg
Public members: readdata() – Function to accept value from bcode, name,
innings, notout and invoke the function and displaydata() – Function to
display the data members on the screen.


#include<iostream>
using namespace std;

class batsman {
private:
    int bcode;
    char bname[20];
    int innings;
    int notout;
    int runs;
    float batavg;
public:
    void readdata() {
        int temp;
        do {
            cout << "Enter 4-digit code number: ";
            cin >> temp;
            if (temp < 1000 || temp > 9999 || temp < 0) {
                cout << "Invalid code number. Please enter a 4-digit number." << endl;
            }
        } while (temp < 1000 || temp > 9999 || temp < 0);
        bcode = temp;

        cin.get();
        cout << "Enter the name of the player: ";
        cin.getline(bname, 20);
        cout << "Enter the number of innings: ";
        cin >> innings;
        cout << "Enter the numbers of not-out: ";
        cin >> notout;
        cout << "Enter the total runs: ";
        cin >> runs;
    }

    void calcvg() {
        batavg = (float)runs / (innings - notout);
    }

    void displaydata() {
        calcvg();
        cout << endl << "Batsman Code: " << bcode << endl;
        cout << "Batsman Name: " << bname << endl;
        cout << "Number of Innings: " << innings << endl;
        cout << "Number of Not Outs: " << notout << endl;
        cout << "Total Runs: " << runs << endl;
        cout << "Batting Average: " << batavg << endl;
    }
};

int main() {
    batsman b;
    b.readdata();
    b.displaydata();
    return 0;
}
*/

/*

Define a class TEST in C++ with following description:
Private Members: TestCode (of type integer), Description (of type string),
NoCandidate (of type integer), CenterReqd (of type integer), a member
function CALCNTR() to calculate and return the number of centers as
(NoCandidates/100+1)
Public Members: A function SCHEDULE() to allow user to enter values for
TestCode, Description, NoCandidate & call function CALCNTR() to
calculate the number of Centres
A function DISPTEST() to allow user to view the content of all the data
members

*/
/*
#include <iostream>
using namespace std;
class TEST {
private:
    int TestCode;
    char Description[50];
    int NoCandidate;
    int CenterReqd;

    int CALCNTR() {
        return (NoCandidate / 100 + 1);
    }

public:
    void SCHEDULE() {
        cout << "Enter Test Code: ";
        cin >> TestCode;
        cin.get();
        cout << "Enter Description: ";

        cin.getline(Description, 50);
        cout << "Enter Number of Candidates: ";
        cin >> NoCandidate;
        CenterReqd = CALCNTR();
    }

    void DISPTEST() {
        cout << "Test Code: " << TestCode <<endl;
        cout << "Description: " << Description <<endl;
        cout << "Number of Candidates: " << NoCandidate <<endl;
        cout << "Number of Centers Required: " << CenterReqd <<endl;
    }
};

int main() {
    TEST t;
    t.SCHEDULE();
    t.DISPTEST();
    return 0;
}
*/

/* Define a class in C++ with following description:
Private Members: A data member Flight number of type integer, A data
member Destination of type string, A data member Distance of type float, A
data member Fuel of type float, A member function CALFUEL() to calculate
the value of Fuel as per the following criteria
 Distance Fuel
 <=1000 500
 more than 1000 and <=2000 1100
 more than 2000 2200
Public Members: A function FEEDINFO() to allow user to enter values for
Flight Number, Destination, Distance & call function CALFUEL() to
calculate the quantity of Fuel and A function SHOWINFO() to allow user to
view the content of all the data members
*/

/*
#include<iostream>
using namespace std;

class Flight {
private:
    int flightNumber;
    char destination[50];
    float distance;
    float fuel;

    void CALFUEL() {
        if (distance <= 1000) {
            fuel = 500;
        } else if (distance > 1000 && distance <= 2000) {
            fuel = 1100;
        } else {
            fuel = 2200;
        }
    }

public:
    void FEEDINFO() {
        cout << "Enter flight number: ";
        cin >> flightNumber;
        cin.get();
        cout << "Enter destination: ";

        cin.getline(destination, 50);
        cout << "Enter distance: ";
        cin >> distance;
        CALFUEL();
    }

    void SHOWINFO() {
        cout << "Flight number: " << flightNumber << endl;
        cout << "Destination: " << destination << endl;
        cout << "Distance: " << distance << endl;
        cout << "Fuel: " << fuel << endl;
    }
};

int main() {
    Flight flight;
    flight.FEEDINFO();
    flight.SHOWINFO();
    return 0;
}


*/
/*Define a class BOOK with the following specifications :
Private members of the class BOOK are: BOOK NO (integer type),
BOOKTITLE (20 characters), PRICE (float), TOTAL_COST() (A function to
calculate the total cost for N number of copies where N is passed to the
function as argument).
Public members of the class BOOK are: INPUT() – function to read
BOOK_NO., BOOKTITLE, PRICE and PURCHASE() – function to ask the
user to input the number of copies to be purchased. It invokes
TOTAL_COST() and prints the total cost to be paid by the user.
Note: You are also required to give detailed function definitions.
*/


/*
#include <iostream>


using namespace std; // define the std namespace

class BOOK {
private:
    int bookNo;
    char bookTitle[20];
    float price;

    float TOTAL_COST(int n) {
        return price * n;
    }

public:
    void INPUT() {
        cout << "Enter book number: ";
        cin >> bookNo;
        cin.get();
        cout << "Enter book title: ";

        cin.getline(bookTitle, 20);
        cout << "Enter book price: ";
        cin >> price;
    }

    void PURCHASE() {
        int numCopies;
        cout << "Enter the number of copies to purchase: ";
        cin >> numCopies;
        float total = BOOK::TOTAL_COST(numCopies);
        cout << "Total cost to be paid: " << total << endl;
    }
};

int main() {
    BOOK book;
    book.INPUT();
    book.PURCHASE();
    return 0;
}
*/
/*Define a class REPORT with the following specification:
Private members: adno (4 digits admission number), name (20 characters),
marks (an array of 5 floating point values), average (average marks
obtained), GETAVG() (a function to compute the average obtained in five
subject)
Public members: READINFO() – function to accept values for adno, name,
marks. Invoke the function GETAVG() and DISPLAYINFO() – function to
display all data members of report on the screen. You should give function
definitions.
*/
/*

#include <iostream>
#include<iomanip>
using namespace std;

class REPORT {
private:
    int adno;
    char name[20];
    float marks[5];
    float average;

    float GETAVG() {
        float sum = 0.0;
        for (int i = 0; i < 5; i++) {
            sum += marks[i];
        }
        return sum / 5.0;
    }

public:
    void READINFO() {
         int temp;
        do {

            cout << "Enter admission number (4 digits): ";
            cin >> temp;
            if (temp < 1000 || temp > 9999) {
                cout << "Invalid admission number. Please enter a 4-digit number." << endl;
            }
        } while (temp < 1000 || temp > 9999);
        adno = temp;
        cout << "Enter name: ";
cin.get();
        cin.getline(name, 20);
        cout << "Enter marks in 5 subjects: ";
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
        }
        average = GETAVG();
    }

    void DISPLAYINFO() {
        cout << "Admission Number: " << adno << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: ";
        for (int i = 0; i < 5; i++) {
            cout << fixed << setprecision(2) << marks[i] << " ";
        }
        cout << endl;
        cout << "Average: " << fixed << setprecision(2) << average << endl;
    }
};

int main() {
    REPORT report;
    report.READINFO();
    report.DISPLAYINFO();
    return 0;
}

*/
