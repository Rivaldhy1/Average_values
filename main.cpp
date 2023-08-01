#include <iostream>
#include <iomanip>

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

    double finalScore = static_cast<double>(result) / subjects;
    cout << "Nilai rata rata mu adalah : " << fixed << setprecision(1) << finalScore << endl;
}
