//#include <iostream>
//using namespace std;
//
//class Rectangle
//{
//protected:
//	int width, height;
//public:
//	Rectangle(int width, int height)
//	{
//		this->width = width;
//		this->height = height;
//	}
//	virtual void SetWidth(int width)
//	{
//		this->width = width;
//	}
//	virtual void SetHeight(int height)
//	{
//		this->height = height;
//	}
//	int GetWidth()
//	{
//		return this->width;
//	}
//	int GetHeight()
//	{
//		return this->height;
//	}
//	virtual int area()
//	{
//		return width*height;
//	}
//	bool is_rectangle()
//	{
//		return this->GetWidth() != this->GetHeight();
//	}
//};
//
//class Square :public Rectangle
//{
//public:
//	Square(int size) :Rectangle(size, size) {}
//	void SetWidth(int size)
//	{
//		this->width = this->height = size;
//	}
//	void SetHeight(int size)
//	{
//		this->width = this->height = size;
//	}
//	int area()
//	{
//		return this->width*this->height;
//	}
//};
//
//void process(Rectangle r)
//{
//	int w = r.GetWidth();
//	if(r.is_rectangle())
//		r.SetHeight(10);
//
//	cout << "expected area: " << w*r.GetHeight() << "\n";
//	cout << "actual area: " << r.area() << "\n";
//}
//
//void main()
//{
//	Rectangle r(3, 4);
//	cout << r.area()<<"\n";
//	process(r);
//	Square s(5);
//	cout << s.area() << "\n";
//	process(s);
//}