// Abdur Razzak
// Daffodil International University

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <set>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define LLU long long unsigned
#define row 205
#define col 205
#define MAX 1006
#define jora pair <int, int>
#define memo(array, value) memset(array, value, sizeof(array))
#define pb push_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define mod 7477777
#define PI 3.1415926535897932384626433832795


double Area;
    char ch[5];
    char str[5];

class circle_detail{
    public:
        double radius, area;

};

class triangle_detail{
    public:
        double base, height, area;

};

class rectangle_detail{
    public:
        double width, height, area;

};

class square_detail{
    public:
        double side, area;

};

class parallelogram_detail{
    public:
        double base, height, area;

};

vector <circle_detail> circle;
vector <triangle_detail> triangle;
vector <rectangle_detail> rectangle;
vector <square_detail> square;
vector <parallelogram_detail> parallelogram;

class Shape{

    private:
        double base;        // base of triangle or Parallelogram
        double height;      // Vartical height of  triangle or Parallelogram or Rectangle
        double width;       //  height of triangle or Parallelogram or Rectangle
        double side;        // length of side for Square
        double redius;      // Redius of Circle


        public:

            // all get method to calculate the all Shapes area
            double get_area_of_Circle (){
                return PI * ( redius * redius );
            }

            double get_area_of_Triangle (){
                return ( base * height ) / 2;
            }

            double get_area_of_Rectangle (){
                return width * height;
            }

            double get_area_of_Square (){
                return side * side;
            }

            double get_area_of_Parallelogram (){
                return base * height;
            }


            // all set method to set the all Shapes parameters

            void set_area_of_Circle (double redi){
                redius = redi;
            }

            void set_area_of_Triangle (double bas, double hei){
                base = bas;
                height = hei;
            }

            void set_area_of_Rectangle (double wid, double hei){
                width = wid;
                height = hei;
            }

            void set_area_of_Square (double sid){
                side = sid;
            }

            void set_area_of_Parallelogram (double bas, double hei){
                base = bas;
                height = hei;
            }
};


class Menubar{

    public:

        void print_info (){
            NL;
            puts ("------------------- Main Menu ------------------------");NL;
            puts ("    1. Press 'c' to calculate the area of Circle");
            puts ("    2. Press 't' to calculate the area of Triangle");
            puts ("    3. Press 'r' to calculate the area of Rectangle");
            puts ("    4. Press 's' to calculate the area of Square");
            puts ("    5. Press 'p' to calculate the area of Parallelogram"); NL;NL;

            puts ("    6. Press 'a' to to show each type of Shapes most recently Calculated");
            puts ("    7. Press 'd' to deletes the most recently calculated area of each Shape from the Memory");
            puts ("    8. Press 'q' to Quits the Programe"); NL;

            printf ("Please choose your character : ");
            NL;
        }


        void Option (){
            NL;
            puts ("------------------- Option Menu ------------------------");NL;
            puts ("     Press 1 to return the Main menu: ");
            puts ("     Press 2 to Calculate again the area of existing Shape: ");
            puts ("     Press 'q' to return the Main menu and Quit the Programe: ");

            printf ("Please choose your option : ");

        }

        void shortoption (){
            NL;
            puts ("------------------- Option Menu ------------------------");NL;
            puts ("     Press 1 to return the Main menu: ");
            puts ("     Press 'q' to return the Main menu and Quit the Programe: ");

            printf ("Please choose your option : ");

        }
};




class showShapeSolution{
    public:
        void showing_circle(){
            int len = circle.size();
            if(len == 0){
                puts("Circle has no shape to show ! \n");
                return;
            }
            int i, j, k, st, en, kase = 0;
            if(len > 3)
                st = len-3;
            else
                st = 0;
            puts("Results are sorted in most recent manner\n");
            circle_detail c;

            for( i=st ; i<len ; i++ ){
                c = circle[i];
                cout << ++kase <<  ". Area of the Circle is: " << c.area << endl;
                cout << "Radius of the Circle is: " << c.radius << endl << endl;
            }
            return;
        }

        void showing_triangle(){
            int len = triangle.size();
            if(len == 0){
                puts("Triangle has no shape to show ! \n");
                return;
            }
            int i, j, k, st, en, kase = 0;
            if(len > 3)
                st = len-3;
            else
                st = 0;
            puts("Results are sorted in most recent manner\n");
            triangle_detail t;
            for( i=st ; i<len ; i++ ){
                t = triangle[i];
                cout << ++kase <<  ". Area of the triangle is: " << t.area << endl;
                cout << "Base of the triangle is: " << t.base << endl << endl;
                cout << "height of the triangle is: " << t.height << endl << endl;
            }
            return;
        }

