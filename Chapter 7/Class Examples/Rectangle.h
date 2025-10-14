class Rectangle {
public:
    Rectangle(int length, const int width);
    int getArea() const;
    void setWidth(int width);
private:
    int m_Length;
    int m_Width;
};