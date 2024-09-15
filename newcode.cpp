#include <iostream>

using namespace std;

int main() {
    float x,y;
    bool interface;
    cin>>interface;
    if(interface){ 
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
    }
    else{
        cin>>x;
        cin>>y;
        if(((0 <= y)&&(y <= 4))&&((0 <= x)&&(x <= 3))&&(x >= y)) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}