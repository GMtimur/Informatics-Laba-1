#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char* argv[]) {
    bool isHuman = false;
	if (argc <= 1 || strcmp(argv[1], "false") != 0)
	{
		isHuman = true;
	}
    float x,y;
    if(isHuman){ 
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