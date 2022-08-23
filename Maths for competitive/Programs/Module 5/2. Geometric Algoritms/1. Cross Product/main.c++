#include <iostream>

using namespace std;

typedef struct Point
{
    int x, y;
    Point(int a, int b){
        x = a;
        y = b;
    }
} Point;

/*
Returned value: 0 (for collinear)
                +ve (for clockwise)
                -ve (for anticlockwise)
*/
int orientation(Point P1, Point P2, Point P3){
    return ((P3.x - P2.x) * (P2.y - P1.y)) - ((P2.x - P1.x) * (P3.y - P2.y));
}

int main(){
    
    return 0;
}