
#include <bits/stdc++.h>
using namespace std;
struct Point{
  int x,y;
  void print(Point &a) {
    cout << a.x <<" " << a.y<< endl;
}
  Point mid_point(const Point &a)
  {
      Point trung_diem;
      trung_diem.x = (x+a.x)/2;
      trung_diem.y =(y+a.y)/2;
      return trung_diem;
  }


};
struct Rect{
    Point mypoint;
 int w,h;

 bool contains(const Point &a){
   if(a.x >=0 && a.x <= w && a.y >=0 && a.y<=h){return true;}
   return false;

 }




};
struct Ship{
  Rect myRect;
  string id;
  int dx,dy;
  Point move(){
   myRect.mypoint.x += dx;
   myRect.mypoint.y += dy;
  return myRect.mypoint;
  }
  void display(const Ship &ship){
   cout << ship.id << ' '<< ship.myRect.mypoint.x <<' ' << ship.myRect.mypoint.y << endl;



  }


};
int main()
{
    Point a{0,0};
    Rect myrect{a,10,10};
    Ship myship{myrect,"23021524",5,4};
    myship.move();
    myship.display(myship);



    }






