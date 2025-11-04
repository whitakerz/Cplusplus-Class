#include <iostream>
using namespace std;

class rectangle
{
    public:
    rectangle();
    rectangle(float len, float wid) : mlength(len), mwidth(wid)
    {
        marea = mlength * mwidth;
        mperimeter = 2 * (mlength + mwidth);
    }
    ~rectangle();

    private:
    float mlength;
    float mwidth;
    float marea;
    float mperimeter;

    float getArea()
    {
        return marea;
    }
    float getPerimeter()
    {
        return mperimeter;
    }

    void setLength(float len)
    {
        mlength = len;
    }
    void setWidth(float wid)
    {
        mwidth = wid;
    }

};

int main()
{

}