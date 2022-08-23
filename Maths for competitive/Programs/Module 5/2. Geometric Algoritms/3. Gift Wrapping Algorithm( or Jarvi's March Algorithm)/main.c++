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

int orientation(Point P1, Point P2, Point P3){
    return ((P3.x - P2.x) * (P2.y - P1.y)) - ((P2.x - P1.x) * (P3.y - P2.y));
}

bool onSegment(Point P1, Point P2, Point q){
    return (q.x <= max(P1.x, P2.x)) && (q.x >= min(P1.x, P2.x)) && (q.y <= max(P1.y, P2.y)) && (q.y >= min(P1.y, P2.y));
}

// This code doesn't handle collinear points
void convexHull(Point arr[], int n){
    if(n < 3){
        return;
    }
    int lm = 0;
    for (int i = 1; i < n; i++)
    {
        // The second condition of the or is for handelling collinear points.
        if ((arr[i].x < arr[lm].x) || ((arr[i].x == arr[lm].x) && (arr[i].y > arr[lm].y)))
        {
            lm = i;
        }
    }
    int p = lm, q;
    do
    {
        cout<<arr[p].x<<", "<<arr[p].y<<"\n";
        q = (p + 1) % n;
        for (int i = 0; i < n; i++)
        {
            if (orientation(arr[p], arr[i], arr[q]) < 0)
            {
                q = i;
            }

            // This if is used to handle collinear cases and hence written function onSegment.
            if (p != i && orientation(arr[p], arr[i], arr[q]) == 0 && onSegment(arr[p], arr[q], arr[i]))
            {
                q = i;
            }
            
        }
        p = q;
    } while (p != lm);
    
}

int main(){

    return 0;
}