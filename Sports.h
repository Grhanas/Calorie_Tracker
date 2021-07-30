#ifndef Sports_H
#define Sports_H
#include<iostream>
using namespace std;
#include<string>

class Football{                                                                        
	private:
		double yakilankalori;
		int kacdefa[52];
	public:
	
		Football();                                                                   //Default ctor
		
		Football(double deger,int sayi,int week);                                     //Ctor
	    Football(const Football& obj,int week);                                       //Copy ctor
		Football &operator=(const Football& obj);                                     //Assignment op
		
		void kalorihesabi(int dakika,int yedik,int week);                             //How much calories burned and how many times play football for a week
		void sifirlama();                                                             //make 0 all values
		int kacdefahesabi(int week);                                                  //return how many times play football for a week
		double getkalori();                                                           //return burned calories
		void Print(int week);                                                         //print values
		Football operator+(Football& z);                                              //+ operator
		friend ostream& operator<<(ostream& out,const Football& st);                  //<< operator
};
ostream& operator<<(ostream& out,const Football& st);

class Basketball{
	private:
		double yakilankalori;
		int kacdefa[52];
	public:
	
	    Basketball();                                                                 //Default ctor
		Basketball(double deger,int sayi,int week);                                   //Ctor
	    Basketball(const Basketball& obj,int sayi,int week);                          //Copy ctor
		Basketball &operator=(const Basketball& obj);                                 //Assignment op
		
		void kalorihesabi(int dakika,int yedik,int week);                             //How much calories burned and how many times play basketball for a week
		void sifirlama();                                                             //make 0 all values
		int kacdefahesabi(int week);                                                  //return how many times play basketball for a week
		double getkalori();                                                           //return burned calories
		void Print(int week);                                                         //print values
		Basketball operator+(Basketball &z);                                          //+ operator
		friend ostream& operator<<(ostream& out,const Basketball& st);                //<< operator
};
ostream& operator<<(ostream& out,const Basketball& st);

class Tennis{                                                                          
	private:
		double yakilankalori;
		int kacdefa[52];
	public:
	
	    Tennis();                                                                    //Default ctor
		Tennis(double deger,int sayi,int week);                                      //Ctor
	    Tennis(const Tennis& obj,int sayi,int week);                                 //Copy ctor
		Tennis &operator=(const Tennis& obj);                                        //Assignment op  
		
		void kalorihesabi(int dakika,int yedik,int week);                            //How much calories burned and how many times play tennis for a week
		void sifirlama();                                                            //make 0 all values
		int kacdefahesabi(int week);                                                 //return how many times play tennis for a week
		
		double getkalori();                                                          //return burned calories
		void Print(int week);                                                        //print values
		Tennis operator+(Tennis &z);                                                 //+ operator
		friend ostream& operator<<(ostream& out,const Tennis& st);                   //<< operator
};
ostream& operator<<(ostream& out,const Tennis& st);

class Swimming{
	private:
		double yakilankalori;
		int kacdefa[52];
	public:
	
		Swimming();                                                                  //Default ctor      
		Swimming(double deger,int sayi,int week);                                    //Ctor
	    Swimming(const Swimming& obj,int sayi,int week);                             //Copy ctor
	Swimming &operator=(const Swimming& obj);                                       //Assignment op  
		
		void kalorihesabi(int dakika,int yedik,int week);                           //How much calories burned and how many times swim for a week
		void sifirlama();                                                           //make 0 all values
		int kacdefahesabi(int week);                                                //return how many times swim for a week
		
		double getkalori();                                                         //return burned calories
		void Print(int week);                                                       //print values
		Swimming operator+(Swimming& z);                                            //+ operator
		friend ostream& operator<<(ostream& out,const Swimming& st);                //<< operator
};
ostream & operator<<(ostream& out,const Swimming& st);
#endif;
