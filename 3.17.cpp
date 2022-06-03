#include <iostream>
using namespace std;
int main()
{

    double Ax1 = -1, Ay1 = -2, Bx1 = 2, By1 = -2, Cx1 = 2, Cy1 = 0, Dx1 = -1, Dy1 = 0;
    double Ax2 = -4, Ay2 = -1, Bx2 = 1, By2 = -1, Cx2 = 1, Cy2 = 2, Dx2 = -4, Dy2 = 2;
    double Ax3, Ay3, Cx3, Cy3;
    if (Bx2 < Ax1 || Cy2 < By1) {

        cout << "These squares don't intersect";

    }
    else if (Bx2 > Ax1 || Bx2 == Ax1) {
        Ax3 = Ax1;
        Ay3 = Ay1;
        Cx3 = Cx2;
        Cy3 = Cy2;
        cout << "The coordinates of the lower left angle of the rectangle at the intersection of the squares: " << "\n" << "x = " << Ax3 << "\n" << "y = " << Ay3 << "\n";
        cout << "The coordinates of the upper right angle of the rectangle at the intersection of the squares: " << "\n" << "x = " << Cx3 << "\n" << "y = " << Cy3;
    }

    return 0;
}

