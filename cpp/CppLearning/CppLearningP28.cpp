#include<iostream>
#include<cassert>
#include<vector>
using namespace std;

class Point{
public:
    Point(int x = 0, int y = 0):x(x),y(y){};
    ~Point(){
        cout << "deleting Points..." <<endl;
    }
    int getX() const {return x;}
    int getY() const {return y;}
    void move(int newX,int newY){
        x = newX;
        y = newY;
    }
private:
    int x;
    int y;
};
class ArrayofPoints{
public:
    ArrayofPoints(int size):size(size){
        points = new Point[size];
    }
    ArrayofPoints(const ArrayofPoints &arrayofPoints){
        this->size = arrayofPoints.size;
        this->points = new Point[this->size];
        for(int i = 0; i < this->size;i++){
            this->points[i]  = arrayofPoints.points[i];
        }
    }
    ~ArrayofPoints(){
        cout << "Deleting..." << endl;
        delete[] points;
    }
    Point &element(int index){
        assert(index >=0 && index < size);
        return points[index];
    }
private:
    Point *points;
    int size;
};
int main(){
    cout << "please input a new number:" <<endl;
    int n = 5;
    cin >> n;
    // vector<int> res(n);
    // for(auto v:res)
    //     cout << v << endl;
    ArrayofPoints pointsArray1(n);
    pointsArray1.element(0).move(5,0);
    pointsArray1.element(1).move(10,2);
    //深浅拷贝问题
    ArrayofPoints pointsArray2 = pointsArray1;
    cout << "Copy of pointsArray1" << endl;
    cout << "Point_0 of array2:" << \
    pointsArray2.element(0).getX() << " ," \
        << pointsArray2.element(0).getY() <<endl;
    cout << "Point_1 of array2:" << \
    pointsArray2.element(1).getX() << " ," \
        << pointsArray2.element(1).getY() <<endl;   
    return 0;
}