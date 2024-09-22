#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char* argv[]) {
    bool isHuman = false;
    float x = 1, y = 1;
	if (argc <= 1 || strcmp(argv[1], "false") != 0)
	{
		isHuman = true;
	}
    if(isHuman){
        while(x != 0 || y != 0){
            cout << "Введи координату х: ";
            cin >> x;  
            cout << "Введи координату y: ";
            cin >> y;
            if (x <= 3 && x >= 0)
            {
                float y1 = 0;
                y1 =  -4.0/3 * x + 4;
            if ((y <= y1) && (y >= 0))
            {
                cout << "Координаты: " << x << ", " << y << " входят в треугольник!" << endl;
            }
            else
            {
                cout << "Координаты: " << x << ", " << y << " не входят в треугольник!" << endl;
            }
            }
            else{
                cout << "Координаты: " << x << ", " << y << " не входят в треугольник!" << endl;
            }
        } 
    }
    else{
        while(x != 0 || y != 0){
            cin >> x;  
            cin >> y;
            if (x <= 3 && x >= 0)
            {
                float y1 = 0;
                y1 =  -4.0/3 * x + 4;
                if ((y <= y1) && (y >= 0))
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else{
                cout << "NO" << endl;
            }
        } 
    }
    return 0;
}