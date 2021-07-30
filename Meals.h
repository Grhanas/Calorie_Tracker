#ifndef Meals_H
#define Meals_H
#include<iostream>
using namespace std;
#include<string>
class Breakfast{
	private:
		double alinankalori;                                                              
		int kacdefa[52];                                                    
	public:
	
			Breakfast();                                                    //Default ctor
		Breakfast(double deger,int sayi,int week);                          //Ctor
     	Breakfast(const Breakfast& obj,int week);                           //Copy ctor
 		Breakfast &operator=(const Breakfast& obj);                         //Assignment op
		
		void kalorihesabi(string porsiyon,int yedik,int week);               //How much calories taken and how many times eat breakfast for a week
		void sifirlama();                                                    //make 0 all values
		int kacdefahesabi(int week);                                         //return how many times eat breakfast for a week
		
		double getkalori();                                                 //return calories
	   void Print(int week);                                                 //print values
	   Breakfast operator+(Breakfast& z);                                      //+ operator
	   friend ostream & operator<<(ostream& out, const Breakfast& st);             //<< operator
	
};
ostream& operator<<(ostream& out, const Breakfast& st);
            
class Lunch{                                                                       
	private:                                                                      
		double alinankalori;
		int kacdefa[52];
	public:
			Lunch();                                                         //Default ctor
		Lunch(double deger,int sayi,int week);                               //Ctor
	Lunch(const Lunch& obj,int week);                                        //Copy ctor
		Lunch &operator=(const Lunch& obj);                                  //Assignment op
		
		void kalorihesabi(string porsiyon,int yedik,int week);               //How much calories taken and how many times eat lunch for a week
		void sifirlama();                                                    //make 0 all values
		int kacdefahesabi(int week);                                         //return how many times eat lunch for a week
		
		double getkalori();                                                  //return calories
	   void Print(int week);                                                  //print values
	Lunch operator+(Lunch& z);                                               //+ operator
	friend ostream & operator<<(ostream& out,const Lunch& st);               //<< operator
};
ostream & operator<<(ostream& out,const Lunch& st);

class Dinner{
	private:
		double alinankalori;
		int kacdefa[52];
	public:
	
		Dinner();                                                            //Default ctor
		Dinner(double deger,int sayi,int week);                              //Ctor
	Dinner(const Dinner& obj,int week);                                      //Copy ctor
		Dinner &operator=(const Dinner& obj);                                //Assignment op
		
		void kalorihesabi(string porsiyon,int yedik,int week);               //How much calories taken and how many times eat lunch for a week
		void sifirlama();                                                    //make 0 all values
		int kacdefahesabi(int week);                                         //return how many times eat dinner for a week
		
		double getkalori();                                                  //return calories
	   void Print(int week);                                                 //print values
	   Dinner operator+(Dinner &z);                                          //+ operator
	   friend ostream & operator<<(ostream& out,const Dinner& st);           //<< operator
	
};
ostream & operator<<(ostream& out,const Dinner& st);



#endif;
