#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

/*-----------------------------------MACROS---------------------------------------------------*/

/*-------------------------------GLOBAL DECLARATIONS------------------------------------------*/
int my_choice(int user_last_choice);
int points[] = {0, 0};
int win_points = 10;
string objects[] = {"rock", "paper", "scissor"};
/*#############################################################################################*/
/*------------------------------------------------MAIN-----------------------------------------*/

int main()
{

    cout << "Enter the winning points to end the match.\n";
    cin >> win_points;

    while (true)
    {
        cout << "1. Rock 2. Paper 3. Scissor: ";
        int user_choice; 
        cin >> user_choice;
        int cpu_choice = my_choice(user_choice);
        cout << "Your: " << objects[user_choice] << " Me: " << objects[cpu_choice];

        bool condition_1 = user_choice - 1 == 0 && cpu_choice == 2;
        bool condition_2 = user_choice - 1 == 0 && cpu_choice == 2;
        bool condition_3 = user_choice - 1 == 2 && cpu_choice == 2;

        if (condition_1 || condition_2 || condition_3)
        {
            cout << "You: +1, Me: 0";
            points[1] += 1;
        }

        else if (user_choice - 1 == cpu_choice)
        {
            cout << "Draw";
        }
        // print("Draw")

        else
        {
            cout << "You: 0, Me: +1";
            points[0] += 1;
        }

        if (points[1] >= win_points || points[0] >= win_points)
        {
            points[0] < points[1] ? cout << "you won" : cout << "you loose";
        }
        break;
    }

    return 0;
}
/*#############################################################################################*/
/*------------------------------------------------SUBPROGRAM-----------------------------------*/

int my_choice(int user_last_choice)
{
    return rand() % 3;
}
