#include<iostream>
#include<string>


using namespace std;

int main()
{   
    
    int n;
    cout << "subjects:";
    cin >> n;

    float number[n];
    float tgp[n];
        string name[n];
        string grade[n];
    float total_points=0.0;
    float cgpa=0.0;
    float credit[n];
    float total_credit=0.0;
    
    for (int i = 0; i < n; i++)
    {
        
        cout << "Enter subject name:";
        cin >> name[i];
        cout << "Enter number:";
        cin >> number[i];
        cout << "Enter credit:";
        cin >> credit[i];
        total_credit = total_credit + credit[i];
    }


    for (int i = 0; i < n; i++)
    {
        if (number[i] <= 100 && number[i] >= 90)
        {
            tgp[i]=4.00;
        }
        else if (number[i] <90 && number[i] >= 85)
        {
            tgp[i] = 3.75;
        }
        else if (number[i] <85 && number[i]>= 80)
        {
            tgp[i] = 3.50;
        }
        else if (number[i] <80 && number[i] >=75)
        {
            tgp[i] = 3.25;
        }
        else if (number[i] <75 && number[i] >= 70)
        {
            tgp[i] = 3.00;
        }
        else if (number[i] <70 && number[i] >=65)
        {
            tgp[i] = 2.75;
        }
        else if (number[i] <65 && number[i] >=60)
        {
            tgp[i] = 2.75;
        }
        else if (number[i] <60 && number[i] >=50)
        {
            tgp[i] = 2.50;
        }
        else if (number[i] < 50 && number[i] >=0)
        {
            tgp[i] = 0.00 ;
        }
        
        total_points += tgp[i] * credit[i];

    }
    
    cgpa= total_points/total_credit;
    cout << "My Total CGPA:  " << cgpa <<endl;
    
}