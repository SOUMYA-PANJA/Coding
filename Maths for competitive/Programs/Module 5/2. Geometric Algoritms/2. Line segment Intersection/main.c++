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
Points P1, P2, P3, P4;
orientation(P1, P3, P2) != orientation(P1, P4, P2) then line P1-P2 and P3-P4 intersect.
Special Case when P1, P2 and P3 become collinear. Then orientation(P1, P4, P2) = counterclockwise
and orientation(P1, P3, P2) = collinear.
Therefore the condition becomes:
orientation(P1, P3, P2) != orientation(P1, P4, P2) && orientation(P3, P1, P4) != orientation(P3, P2, P4)


There are also cases where lines are collinear but sometimes intersect and sometimes not. It mainly occurs when one line is segment of other.

*/
bool onSegment(Point P1, Point P2, Point q){
    return (q.x <= max(P1.x, P2.x)) && (q.x >= min(P1.x, P2.x)) && (q.y <= max(P1.y, P2.y)) && (q.y >= min(P1.y, P2.y));
}

int orientation(Point P1, Point P2, Point P3){
    return ((P3.x - P2.x) * (P2.y - P1.y)) - ((P2.x - P1.x) * (P3.y - P2.y));
}
/*
bool intersect(Point P1, Point P2, Point P3, Point P4){
    return (orientation(P1, P3, P2) != orientation(P1, P4, P2)) && (orientation(P3, P1, P4) != orientation(P3, P2, P4));
}
*/

bool notSame(int x1, int x2){
    return (x1 < 0 && x2 >= 0) || (x1 > 0 && x2 <= 0) || (x1 == 0 && x2 != 0);
}


bool doIntersect(Point P1, Point P2, Point P3, Point P4){
    int O1 = orientation(P1, P3, P2);
    int O2 = orientation(P1, P4, P2);
    int O3 = orientation(P3, P1, P4);
    int O4 = orientation(P3, P2, P4);
    if(notSame(O1, O2) && notSame(O3, O4)){
        return true;
    }
    if (O1 == 0 && O2 == 0)
    {
        return onSegment(P1, P2, P3) || onSegment(P1, P2, P4);
    }
    return false;
}

int main(){
    
    return 0;
}