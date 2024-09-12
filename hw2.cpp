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

    return 0;
}