        void showing_rectangle(){
            int len = rectangle.size();
            if(len == 0){
                puts("Rectangle has no shape to show ! \n");
                return;
            }
            int i, j, k, st, en, kase = 0;
            if(len > 3)
                st = len-3;
            else
                st = 0;
            puts("Results are sorted in most recent manner\n");
            rectangle_detail r;
            for( i=st ; i<len ; i++ ){
                r = rectangle[i];
                cout << ++kase <<  ". Area of the Rectangle is: " << r.area << endl;
                cout << "Width of the Rectangle is: " << r.width << endl;
                cout << "Height of the Rectangle is: " << r.height << endl << endl;
            }
            return;
        }

        void showing_square(){
            int len = square.size();
            if(len == 0){
                puts("Square has no shape to show ! \n");
                return;
            }
            int i, j, k, st, en, kase = 0;
            if(len > 3)
                st = len-3;
            else
                st = 0;
            puts("Results are sorted in most recent manner\n");
            square_detail s;
            for( i=st ; i<len ; i++ ){
                s = square[i];
                cout << ++kase <<  ". Area of the Square is: " << s.area << endl;
                cout << "Side of the Square is: " << s.side << endl << endl;
            }
            return;
        }

        void showing_parallelogram(){
            int len = parallelogram.size();
            if(len == 0){
                puts("Parallelogram has no shape to show ! \n");
                return;
            }
            int i, j, k, st, en, kase = 0;
            if(len > 3)
                st = len-3;
            else
                st = 0;
            puts("Results are sorted in most recent manner\n");
            parallelogram_detail p;
            for( i=st ; i<len ; i++ ){
                p = parallelogram[i];
                cout << ++kase <<  ". Area of the parallelogram is: " << p.area << endl;
                cout << "base of the Parallelogram is: " << p.base << endl;
                cout << "height of the Parallelogram is: " << p.height << endl << endl;
            }
            return;
        }
};

void showresult(){
    NL; NL;
    Menubar menu;
    showShapeSolution res;
    res.showing_circle();
    res.showing_triangle();
    res.showing_rectangle();
    res.showing_square();
    res.showing_parallelogram();

    menu.shortoption();
     scanf ("%s", str);


    system ("cls");
    if (str[0] == '1' || str[0] == 'q'){
        system ("cls");
        menu.print_info ();
    }
}



void Circle_check (){

    Shape circle_area_shape;        // Declare circle_area_shape of type Shape
    Menubar menu;

    Area = 0.0;
    double redius;
    circle_detail c;

    printf ("Please enter the 'Redius' to Calculate the area of Circle: ");

    scanf ("%lf", &redius);
    circle_area_shape.set_area_of_Circle ( redius );
    Area = circle_area_shape.get_area_of_Circle ();
    c.area = Area;
    circle.pb(c);

    printf ("The area of Circle is : %lf\n\n", Area);

    menu.Option ();
    scanf ("%s", str);


    system ("cls");
    if (str[0] == '1' || str[0] == 'q'){
        system ("cls");
        menu.print_info ();
    }
    else if (str[0] == '2')
        Circle_check ();
}


void Triangle_check (){

    Shape triangle_area_shape;      // Declare triangle_area_shape of type Shape
    Menubar menu;

    Area = 0.0;
    double base, height;
    triangle_detail t;

    printf ("Please enter the 'Base' & 'Height' to Calculate the area of Triangle: ");
    scanf ("%lf %lf", &base, &height);
    triangle_area_shape.set_area_of_Triangle ( base, height );
    Area = triangle_area_shape.get_area_of_Triangle ();

    t.area = Area;
    triangle.pb(t);
    printf ("The area of Triangle is %lf\n\n", Area);

    menu.Option ();

    scanf ("%s", str);

    system ("cls");
    if (str[0] == '1' || str[0] == 'q'){
        system ("cls");
        menu.print_info ();
    }
    else if (str[0] == '2')
        Triangle_check ();
}

