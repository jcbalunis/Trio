#include <iostream>
using namespace std;


void rearrangeColor (int&, int&, int&);
int main()
{
        //DO NOT CHANGE WITHIN THIS AREA...
        int red, blue, green;
        cout<<"Enter Red, Green, and Blue values: ";
        cin>>red>>green>>blue;
        //...END OF "DO NOT CHANGE" AREA


        rearrangeColor( red, green, blue);


        //DO NOT CHANGE WITHIN THIS AREA...
        cout<<"Rearranged....\n";
        cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
        return 0;
        //...END OF "DO NOT CHANGE" AREA
}

void rearrangeColor (int& Red, int& Green, int& Blue)
{
        int tempR, tempG, tempB;

        tempR = Red;
        tempG = Green;
        tempB = Blue;

        if( tempG > Red )
        {
                Red = tempG;
        }
        if( tempB > Red) 
        {
                Red = tempB;
        }
        if(Blue > tempR)
        { 
                Blue = tempR;
        }
        if( Blue > tempG)
        {
                Blue = tempG;
        }
        if( Red == tempR && Blue == tempB)
        {
                Green = tempG;
        }
        if( Red == tempG && Blue == tempR)
        {
                Green = tempB;
        }
        if( Red == tempB && Blue == tempG)
        {
                Green = tempR;
        }
        if(Red == tempG && Blue == tempB)
        {
                Green = tempR;
        }
        





}
