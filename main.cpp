#include <iostream>

using namespace std;

void averages(int subjects);

int main()
{
    int subjects;

    cout << "Berapa mata pelajaran anda : ";
    cin >> subjects;
    averages(subjects);

    cin.get();
    return 0;
}

void averages(int subjects)
{
    int subject;
    int result = 0;

    for (int i = 1; i <= subjects; i++)
    {
        cout << "Nilai ke " << i << ": ";
        cin >> subject;
        result += subject;
    }

    int finalScore = result / subjects;
    cout << "Nilai rata rata mu adalah : " << finalScore << endl;
}