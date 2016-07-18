#include <iostream>
#include <vector>

using namespace std;

// задача о заявках


int main(int argc, char const *argv[])
{
	int N=8; // размерность
	vector<int> setAs;
	vector<int> setAf;
    int* s = new int[N]; // вектор начала занятий
    int* f = new int[N]; // вектор концов занятий
    int j; // номер последней подходящей заявки


    // Заявки упорядочены в порядке возрастания времени окочания.

    s[0] = 9;
    f[0] = 10;

    s[1] = 8;
    f[1] = 10;

    s[2] = 10;
    f[2] = 11;

    s[3] = 10;
    f[3] = 12;

    s[4] = 8;
    f[4] = 12;

    s[5] = 11;
    f[5] = 13;

    s[6] = 12;
    f[6] = 13;

    s[7] = 13;
    f[7] = 14;

    setAs.push_back(s[0]);
    setAf.push_back(f[0]);
    int A_finish = f[0]; // время общего окончания. По умолчанию первая заявка в множестве
    j=0;

    for (int i = 1; i < N; ++i)
    {
    	if (s[i] >= A_finish)
    	{
    	    setAs.push_back(s[i]);
    	    setAf.push_back(f[i]);
    		A_finish = f[i]; // добавляем в множество
    		j = i;
    	}
    }

    for(int i=0; i < setAs.size(); i++)
    {
        cout << setAs[i] << " - " << setAf[i] << endl;
    }

    cout << "last start: "<< s[j] << endl;
    cout << "last finish: " << A_finish << endl;


	return 0;
}
