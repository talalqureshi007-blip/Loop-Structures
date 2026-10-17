#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    int marks, sum = 0, count = 0;
    float average;

    cout << "Enter marks (-1 to stop): ";

    while(true)
    {
        cin >> marks;

        if(marks == -1)
        {
            break;
        }

        sum = sum + marks;
        count++;
    }

    if(count > 0)
    {
        average = (float)sum / count;
        cout << "Average = " << average;
    }
    else
    {
        cout << "No marks entered.";
    }
	return 0;
}
