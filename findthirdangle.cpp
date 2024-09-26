#include <iostream>
using namespace std;
int main()
{

    float angl1, angl2, angl3;
    cout << " find the angle of a triangle :" << endl;
    cout << "_____________" << endl;

    cout << " enter the 1st angle of the trangle :" << endl;
    cin >> angl1;
    cout << " enter the 2nd angle of the trangle :" << endl;
    cin >> angl2;
    


    angl3 = 180 - (angl1 + angl2);

    cout << " the 3rd of the trangle :" << angl3 << endl; 

    cout << endl;

    return 0;
}
