// RBT22CB028,  RBT22CB039
//   SOHAM        MAYUR
#include <bits/stdc++.h>
#include <windows.h>
#include <fstream>
using namespace std;

//Class for 1st Employee(Mayur)
class mayur 
{
public:
    int task_no, tt;
    long int expences_mayur = 0; 

    void marktask() // Mark Task as Completed (For Employee)
    {
        fstream f1("D:\\Codes\\Projects\\Employee_Account_Manager\\Emoloyee data\\mayur.txt", ios::app);
        cout << "Enter Time taken to complete the task: ";
        cin >> tt;
        f1 << "               " << tt << endl;
        cout << "\n ✅✅ Task Marked As Completed ✅✅ " << endl;
        f1.close();
    }

    void tp()
    {
        fstream f1("D:\\Codes\\Projects\\Employee_Account_Manager\\Emoloyee data\\mayur.txt");
        string line;
        int c = 1, taskId, duration, timeTaken, penalty;
        static int count = 0;
        static long int base = 10000, bonus = 0, pen = 0, total = base;

        if (f1.is_open())
        {
            while (c)
            {
                f1.seekg(std::streamoff(0), std::ios_base::end);
                streampos endoffile = f1.tellg();
                long long int d = 32;
                f1.seekg(std::streamoff(endoffile - d), std::ios_base::beg);
                getline(f1, line);
                istringstream iss(line);
                if ((iss >> taskId >> duration >> timeTaken))
                {

                    cout << "\n ************** For Task " << taskId << " ****************\n";
                    cout << " Deadline: " << duration << " days  Time Taken: " << timeTaken << " days\n";
                    if (timeTaken > duration && count == 0)
                    {
                        cout << "\n                       ☠️ ☠️ ☠️   सा व धा न   ☠️ ☠️ ☠️   " << endl;
                        cout << "You have completed the task by the DUE of " << timeTaken - duration << " days\n";
                        cout << "⚠️  PLEASE COMPLETE YOUR TASKS IN TIME OR A PENALTY OF 10$ PER DAY WILL BE IMPOSED!!⚠️" << endl;
                        count = 1;
                    }
                    else if (timeTaken > duration)
                    {
                        penalty = 0;
                        cout << "\n                          💩💩💩   We Expect More from you  💩💩💩\n                     😱😱 You have completed the task by the DUE of " << timeTaken - duration << " days 😱😱\n";
                        penalty = (timeTaken - duration) * 10;
                        cout << "😭😭😭 Regrettably, a penalty of " << penalty << "$ has been applied as the task was not completed within the designated timeframe 😭😭😭\n";

                        pen += penalty;
                    }
                    else if (timeTaken < duration)
                    {
                        penalty = 0;
                        cout << "\n                 💐💐💐 अभिनंदन 💐💐💐    " << endl;
                        penalty = (duration - timeTaken) * 10;
                        cout << "🕺 Great job! You've earned a " << penalty << " bonus for completing your task ahead of schedule 🕺😎💸" << endl;
                        bonus += penalty;
                    }
                }

                c = 0;
            }
            total += bonus;
            total -= pen;
            expences_mayur += total;
            f1.seekg(ios::beg);
            f1 << "***** Mayur's Record *****\nBase Salary  = " << base << "/-\n"
               << "Task Bonus   =   " << bonus << "/-\n"
               << "Task Penalty =   " << pen << "/-\n\n"
               << "Total        =    " << total << "/-";
        }
        f1.close();
    }

    void display()
    {
        fstream f1("D:\\Codes\\Projects\\Employee_Account_Manager\\Emoloyee data\\mayur.txt");
        string line;
        while (f1.good())
        {
            getline(f1, line);
            cout << line << endl;
        }
        f1.close();
    }
};

// Class for 2nd Employee(Soham)
class soham
{
public:
    int bs = 1000;
    int task_no, tt;
    long int expences_soham = 0; 
    void marktask() // Mark Task as Completed (For Employee)
    {
        fstream f2("D:\\Codes\\Projects\\Employee_Account_Manager\\Emoloyee data\\soham.txt", ios::app);
        cout << "Enter Time taken to complete the task: ";
        cin >> tt;
        f2 << "               " << tt << endl;
        cout << "\n✅✅ Task Marked As Completed ✅✅" << endl;
        f2.close();
    }

