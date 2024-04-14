#include <iostream>
using namespace std;


class Cuboid
{
    private:
    double length,width,height,volume;
    public:
    inline void setArgument()
    {   
        cin>>length>>width>>height;
        volume = length * width * height;
    }
    inline void outPutVolume() 
    {
        cout<<volume;
    }

};

Cuboid c1,c2,c3;
int main() 
{   
    c1.setArgument();
    c2.setArgument();
    c3.setArgument();
    c1.outPutVolume();
    c2.outPutVolume();
    c3.outPutVolume();
}
