#include <iostream>

using namespace std;

int main() {
    float x,y;
    cout<<"Введите координату х: "<<endl;
    cin>>x;
    cout<<"Введите координату y: "<<endl;
    cin>>y;
    if(((0 <= y)&&(y <= 4))&&((0 <= x)&&(x <= 3))&&(x >= y)) {
        cout<<"Координаты: "<<x<<","<<y<<" входят в треугольник!"<<endl;
    }
    else {
        cout<<"Координаты: "<<x<<","<<y<<" не входят в треугольник!"<<endl;
    }
    return 0;
}