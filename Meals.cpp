#include"User.h"
#include"Meals.h"
#include"Sports.h"


	
		Dinner::Dinner(){
			
			for(int i=0;i<52;i++){
			alinankalori=0;
			kacdefa[i]=0;
		}
		}
		Dinner::Dinner(double deger,int sayi,int week){
		
			alinankalori=deger;
			kacdefa[week]=sayi;
		
			
		}
	Dinner::Dinner(const Dinner& obj,int week){
			
			alinankalori=obj.alinankalori;
			kacdefa[week]=obj.kacdefa[week];
		 
		}
		Dinner &Dinner::operator=(const Dinner& obj){
			
			for(int i=0;i<52;i++){
				kacdefa[i]=obj.kacdefa[i];
			}
			
			alinankalori=obj.alinankalori;
			
		
		}
		
		void Dinner::kalorihesabi(string porsiyon,int yedik,int week){
			if(yedik==1){
		
			kacdefa[week]=kacdefa[week]+1;
		        if(porsiyon==static_cast<string>("small")){
		        	alinankalori=200;
		        	
				}
				else if(porsiyon==static_cast<string>("medium")){
					alinankalori=400;
					
				}
				else if(porsiyon==static_cast<string>("big")){
					alinankalori=600;
					
				}
		}
		else{
			alinankalori=0;
			kacdefa[week]=kacdefa[week];
		}
	}
		void Dinner::sifirlama(){
			for(int i=0;i<52;i++){
				kacdefa[i]=0;
			}
		}
		int Dinner::kacdefahesabi(int week){
			
			int kackere;
			kackere=kacdefa[week];
			return kackere;
		}
		
		double Dinner::getkalori(){
			return alinankalori;
			
		}
	   void Dinner::Print(int week){
	   	
	   	cout<<alinankalori<<endl;
	   	cout<<kacdefa[week]<<endl;
	   	
	   }
	    Dinner Dinner::operator+(Dinner& z){
	    
	    	Dinner temp;
	    	temp.alinankalori=alinankalori+z.alinankalori;
	    	return temp;
		}
		ostream& operator<<(ostream& out,const Dinner& st){
			cout<<"<< operator is called"<<endl;
		    out<<"got "<<st.alinankalori<<"calories"<<endl;
		    out<<endl;
		    return out;
		}
	





	
			Lunch::Lunch(){
				
			for(int i=0;i<52;i++){
			alinankalori=0;
			kacdefa[i]=0;
		}
		}
		Lunch::Lunch(double deger,int sayi,int week){
			
			alinankalori=deger;
			kacdefa[week]=sayi;
		
			
		}
	Lunch::Lunch(const Lunch& obj,int week){
			
			alinankalori=obj.alinankalori;
			kacdefa[week]=obj.kacdefa[week];
		 
		}
		Lunch &Lunch::operator=(const Lunch& obj){
			
			for(int i=0;i<52;i++){
				kacdefa[i]=obj.kacdefa[i];
			}
			
			alinankalori=obj.alinankalori;
			
		
		}
		
		void Lunch::kalorihesabi(string porsiyon,int yedik,int week){
			if(yedik==1){
		
			kacdefa[week]=kacdefa[week]+1;
		        if(porsiyon==static_cast<string>("small")){
		        	alinankalori=200;
		        	
				}
				else if(porsiyon==static_cast<string>("medium")){
					alinankalori=400;
					
				}
				else if(porsiyon==static_cast<string>("big")){
					alinankalori=600;
					
				}
		}
		else{
			alinankalori=0;
			kacdefa[week]=kacdefa[week];
		}
	}
		void Lunch::sifirlama(){
			for(int i=0;i<52;i++){
				kacdefa[i]=0;
			}
		}
		int Lunch::kacdefahesabi(int week){
			
			int kackere;
			kackere=kacdefa[week];
			return kackere;
		}
		
		double Lunch::getkalori(){
			return alinankalori;
			
		}
	   void Lunch::Print(int week){
	   	
	   	cout<<alinankalori<<endl;
	   	cout<<kacdefa[week]<<endl;
	   	
	   }
	   Lunch Lunch::operator+(Lunch& z){
	   	
	   	Lunch temp;
	   	temp.alinankalori=alinankalori+z.alinankalori;
	   	return temp;
	   }
	   ostream& operator<<(ostream& out,const Lunch& st){
	   	out<<"got "<<st.alinankalori<<" calories "<<endl;
	   	out<<endl;
	   	return out;
	   }
	







	
			Breakfast::Breakfast(){
				
			for(int i=0;i<52;i++){
			alinankalori=0;
			kacdefa[i]=0;
		}
		}
		Breakfast::Breakfast(double deger,int sayi,int week){
			
			alinankalori=deger;
			kacdefa[week]=sayi;
		
			
		}
	Breakfast::Breakfast(const Breakfast& obj,int week){
			
			alinankalori=obj.alinankalori;
			kacdefa[week]=obj.kacdefa[week];
		 
		}
		Breakfast &Breakfast::operator=(const Breakfast& obj){
			
			for(int i=0;i<52;i++){
				kacdefa[i]=obj.kacdefa[i];
			}
			
			alinankalori=obj.alinankalori;
			
		
		}
		
		void Breakfast::kalorihesabi(string porsiyon,int yedik,int week){
			if(yedik==1){
		
			kacdefa[week]=kacdefa[week]+1;
		        if(porsiyon==static_cast<string>("small")){
		        	alinankalori=200;
		        	
				}
				else if(porsiyon==static_cast<string>("medium")){
					alinankalori=400;
					
				}
				else if(porsiyon==static_cast<string>("big")){
					alinankalori=600;
					
				}
		}
		else{
			alinankalori=0;
			kacdefa[week]=kacdefa[week];
		}
	}
		void Breakfast::sifirlama(){
			for(int i=0;i<52;i++){
				kacdefa[i]=0;
			}
		}
		int Breakfast::kacdefahesabi(int week){
			
			int kackere;
			kackere=kacdefa[week];
			return kackere;
		}
		
		double Breakfast::getkalori(){
			return alinankalori;
			
		}
	   void Breakfast::Print(int week){
	   	cout<<alinankalori<<endl;
	   	cout<<kacdefa[week]<<endl;
	   }
	   Breakfast Breakfast::operator+(Breakfast& z){
	   	
	   	Breakfast temp;
	   	temp.alinankalori=alinankalori+z.alinankalori;
	   	return temp;
	   }
	   ostream& operator<<(ostream& out,const Breakfast& st){
	   	out<<"got "<<st.alinankalori<<" calories"<<endl;
	   	out<<endl;
	   	return out;
	   }
	

	

