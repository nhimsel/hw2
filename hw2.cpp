#include <iostream>

using namespace std;

int main()
{
    //Part 1

    bool isSunny = true;
    bool isRaining = false;
    bool isWeekend = true;

    cout << "Sunny? " << isSunny << endl;
    cout << "Raining? " << isRaining << endl;

    if (isWeekend)
    {
        cout << "It's the weekend!" << endl;
    }

    //Part 2

    bool haveUmbrella = true;
    bool isGoingOutside = true;
    bool isTired = false;

    if (isRaining && haveUmbrella)
    {
        cout << "You can go outside with an umbrella." << endl;
    }

    if (isSunny || isWeekend)
    {
        cout << "It's a great time to relax!" << endl;
    }

    if (!isTired)
    {
        cout << "You have energy to go for a walk!" << endl;
    }

    //Part 3

    isSunny = false;
    isRaining = true;

    if (isSunny)
    {
        cout << "Wear sunglasses." << endl;
    }

    else if (isRaining && haveUmbrella)
    {
        cout << "Take your umbrella." << endl;
    }

    else if (isRaining && !haveUmbrella)
    {
        cout << "You might get wet!" << endl;
    }

    else
    {
        cout << "Weather looks unpredictable today." << endl;
    }

    if (isSunny && isWeekend)
    {
        cout << "Perfect day for a picnic!" << endl;
    }

    else if (isSunny || isWeekend)
    {
        cout << "It's still a nice time to go out." << endl;
    }

    else
    {
        cout << "Stay indoors and relax." << endl;
    }

    //Part 4

    bool isCitizen = true;
    int age = 20;
    bool hasVoterID = true;

    if (isCitizen && age>=18 && hasVoterID)
    {  
        cout << "You are eligible to vote!" << endl;
    }

    else
    {
        cout << "You are not eligible to vote." << endl;
    }

    return 0;
}