    void tp()
    {
        fstream f2("D:\\Codes\\Projects\\Employee_Account_Manager\\Emoloyee data\\soham.txt");
        string line;
        int c = 1, taskId, duration, timeTaken, penalty;
        static int count = 0;
        static long int base = 10000, bonus = 0, pen = 0, total = base;
        if (f2.is_open())
        {
            while (c)
            {
                f2.seekg(std::streamoff(0), std::ios_base::end);
                streampos endoffile = f2.tellg();
                long long int d = 32;
                f2.seekg(std::streamoff(endoffile - d), std::ios_base::beg);
                getline(f2, line);
                istringstream iss(line);
                if ((iss >> taskId >> duration >> timeTaken))
                {

                    cout << "\n ************** For Task " << taskId << " ****************\n";
                    cout << " Deadline: " << duration << " days  Time Taken: " << timeTaken << " days\n";
                    if (timeTaken > duration && count == 0)
                    {
                        cout << "\n                       ☠️ ☠️ ☠️   सा व धा न   ☠️ ☠️ ☠️   " << endl;
                        cout << "You have completed the task by the DUE of " << timeTaken - duration << " days\n";
                        cout << "⚠️  PLEASE COMPLETE YOUR TASKS IN TIME OR A PENALTY OF 10$ PER DAY WILL BE IMPOSED!!⚠️" << endl;
                        count = 1;
                    }
                    else if (timeTaken > duration)
                    {
                        penalty = 0;
                        cout << "\n                          💩💩💩   We Expect More from you  💩💩💩\n                     😱😱 You have completed the task by the DUE of " << timeTaken - duration << " days 😱😱\n";
                        penalty = (timeTaken - duration) * 10;
                        cout << "😭😭😭 Regrettably, a penalty of " << penalty << "$ has been applied as the task was not completed within the designated timeframe 😭😭😭\n";

                        pen += penalty;
                    }
                    else if (timeTaken < duration)
                    {
                        penalty = 0;
                        cout << "\n                 💐💐💐 अभिनंदन 💐💐💐    " << endl;
                        penalty = (duration - timeTaken) * 10;
                        cout << "🕺 Great job! You've earned a " << penalty << " bonus for completing your task ahead of schedule 🕺😎💸" << endl;

                        bonus += penalty;
                    }
                }
                c = 0;
            }
            total += bonus;
            total -= pen;
            expences_soham += total;
            f2.seekg(ios::beg);
            f2 << "***** Soham's Record *****\nBase Salary  = " << base << "/-\n"
               << "Task Bonus   =   " << bonus << "/-\n"
               << "Task Penalty =   " << pen << "/-\n\n"
               << "Total        =    " << total << "/-";
        }
        f2.close();
    }

    void display()
    {
        fstream f2("D:\\Codes\\Projects\\Employee_Account_Manager\\Emoloyee data\\soham.txt");
        string line;
        while (f2.good())
        {
            getline(f2, line);
            cout << line << endl;
        }
        f2.close();
    }
};

// Class for 3rd employee
class moso
{
public:
    int bs = 1000;
    int task_no, tt;
    long int expences_moso = 0; 
    void marktask() // Mark Task as Completed (For Employee)
    {
        fstream f3("D:\\Codes\\Projects\\Employee_Account_Manager\\Emoloyee data\\moso.txt", ios::app);
        cout << "Enter Time taken to complete the task: ";
        cin >> tt;
        f3 << "               " << tt << endl;
        cout << "\n✅✅ Task Marked As Completed ✅✅" << endl;
        f3.close();
    }

