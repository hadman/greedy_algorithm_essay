#include <iostream>

using namespace std;

// непрерывный рюкзак

int main() {
    float W=75; // допустимый вес
    int N=5; // размерность
    int* w = new int[N]; // массив весов
    int* p = new int[N]; // массив стоимости
    float sum=0;

    w[0] = 10;
    p[0] = 60;

    w[1] = 20;
    p[1] = 100;

    w[2] = 30;
    p[2] = 120;

    w[3] = 3;
    p[3] = 9;

    w[4] = 3;
    p[4] = 3;

    for (int i=0; i<N; i++)// идем по предметам
        if(W >= w[i])    //если помещается - берем
        {
            sum += p[i];
            W -= w[i];
            //cout << "W= " << W << endl;
        }
        else
        {
            //cout << "sum = " << sum << endl;
            sum += (W / w[i]) * p[i];// иначе берем сколько можно и выходим
            //cout << W / w[i] << endl;
            //cout << "sum = " << sum << endl;
            break;
        }

    cout << "sum = " << sum << endl;
    return 0;
}
