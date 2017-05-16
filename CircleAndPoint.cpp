// class
//@BaronChang

#include <iostream>
#include <cmath>
#define PI 3.14159265358979

using namespace std;

//point
class DicarPoint
{
public:
	DicarPoint();
	~DicarPoint();
	float getX();
	float getY();
	float getDistance(DicarPoint otherPoint);
	void setX(float x);
	void setY(float y);

private:
	float xDic;
	float yDic;
};
//point's implement
DicarPoint::DicarPoint()
{
	cout << "set a point" << endl;
};
DicarPoint::~DicarPoint()
{
	cout << "freeing memory-remove a point" << endl;
};

float DicarPoint::getX()
{
	return xDic;
};
float DicarPoint::getY()
{
	return yDic;
};

void DicarPoint::setX(float x)
{
	xDic = x;
	cout << "set point x as: " << x << endl;
};
void DicarPoint::setY(float y)
{
	yDic = y;
	cout << "set point y as: " << y << endl;
};

float DicarPoint::getDistance(DicarPoint otherPoint)
{
	float distance;
	float deltX, deltY;
	deltX =abs( this->getX() - otherPoint.getX());
	deltY =abs( this->getY() - otherPoint.getY());
	distance = sqrt(deltX*deltX+deltY*deltY);//same problem
	return distance;
}

//circle
class Circle
{
public:
	Circle(DicarPoint heart,float radius);
	~Circle();
	float getArea();
	float getGrith();
	float getHeartDis(Circle otherCircle);
	void setHeart(DicarPoint heart);
	void reformRadius(float deltRad);
	void relativeCircle(Circle otherCircle);

private:
	DicarPoint circleHeart;
	float circleRadius;
};

Circle::Circle(DicarPoint heart, float radius) :circleHeart(heart), circleRadius(radius)
{
	cout << "set a circle with radius " << radius << " at point (" << heart.getX() << "," << heart.getY() << ")" << endl;
};
Circle::~Circle()
{
	cout << "freeing memory-remove a circle" << endl;
}

float Circle::getArea()
{
	return circleRadius*circleRadius*PI;/*	i don't know why when i program this line as "circleRaduis^2",
											compler warns me that "表达式必须具有整数或未区分范围的枚举类型"*/
};
float Circle::getGrith()
{
	return 2 * PI*circleRadius;
};
float Circle::getHeartDis(Circle otherCircle)
{
	return this->circleHeart.getDistance(otherCircle.circleHeart);
};
void Circle::setHeart(DicarPoint heart)
{
	this->circleHeart = heart;//copy constructive func
	cout << "update the heart of the circle in (" << heart.getX() << "," << heart.getY() << ")" << endl;
};
void Circle::reformRadius(float deltRad)
{
	if (circleRadius + deltRad <= 0)
	{
		cout << "the circle will disappear!" << endl;
	}
	else
	{
		circleRadius += deltRad;
		cout << "update the radius of the circle as " << circleRadius << endl;
	}
};
//TODO:解决圆的5种位置关系：外切，内切，相交，相离，内含；以及内含的特殊情况：同心，重合
int main()
{
	DicarPoint point1;
	DicarPoint point2;

	point1.setX(1);
	point1.setY(1);

	point2.setX(2);
	point2.setY(2);

	cout << "点1和点2的距离是：" << point1.getDistance(point2) << endl;
	
	Circle circle1(point1, 1.0);
	Circle circle2(point2, 2.0);

	cout << "圆1的面积是： " << circle1.getArea() << endl;
	cout << "圆2的周长是： " << circle2.getGrith() << endl;
	cout << "圆1与圆2的圆心距是： " << circle1.getHeartDis(circle2) << endl;

	cout << "==============================\n" << "我们尝试把圆1的半径减少1\n" << endl;
	circle1.reformRadius(-1);

	cout << "==============================\n" << "我们尝试把圆1的半径增加1\n" << endl;
	circle1.reformRadius(1);

	cout << "==============================\n" << "我们尝试把圆2的圆心移动至（3，3）\n" << endl;
	DicarPoint point3;
	point3.setX(3);
	point3.setY(3);
	circle2.setHeart(point3);

	system("pause");
	return 0;
};