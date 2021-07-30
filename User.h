#ifndef User_H
#define User_H
#include<iostream>
using namespace std;
#include<string>

#include"Meals.h"
#include"Sports.h"

class User{
	private:
	double gunlukkalinankalori[52][7];
	double haftalikalinankalori[52];
	double gunlukyakilankalori[52][7];
	double haftalikyakilankalori[52];
		Breakfast kahvalti;
		Lunch ogle;
		Dinner aksam;
		Football futbol;
		Basketball basketbol;
		Tennis tenis;
		Swimming yuzme;
	  double temp[52];
	  string name;
	  string surname;
	  int ID;
	  double kilo;
		
	public:
	
		User(Breakfast a,Lunch b,Dinner c,Football d,Basketball e,Tennis f,Swimming g,int week,int gun);                 //transfer the day values to week and find total taken and total burned calories
        double gethaftalikalinankalori(int week);                                                                        //return total taken calories for a week
        double gethaftalikyakilankalori(int week);                                                                       //return total burned calories for a week
        User();                                                                                                          //Default ctor
        User(string ad,string soyad,int id,int kg);                                                                      //Ctor
        User(const User& other);                                                                                         //Copy Ctor
        User &operator=(const User& other);                                                                              //Assignment op
        User operator+(User& z);                                                                                         //+ operator
        friend ostream& operator<<(ostream& out,const User& st);                                                         //<< operator
        void Print();                                                                                                    //print functions
	};
        ostream& operator<<(ostream& out,const User& st);


#endif;