void Rectangle_check (){

    Shape rectangle_area_shape;      // Declare rectangle_area_shape of type Shape
    Menubar menu;

    Area = 0.0;
    double width, height;
    rectangle_detail r;

    printf ("Please enter the 'Width' & 'Hight' to Calculate the area of Rectangle: ");
    scanf ("%lf %lf", &width, &height);
    rectangle_area_shape.set_area_of_Rectangle ( width, height );
    Area = rectangle_area_shape.get_area_of_Rectangle ();

    r.area = Area;
    rectangle.pb(r);
    printf ("The area of Rectangle is %lf\n\n", Area);

    menu.Option();

    scanf ("%s", str);

    system ("cls");
    if (str[0] == '1' || str[0] == 'q'){
        system ("cls");
        menu.print_info ();
    }
    else if (str[0] == '2')
        Rectangle_check ();

}


void Square_check (){

    Shape square_area_shape;          // Declare square_area_shape of type Shape
    Menubar menu;

    Area = 0.0;
    double side;
    square_detail s;

    printf ("Please enter the 'Side' to Calculate the area of Square: ");
    scanf ("%lf", &side);
    square_area_shape.set_area_of_Square ( side );
    Area = square_area_shape.get_area_of_Square ();

    s.area = Area;
    square.pb(s);
    printf ("The area of Square is %lf\n\n", Area);

    menu.Option();

    scanf ("%s", str);

    system ("cls");
    if (str[0] == '1' || str[0] == 'q'){
        system ("cls");
        menu.print_info ();
    }
    else if (str[0] == '2')
        Square_check ();
}


void Parallelogram_check (){

    Shape Parallelogram_area_shape;     // Declare Parallelogram_area_shape of type Shape
    Menubar menu;

    Area = 0.0;
    double base, height;
    parallelogram_detail p;


    printf ("Please enter the 'Base' & 'Height' to Calculate the area of Parallelogram: ");
    scanf ("%lf %lf", &base, &height);
    Parallelogram_area_shape.set_area_of_Parallelogram ( base, height );
    Area = Parallelogram_area_shape.get_area_of_Parallelogram ();

    p.area = Area;
    parallelogram.pb(p);
    printf ("The area of Parallelogram is %lf\n\n", Area);

    menu.Option();

    scanf ("%s", str);

    system ("cls");
    if (str[0] == '1' || str[0] == 'q'){
        system ("cls");
        menu.print_info ();
    }
    else if (str[0] == '2')
        Parallelogram_check ();
}




void deleterecent(){
        NL;
        NL;
        Menubar  menu;

        if( circle.size() > 0 ){
            circle.pop_back();
             puts("Most recent Circle area deleted\n");
        }

        else
            puts("NO Circle area to delete\n");
        if( triangle.size() > 0 ){
            triangle.pop_back();
            puts("Most recent Triangle area deleted\n");
        }
        else
        puts("NO Triangle area to delete\n");
        if( rectangle.size() > 0 ){
            rectangle.pop_back();
            puts("Most recent Rectangle area deleted\n");
        }
        else
            puts("NO Rectangle area to delete\n");
        if( square.size() > 0 ){
            square.pop_back();
            puts("Most recent Square area deleted\n");
        }
        else
            puts("NO Square area to delete\n");
        if( parallelogram.size() > 0 ){
            parallelogram.pop_back();
            puts("Most recent parallelogram area deleted\n");
        }
        else
            puts("NO parallelogram area to delete\n");

        menu.shortoption ();
        scanf ("%s", str);


        system ("cls");
        if (str[0] == '1' || str[0] == 'q'){
            system ("cls");
            menu.print_info ();
        }

}





int main(){
   Menubar menu;

    menu.print_info ();

	while (gets (ch) ){
	    if (ch[0] == 'q')
            break;

        if (ch[0] == 'c'){
            system ("cls");
            Circle_check ();
        }


        else if (ch[0] == 't'){
            system ("cls");
            Triangle_check ();
        }

        else if (ch[0] == 'r'){
            system ("cls");
            Rectangle_check ();
        }
        else if (ch[0] == 's'){
            system ("cls");
            Square_check ();
        }
        else if (ch[0] == 'p'){
            system ("cls");
            Parallelogram_check ();
        }
        else if (ch[0] == 'a'){
            system ("cls");

            if ( circle.size () == 0 && triangle.size () == 0 && rectangle.size () == 0 && square.size () == 0 && parallelogram.size () == 0 ){
                NL;
                puts ("Your Vector array is empty !!!!! please choose ('c' or 't' or 'r' or 's' or 'p') option to fill your Vector");
                NL;
                menu.print_info ();
            }
            else{
                system ("cls");
                showresult();
            }
        }
        else if (ch[0] == 'd'){
            system ("cls");
            deleterecent ();
        }
	}
    return 0;
}

