#include<iostream>
#include<conio.h>
using namespace std;
class student{

 public:
    float score_mid;
    float score_final;
     float weight_mid;
     float weight_final;
     float total_score;


    calculate()

    {
    cout << "Enter mid score : " << endl;
    cin>>score_mid;
     cout <<"Taken score? : "<<endl;
    cin >> weight_mid;
     cout << "So added amount is : " << score_mid*(weight_mid/score_mid)<<endl;
    cout<<"Final term score : " << endl;
    cin>>score_final;
   cout<<"taken score? : "<<endl;
    cin>>weight_final;
     cout<<"added amount : "<<score_final*(weight_final/score_final)<<endl;
    }

    void the_final_score(){


    total_score = (score_mid*(weight_mid/score_mid))+(score_final*(weight_final/score_final));
     cout<<"The final score is :"<<total_score<<endl;

    }
};
int main()

{

    student obj ;
    obj.calculate();
    obj.the_final_score();

    getch();
}