    void tp()
    {
        fstream f3("D:\\Codes\\Projects\\Employee_Account_Manager\\Emoloyee data\\moso.txt");
        string line;
        int c = 1, taskId, duration, timeTaken, penalty;
        static long int base = 10000, bonus = 0, pen = 0, total = base;
        static int count = 0;

        if (f3.is_open())
        {
            while (c)
            {
                f3.seekg(std::streamoff(0), std::ios_base::end);
                streampos endoffile = f3.tellg();
                long long int d = 32;
                f3.seekg(std::streamoff(endoffile - d), std::ios_base::beg);
                getline(f3, line);
                istringstream iss(line);
                if ((iss >> taskId >> duration >> timeTaken))
                {

                    cout << "\n ************** For Task " << taskId << " ****************\n";
                    cout << " Deadline: " << duration << " days  Time Taken: " << timeTaken << " days\n";

                    if (timeTaken > duration && count == 0)
                    {
                        cout << "\n                       ☠️ ☠️ ☠️   सा व धा न   ☠️ ☠️ ☠️   " << endl;
                        cout << "You have completed the task by the DUE of " << timeTaken - duration << " days\n";
                        cout << "⚠️  PLEASE COMPLETE YOUR TASKS IN TIME OR A PENALTY OF 10/- PER DAY WILL BE IMPOSED!!⚠️" << endl;
                        count = 1;
                    }
                    else if (timeTaken > duration)
                    {
                        penalty = 0;
                        cout << "\n                          💩💩💩   We Expect More from you  💩💩💩\n                     😱😱 You have completed the task by the DUE of " << timeTaken - duration << " days 😱😱\n";
                        penalty = (timeTaken - duration) * 10;
                        cout << "😭😭😭 Regrettably, a penalty of " << penalty << "/- has been applied as the task was not completed within the designated timeframe 😭😭😭\n";
                        pen += penalty;
                    }
                    else if (timeTaken < duration)
                    {
                        penalty = 0;
                        cout << "\n                 💐💐💐 अभिनंदन 💐💐💐    " << endl;
                        penalty = (duration - timeTaken) * 10;
                        cout << "🕺 Great job! You've earned a " << penalty << "/- bonus for completing your task ahead of schedule 🕺😎💸" << endl;
                        bonus += penalty;
                    }
                }
                c = 0;
            }
            total += bonus;
            total -= pen;
            expences_moso += total;
            f3.seekg(ios::beg);
            f3 << "***** Moso's Record *****\nBase Salary  = " << base << "/-\n"
               << "Task Bonus   =   " << bonus << "/-\n"
               << "Task Penalty =   " << pen << "/-\n\n"
               << "Total        =    " << total << "/-";
        }

        f3.close();
    }

    void display()
    {
        fstream f3("D:\\Codes\\Projects\\Employee_Account_Manager\\Emoloyee data\\moso.txt");
        string line;
        while (f3.good())
        {
            getline(f3, line);
            cout << line << endl;
        }
        f3.close();
    }
};

//Class For Manager
class manager:public mayur,soham,moso
{
public:
    int task_no, all;
    long int expences = expences_mayur + expences_soham + expences_moso;
    long int salary_mayur,salary_soham,salary_moso;
    
    void getdata()
    {
        int f;
        cout << "Enter Employee Id: ";
        cin >> f;
        fstream f1("D:\\Codes\\Projects\\Employee_Account_Manager\\Emoloyee data\\mayur.txt", ios::app);
        fstream f2("D:\\Codes\\Projects\\Employee_Account_Manager\\Emoloyee data\\soham.txt", ios::app);
        fstream f3("D:\\Codes\\Projects\\Employee_Account_Manager\\Emoloyee data\\moso.txt", ios::app);
        switch (f)
        {
            case 001:
                if (f1.is_open())
                {
                    cout << "\t\tEnter task_no: ";
                    cin >> task_no;
                    cout << "\t\tAlloted time: ";
                    cin >> all;
                    f1 << task_no << "            " << all;
                    f1.close();
                    cout << "\t\t✅✅ Task added Successsfully ✅✅" << endl;
                    break;
                }
            case 002:
                if (f2.is_open())
                {
                    cout << "\t\tEnter task_no: ";
                    cin >> task_no;
                    cout << "\t\tAlloted time: ";
                    cin >> all;
                    f2 << task_no << "            " << all;
                    f2.close();
                    cout << "\t\t✅✅ Task Added Successfully ✅✅" << endl;
                    break;
                }
            case 003:
                if (f3.is_open())
                {
                    cout << "\t\tEnter task_no: ";
                    cin >> task_no;
                    cout << "\t\tAlloted time: ";
                    cin >> all;
                    f3 << task_no << "            " << all;
                    f3.close();
                    cout << "\t\t✅✅Task Added Successfully ✅✅" << endl;
                    break;
                }
            default:
                cout << "Invalid Employee Id!!" << endl;
        }

       f1.close();
       f2.close();
       f3.close();
    }
    void display()
    {
        fstream f1("D:\\Codes\\Projects\\Employee_Account_Manager\\Emoloyee data\\mayur.txt");
        fstream f2("D:\\Codes\\Projects\\Employee_Account_Manager\\Emoloyee data\\soham.txt");
        fstream f3("D:\\Codes\\Projects\\Employee_Account_Manager\\Emoloyee data\\moso.txt");
        fstream f("D:\\Codes\\Projects\\Employee_Account_Manager\\Emoloyee data\\Employee task.txt");
        string line;

        // long int expences = expences_mayur + expences_soham + expences_moso;
        f << "        ***** Employee salary and task record *****        "<<endl;
        f << endl;
        f << "  Salary of employees  "<<endl;
        f << "1. Mayur's Salary " << " = " << salary_mayur <<"-/" <<endl;   
        f << "2. Soham's Salary " << " = " << salary_soham <<"-/" <<endl;   
        f << "3. Moso's  Salary " << " = " << salary_moso <<"-/" <<endl;
        f << endl;   
        f << "Total Salary       = " << expences <<"-/" << endl;
        while (f1.good())
        {
            getline(f1, line);  
            f << line << endl;
        }
        f1.close();
        f << "\n";
        while (f2.good())
        {
            getline(f2, line);
            f << line << endl;
        }
        f2.close();
        f << "\n";
        while (f3.good())
        {
            getline(f3, line);
            f << line << endl;
        }
        f3.close();

        f.seekg(ios::beg);
        while (f.good())
        {
            getline(f, line);
            cout << line << endl;
        }
        f.close();
    }
};


