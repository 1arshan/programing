#include <iostream>
using namespace std;

class CPolygon
{
	protected:
		int width, height;
	public:
		void setup (int first, int second)
		{
			width= first;
			height= second;
		}
		virtual float area()
		{
			return (0);
		}
}; 

class CRectangle: public CPolygon
{
	public:
		float area()
		{
			return (width * height);
		}
}; 

class CTriangle: public CPolygon
{
	public:
		float area()
		{
			return (width * height / 2);
		}
}; 

int main ()
{	cout<<"NAME: ARSHAN AHMAD ; ROLL NO: 18BCS075"<<endl;
	CRectangle rectangle;
	CTriangle triangle;
	CPolygon polygon; 

	CPolygon * ptr_polygon1 = &rectangle;
	CPolygon * ptr_polygon2 = &triangle;
	CPolygon * ptr_polygon3 = &polygon;

	ptr_polygon1->setup(2,2);
	ptr_polygon2->setup(5,6);
	ptr_polygon3->setup(2,2);

	cout << ptr_polygon1->area () << endl;
	cout << ptr_polygon2->area () << endl;
	cout << ptr_polygon3->area () << endl;

	return 0;
}