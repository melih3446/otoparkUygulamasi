#include <iostream>
#include<string>
using namespace std;

int main() {
    double Time = 0.0;
    double ticariAracPrice = 6.5;
    double totalTicariAracPrice = 0.0;
    double taxiPrice = 5.0;
    double minibusPrice = 6.0;
    double totaltaxi = 0.0;
    double totalminibus = 0.0;
    string aracTipi;
    while (1) {

        cout << "WELCOME TO GOZUBUYUK CAR PARK" << endl;


        cout << "Enter the type of vehicle that will enter the parking lot (taxi, minibus, commercial vehicle).:";

        getline(cin, aracTipi);
        if (aracTipi == "taxi")

        {
            cout << "What is the time limit for being in the parking lot?:";
            cin >> Time;


            if (Time == 0)
            {
                cout << "A fee could not be calculated because you were not logged in." << endl;
            }
            else if (Time >= 1)
            {
                totaltaxi = taxiPrice;
                for (int i = 2; i <= Time; i++) {



                    taxiPrice *= 1.20;
                    totaltaxi += taxiPrice;
                }



                cout << "your parking fee=" << totaltaxi << endl;
            }
            else
            {
                cout << "enter valid character" << endl;
            }


        }
        else if (aracTipi == "minibus")
        {
            cout << "What is the time limit for being in the parking lot?:";
            cin >> Time;
            if (Time == 0)
            {
                cout << "fee could not be calculated" << endl;
            }
            else if (Time >= 1)
            {
                totalminibus = minibusPrice;
                for (int j = 2; j <= Time; j++)
                {
                    minibusPrice *= 1.215;
                    totalminibus += minibusPrice;
                }
                cout << "your parking fee=" << totalminibus << endl;
            }
            else
            {
                cout << "invalid character" << endl;
            }
        }


        else if (aracTipi == "commercial vehicle")

        {
            cout << "What is the time limit for being in the parking lot?:";
            cin >> Time;
            if (Time == 0)
            {
                cout << "fee not calculated" << endl;
            }
            else if (Time >= 1)
            {
                totalTicariAracPrice = ticariAracPrice;
                for (int i = 2; i <= Time; i++)
                {
                    ticariAracPrice *= 1.25;
                    totalTicariAracPrice += ticariAracPrice;
                }
                cout << "your parking fee=" << totalTicariAracPrice << endl;
            }
            else
            {
                cout << "invalid character" << endl;
            }
        }
        else
        {
            cout << "invalid vehicle type" << endl;
        }
    }
}