int main()
{
    SetConsoleOutputCP(CP_UTF8);
    manager a;
    mayur m;
    soham s;
    moso mo;

    int c = 1;
    while (c)
    {
        int l = 0;
        cout << "\n\t\t***** ~* LOGIN PAGE *~ *****\n";
        cout << "\t\t1 : Manager Login\n\t\t2 : Employee Login\n\t\t3 : EXIT\n";
        cout << "ENTER CHOICE : ";
        cin >> l;
        if (l == 1)
        {
            int man = 1;
            int ch = 0;
            while (man)
            {
                cout << "\n\t\t1: ASSIGN A TASK\n\t\t2: DETAILS\n\t\t3: EXIT from Manager login\n";
                cout << "\t\tEnter Choice : ";
                cin >> ch;
                switch (ch)
                {
                  case 1:
                      cout << "\n\t****** You can't assign a task to the Employee if he/she currently has an ONGOING task ********" << endl;
                      a.getdata();
                      break;

                  case 2:
                      a.expences = m.expences_mayur + s.expences_soham + mo.expences_moso;
                      a.salary_mayur = m.expences_mayur;
                      a.salary_soham = s.expences_soham;
                      a.salary_moso = mo.expences_moso;
                      a.display();
                      break;

                  case 3:
                      cout << "\t\t ~~~~~ Manager Logged Out ~~~~~\n";
                      man = 0;
                      break;

                  default:
                      cout << "\nInvalid Input!!" << endl;
                }
            }
        }

        else if (l == 2)
        {
            int id = 0;
            cout << "Enter your Employee ID: ";
            cin >> id;
            int f = 0;
            int choice = 1;
            while (choice)
            {
                cout << "\n\t\t*** Select from below ***";
                cout << "\n\t\t1.To Mark a task as Completed \n\t\t2.View Salary details \n\t\t3.Exit\n\t\t";
                cin >> f;
                if (f == 3)
                {
                    choice = 0;
                }
                switch (id)
                {
                   case 1:
                       if (f == 1)
                       {
                           m.marktask();
                           m.tp();
                       }
                       else if (f == 2)
                       {
                           m.display();
                       }
                       break;
     
                   case 2:
                       if (f == 1)
                       {
                           s.marktask();
                           s.tp();
                       }
                       else if (f == 2)
                       {
                           s.display();
                       }
                       break;
     
                   case 3:
                       if (f == 1)
                       {
                           mo.marktask();
                           mo.tp();
                       }
                       else if (f == 2)
                       {
                           mo.display();
                       }
                       break;
                   default:
     
                       cout << "\nInvalid ID!!";
                }
            }
        }
        else if (l == 3)
        {
            c = 0;
        }
        else
        {
            cout << "\nInvalid Input!!" << endl;
        }
    }
    return 0;
}