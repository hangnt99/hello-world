#include<bits/stdc++.h>

using namespace std;

class Point {
public:
    double x;
    double y;
    Point(double x=0, double y=0) {
        this->x=x;
        this->y=y;
    }
};

class Line {
public:
    Point Start;
    Point End;
    Line(Point Start, Point End)
    {
        this->Start = Start;
        this->End = End;
    }
};

int main()
{
    double x,y;
    cin >> x >> y;
    Point A(x,y);
    cin >> x >> y;
    Point B(x,y);
    cin >> x >> y;
    Point C(x,y);
    cin >> x >> y;
    Point D(x,y);
    Line AB(A,B);
    Line CD(C,D);
    double a1 =(AB.End.y-AB.Start.y)/(AB.End.x-AB.Start.x);
    double b1 =(AB.End.y-a1*AB.End.x);
    double a2 =(CD.End.y-CD.Start.y)/(CD.End.x-CD.Start.x);
    double b2 =(CD.End.y-a1*AB.End.x);
    if(a1!=a2) {
        double x = (b2-b1)/(a1-a2);
        double y = a1*x+b1;
        cout << fixed << setprecision(2) << x << " " << y;
    }
    else if(a1==a2 && b1!=b2) {
        cout << "NO";
    }
    else {
        cout << "MANY";
    }
    return 0;
}
