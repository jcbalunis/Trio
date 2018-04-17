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

        if( Green > Red )
        {
                Red = tempG;
        }
        if( Blue > Red) 
        {
                Red = tempB;
        }
        if(Green = Red)
        {
        Green = 0;
        }
        if(( Green < tempB) && ( Red != tempB))
        {
                Green = tempB;
        }
        if(( Green < tempR) && (Red != tempR))
        {
                Green = tempR;
        }
        if(Blue > tempR)
        { 
                Blue = tempR;
        }
        if( Blue > tempG)
        {
                Blue = tempG;
        }





}
