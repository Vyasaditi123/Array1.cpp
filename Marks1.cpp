//wap to generate percentage of student by declaring 
#include <iostream>

using namespace std;

int main()
{
    float p, c, m, e, h, total, average, percentage;
    
    // p, c, m, e, and h are the five subjects
    // p = physics
    // c = chemistry
    // m = math
    // e = english
    // h = history

    cout << "Enter the marks of five subjects::\n";
    cin >> p >> c >> m >> e >> h;

    // Calculate total, average and percentage
    total = p + c + m + e + h;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;

    // Output
    cout << "The Total marks   = " << total << "/500\n";
    cout << "The Average marks = " << average << "\n";
    cout << "The Percentage    = " << percentage << "%";

    return 0;
}
