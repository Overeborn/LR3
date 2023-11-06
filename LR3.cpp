#include <iostream> //include library input/output
#include <math.h> // include base math library 
using namespace std;// include namespace std

void task_if_15();// create task if

void task_geom_35();// create task geom 

void task_geom_35_1();
                         // create part of task geom
void task_geom_35_2();

int main() {
	int menu;
	cout << "Task number: " << endl; // select task number 
	cout << ">>> ";
	cin >> menu;
	switch (menu) // condition 
	{
	case 1: task_if_15(); break; //options 1
	case 2: task_geom_35(); break; //options 2
	default: cout << "Wrong number !!! (Only 1-2) " << endl; //options 3
	}
	system("pause");
		return 0; // exit to OC
}  
// task selector 

void task_if_15()
{
	cout << ">>>>>  if 15  <<<<<" << endl; // begin

	double A, B, C , sum; // create variables

	cout << "enter the values of:" << endl;// request the values 

	cout << " A:" << endl;
	cout << ">>> "; // values of a 
	cin >> A;

	cout << " B:" << endl;
	cout << ">>> "; // values of b
	cin >> B;

	cout << " C:" << endl;
	cout << ">>> "; // values fo c
	cin >> C;


	if (!cin) { // checking for correctness of values
		if (A >= B && B >= C) { // if A and B largest numbers
			sum = A + B;
		}
		else {
			if (A >= B && B < C) { // if A and C largest numbers
				sum = A + C;
			}
			else { // if B and C largest numbers
				sum = B + C;
			}
		}
	}
	else
	{
		cout << "Incorrect values" << endl; // output if values incorrect 
	}
	cout << "sum of two laregest number: " << sum << endl; // output values 
}
// first task

void task_geom_35()
{
	cout << ">>>>>  GEOM 35  <<<<<" << endl; // begin 

	int menu2;// create variables 
	
	cout << "choose which part of the task you need : " << endl; // request part of task

	cout << endl;

	cout << "1 - circle  or  2 - triangle " << endl; // selector
	cout << ">>> ";
	cin >> menu2;

	switch (menu2) { // condition
	case 1: task_geom_35_1(); break; //first part - circle 
	case 2: task_geom_35_2(); break; // second part - triangle
	default: cout << "Wrong number !!! (Only 1-2) " << endl; // option 3
	}
	
}
//second task ( part selector)

void task_geom_35_1()
{
	cout << ">>>>> CIRCLE PART <<<<<" << endl; // begin

	double a, s_sec, s_seg;
	float x, y, xc, yc, r; // create variables 
	bool a1, a2;

	const double pi = 3.14; // add const pi 

	cout << "enter radius:" << endl; // request radius 
	cout << ">>>  ";
	cin >> r;

	if (cin && r > 0) { //checking for correctness of values

		cout << "enter x:" << endl; // request x 
		cout << ">>>  ";
		cin >> x;

		cout << "enter y:" << endl; //request y 
		cout << ">>>  ";
		cin >> y;

		xc = x - r / sqrt(2); // calculated coordinate of circle center
		yc = y - r / sqrt(2);

		a1 = x < 0 && xc * xc + yc * yc < r * r; //condition true 
		a2 = 0; // condition false 

		if (a1 || a2) { // location check
			cout << "point in circle " << endl; // in circle 
		}
		else {
			cout << "point out circle " << endl; // out of circle 
		}
	}
	else {
		cout << "incorrect values" << endl; // output for incorrect values 
	}

	cout << "Enter angle in degrees a=" << endl; // reques degrees
	cout << ">>> ";
	cin >> a;

	s_seg = r * r / 2 * (pi * a / 180 - sin(a)); // calculated of segment area 

	cout << "segment area: " << s_seg << endl; // output values of segment  area 

}
// second task (first part - circle)

void task_geom_35_2()
{
	cout << ">>>>>  TRIANGLE PART  <<<<<" << endl; // begin

	float h, xt, yt, xb, yb, x, y, P, f1, f2, b1, S; // create variables 
	bool a3, a4;

	cout << "enter h: " << endl;// request values of h
	cout << ">>> ";
	cin >> h;

	if (cin && h > 0) {

		cout << "enter x: " << endl;// request values of x
		cout << ">>> ";
		cin >> x;

		cout << "enter y: " << endl;// request values of y
		cout << ">>> ";
		cin >> y;

		cout << "enter the triangle vertex coordinates X:" << endl;// request values of vertex coordinate x 
		cout << ">>> ";
		cin >> xt;

		cout << "enter the triangle vertex coordinates Y:" << endl;// request values of vertex coordinate y
		cout << ">>> ";
		cin >> yt;


		xb = xt - h / 2; // calculated base coordinate of triangle 
		yb = yt;

		a3 = x >= xb && x <= (xb + h) && y >= yb && y <= (yb + sqrt(3.0) / 2 * h); // condition true 
		a4 = 0;// condition false 

		if (a3 || a4) {
			cout << "point inside triangle " << endl; // output if point inside 
		}
		else {
			cout << "point outside triangle " << endl; // output if point outside
		}
	}
	else {
		cout << "incorrect values"; // output if values incorrect 
	}

	cout << endl;

	cout << "enter the side of the triangle:" << endl;

	cout << "first side: " << endl;// request values of 
	cout << ">>> ";
	cin >> f1;

	cout << "base side: " << endl; // request values of 
	cout << ">>> ";
	cin >> b1;

	P = f1 * 2 + b1; // calculated of perimeter 

	cout << "triangle perimeter:  " << P << endl;// output values of perimeter 

	S = b1 * h / 2; //calculated of area 

	cout << "area of a triangle:  " << S << endl; // output values of area

}
// second task (second part - triangle)