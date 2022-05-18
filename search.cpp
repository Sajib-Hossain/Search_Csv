#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <chrono>

using namespace std;
using namespace std::chrono;

string age;
string sex;
string cp;
string trtbps;
string chol;
string fbs;
string restecg;
string thalachh;
string exng;
string oldpeak;
string slp;
string caa;
string thall;
string output;
vector<string> row;
string row_data;
string ageinp;
string sexinp;
string cpinp;
string trtbpsinp;
string cholinp;
string fbsinp;
string choice;
string oldpeakinp;
string caainp;
string outputinp;

void sortdata()
{
    ifstream csv_file("heart.csv");

    while (getline(csv_file, row_data))
    {
        row.push_back(row_data);
    }

    sort(row.begin(), row.end());

    for (size_t i = 0; i < row.size() - 1; i++)
        cout << row[i] << '\n';
}

void readdt()
{
    ifstream fin;
    string line;

    fin.open("heart.csv");
    while (!fin.eof())
    {
        fin >> line;
        cout << line << " " << endl;
    }
}

string searchdt()
{

    ifstream csv_file("heart.csv");

    if (!csv_file.is_open())
        std::cout << "File Not Open" << '\n';

    cout << "Input integer number to choose the option for search by specific key and sort Data :" << endl;
    cout << "1.Age." << endl;
    cout << "2.Sex." << endl;
    cout << "3.CP." << endl;
    cout << "4.Trtbpst." << endl;
    cout << "5.Chol" << endl;
    cout << "6.Fbs" << endl;
    cout << "7.Oldpeak" << endl;
    cout << "8.Caa." << endl;
    cout << "9.Output." << endl;

    cin >> choice;

    if (choice == "1")
    {
        cout << "Enter the age you want to search: ";
        cin >> ageinp;
        auto start = high_resolution_clock::now();


        while (csv_file.good())
        {
            getline(csv_file, age, ',');
            getline(csv_file, sex, ',');
            getline(csv_file, cp, ',');
            getline(csv_file, trtbps, ',');
            getline(csv_file, chol, ',');
            getline(csv_file, fbs, ',');
            getline(csv_file, restecg, ',');
            getline(csv_file, thalachh, ',');
            getline(csv_file, exng, ',');
            getline(csv_file, oldpeak, ',');
            getline(csv_file, slp, ',');
            getline(csv_file, caa, ',');
            getline(csv_file, thall, ',');
            getline(csv_file, output, '\n');

            if (ageinp == age)
            {
                cout << age << " " << sex << " " << cp << " " << trtbps << " " << chol << " " << fbs << " " << restecg << " " << thalachh << " " << thalachh << " " << exng << " " << oldpeak << " " << slp << " " << caa << " " << thall << " " << output << endl;
            }
        }
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        cout << "Execution Time for serch function : "
             << duration.count() << " microseconds" << endl;

        csv_file.close();
    }

    if (choice == "2")
    {

        cout << "Enter the sex you want to search: ";
        cin >> sexinp;
        auto start = high_resolution_clock::now();

        while (csv_file.good())
        {
            getline(csv_file, age, ',');
            getline(csv_file, sex, ',');
            getline(csv_file, cp, ',');
            getline(csv_file, trtbps, ',');
            getline(csv_file, chol, ',');
            getline(csv_file, fbs, ',');
            getline(csv_file, restecg, ',');
            getline(csv_file, thalachh, ',');
            getline(csv_file, exng, ',');
            getline(csv_file, oldpeak, ',');
            getline(csv_file, slp, ',');
            getline(csv_file, caa, ',');
            getline(csv_file, thall, ',');
            getline(csv_file, output, '\n');

            if (sexinp == sex)
            {
                cout << age << " " << sex << " " << cp << " " << trtbps << " " << chol << " " << fbs << " " << restecg << " " << thalachh << " " << thalachh << " " << exng << " " << oldpeak << " " << slp << " " << caa << " " << thall << " " << output << endl;
            }
        }
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        cout << "Execution Time for serch function : "
             << duration.count() << " microseconds" << endl;

        csv_file.close();
    }

    if (choice == "3")
    {
        cout << "Enter the cp you want to search:";
        cin >> cpinp;
        auto start = high_resolution_clock::now();

        while (csv_file.good())
        {
            getline(csv_file, age, ',');
            getline(csv_file, sex, ',');
            getline(csv_file, cp, ',');
            getline(csv_file, trtbps, ',');
            getline(csv_file, chol, ',');
            getline(csv_file, fbs, ',');
            getline(csv_file, restecg, ',');
            getline(csv_file, thalachh, ',');
            getline(csv_file, exng, ',');
            getline(csv_file, oldpeak, ',');
            getline(csv_file, slp, ',');
            getline(csv_file, caa, ',');
            getline(csv_file, thall, ',');
            getline(csv_file, output, '\n');

            if (cpinp == cp)
            {
                cout << age << " " << sex << " " << cp << " " << trtbps << " " << chol << " " << fbs << " " << restecg << " " << thalachh << " " << thalachh << " " << exng << " " << oldpeak << " " << slp << " " << caa << " " << thall << " " << output << endl;
            }
        }
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        cout << "Execution Time for serch function : "
             << duration.count() << " microseconds" << endl;

        csv_file.close();
    }

    if (choice == "4")
    {
        cout << "Enter the trtbps you want to search: ";
        cin >> trtbpsinp;
        auto start = high_resolution_clock::now();

        while (csv_file.good())
        {
            getline(csv_file, age, ',');
            getline(csv_file, sex, ',');
            getline(csv_file, cp, ',');
            getline(csv_file, trtbps, ',');
            getline(csv_file, chol, ',');
            getline(csv_file, fbs, ',');
            getline(csv_file, restecg, ',');
            getline(csv_file, thalachh, ',');
            getline(csv_file, exng, ',');
            getline(csv_file, oldpeak, ',');
            getline(csv_file, slp, ',');
            getline(csv_file, caa, ',');
            getline(csv_file, thall, ',');
            getline(csv_file, output, '\n');

            if (trtbpsinp == trtbps)
            {
                cout << age << " " << sex << " " << cp << " " << trtbps << " " << chol << " " << fbs << " " << restecg << " " << thalachh << " " << thalachh << " " << exng << " " << oldpeak << " " << slp << " " << caa << " " << thall << " " << output << endl;
            }
        }
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        cout << "Execution Time for serch function : "
             << duration.count() << " microseconds" << endl;

        csv_file.close();
    }

    if (choice == "5")
    {
        cout << "Enter the chol you want to search: ";
        cin >> cholinp;
        auto start = high_resolution_clock::now();

        while (csv_file.good())
        {
            getline(csv_file, age, ',');
            getline(csv_file, sex, ',');
            getline(csv_file, cp, ',');
            getline(csv_file, trtbps, ',');
            getline(csv_file, chol, ',');
            getline(csv_file, fbs, ',');
            getline(csv_file, restecg, ',');
            getline(csv_file, thalachh, ',');
            getline(csv_file, exng, ',');
            getline(csv_file, oldpeak, ',');
            getline(csv_file, slp, ',');
            getline(csv_file, caa, ',');
            getline(csv_file, thall, ',');
            getline(csv_file, output, '\n');

            if (cholinp == chol)
            {
                cout << age << " " << sex << " " << cp << " " << trtbps << " " << chol << " " << fbs << " " << restecg << " " << thalachh << " " << thalachh << " " << exng << " " << oldpeak << " " << slp << " " << caa << " " << thall << " " << output << endl;
            }
        }
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        cout << "Execution Time for serch function : "
             << duration.count() << " microseconds" << endl;

        csv_file.close();
    }

    if (choice == "6")
    {
        cout << "Enter the fbs you want to search: ";
        cin >> fbsinp;
        auto start = high_resolution_clock::now();

        while (csv_file.good())
        {
            getline(csv_file, age, ',');
            getline(csv_file, sex, ',');
            getline(csv_file, cp, ',');
            getline(csv_file, trtbps, ',');
            getline(csv_file, chol, ',');
            getline(csv_file, fbs, ',');
            getline(csv_file, restecg, ',');
            getline(csv_file, thalachh, ',');
            getline(csv_file, exng, ',');
            getline(csv_file, oldpeak, ',');
            getline(csv_file, slp, ',');
            getline(csv_file, caa, ',');
            getline(csv_file, thall, ',');
            getline(csv_file, output, '\n');

            if (fbsinp == fbs)
            {
                cout << age << " " << sex << " " << cp << " " << trtbps << " " << chol << " " << fbs << " " << restecg << " " << thalachh << " " << thalachh << " " << exng << " " << oldpeak << " " << slp << " " << caa << " " << thall << " " << output << endl;
            }
        }auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        cout << "Execution Time for serch function : "
             << duration.count() << " microseconds" << endl;

        csv_file.close();
    }

    if (choice == "7")
    {
        cout << "Enter the oldpeak you want to search: ";
        cin >> oldpeakinp;
        auto start = high_resolution_clock::now();

        while (csv_file.good())
        {
            getline(csv_file, age, ',');
            getline(csv_file, sex, ',');
            getline(csv_file, cp, ',');
            getline(csv_file, trtbps, ',');
            getline(csv_file, chol, ',');
            getline(csv_file, fbs, ',');
            getline(csv_file, restecg, ',');
            getline(csv_file, thalachh, ',');
            getline(csv_file, exng, ',');
            getline(csv_file, oldpeak, ',');
            getline(csv_file, slp, ',');
            getline(csv_file, caa, ',');
            getline(csv_file, thall, ',');
            getline(csv_file, output, '\n');

            if (oldpeakinp == oldpeak)
            {
                cout << age << " " << sex << " " << cp << " " << trtbps << " " << chol << " " << fbs << " " << restecg << " " << thalachh << " " << thalachh << " " << exng << " " << oldpeak << " " << slp << " " << caa << " " << thall << " " << output << endl;
            }
        }
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        cout << "Execution Time for serch function : "
             << duration.count() << " microseconds" << endl;

        csv_file.close();
    }

    if (choice == "8")
    {
        cout << "Enter the caa you want to search: ";
        cin >> caainp;
        auto start = high_resolution_clock::now();

        while (csv_file.good())
        {
            getline(csv_file, age, ',');
            getline(csv_file, sex, ',');
            getline(csv_file, cp, ',');
            getline(csv_file, trtbps, ',');
            getline(csv_file, chol, ',');
            getline(csv_file, fbs, ',');
            getline(csv_file, restecg, ',');
            getline(csv_file, thalachh, ',');
            getline(csv_file, exng, ',');
            getline(csv_file, oldpeak, ',');
            getline(csv_file, slp, ',');
            getline(csv_file, caa, ',');
            getline(csv_file, thall, ',');
            getline(csv_file, output, '\n');

            if (caainp == caa)
            {
                cout << age << " " << sex << " " << cp << " " << trtbps << " " << chol << " " << fbs << " " << restecg << " " << thalachh << " " << thalachh << " " << exng << " " << oldpeak << " " << slp << " " << caa << " " << thall << " " << output << endl;
            }
        }
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        cout << "Execution Time for serch function : "
             << duration.count() << " microseconds" << endl;

        csv_file.close();
    }

    if (choice == "9")
    {
        cout << "Enter the output you want to search: ";
        cin >> outputinp;
        auto start = high_resolution_clock::now();

        while (csv_file.good())
        {
            getline(csv_file, age, ',');
            getline(csv_file, sex, ',');
            getline(csv_file, cp, ',');
            getline(csv_file, trtbps, ',');
            getline(csv_file, chol, ',');
            getline(csv_file, fbs, ',');
            getline(csv_file, restecg, ',');
            getline(csv_file, thalachh, ',');
            getline(csv_file, exng, ',');
            getline(csv_file, oldpeak, ',');
            getline(csv_file, slp, ',');
            getline(csv_file, caa, ',');
            getline(csv_file, thall, ',');
            getline(csv_file, output, '\n');

            if (outputinp == output)
            {
                cout << age << " " << sex << " " << cp << " " << trtbps << " " << chol << " " << fbs << " " << restecg << " " << thalachh << " " << thalachh << " " << exng << " " << oldpeak << " " << slp << " " << caa << " " << thall << " " << output << endl;
            }
        }
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        cout << "Execution Time for serch function : "
             << duration.count() << " microseconds" << endl;

        csv_file.close();

    }
}

int main()
{
    int chfnc;
    cout << "Enter your choice to do operation: " << endl;
    cout << "1.View Data." << endl;
    cout << "2.Search data by key." << endl;
    cout << "3. Sort data ." << endl;

    cout << "Input :" << endl;
    cin >> chfnc;
    if (chfnc == 1)
    {
        auto start = high_resolution_clock::now();
        readdt();
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        cout << "Execution Time for view data function: "
             << duration.count() << " microseconds" << endl;
    }
    else if (chfnc == 2)
    {
       
        searchdt();
  
    }
    else if (chfnc == 3)
    {
        auto start = high_resolution_clock::now();
        sortdata();
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        cout << "Execution Time for sort function : "
             << duration.count() << " microseconds" << endl;
    }
    else
    {
        cout << "invalid input......" << endl;
    }

    return 0;
}