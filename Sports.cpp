#include"User.h"
#include"Meals.h"
#include"Sports.h"



	
		Football::Football(){
			
			yakilankalori=0;
			for(int i=0;i<52;i++){
				kacdefa[i]=0;
			}
			
		}
		
		Football::Football(double deger,int sayi,int week){
			
			yakilankalori=deger;
			kacdefa[week]=sayi;
			
		}
	    Football::Football(const Football& obj,int week){
	    	
			yakilankalori=obj.yakilankalori;
			kacdefa[week]=obj.kacdefa[week];
			
			
		}
		Football &Football::operator=(const Football& obj){
				
			yakilankalori=obj.yakilankalori;
			for(int i=0;i<52;i++){
				kacdefa[i]=obj.kacdefa[i];
			}
		
		
		}
		
		void Football::kalorihesabi(int dakika,int yedik,int week){
			
			if(yedik==1){
		
			kacdefa[week]=kacdefa[week]+1;
		    yakilankalori=dakika*5;
		}
		else{
			yakilankalori=0;
			kacdefa[week]=kacdefa[week];
		}
	}
		void Football::sifirlama(){
			for(int i=0;i<52;i++){
				kacdefa[i]=0;
			}
		}
		int Football::kacdefahesabi(int week){
			
			int kackere;
			kackere=kacdefa[week];
			return kackere;
		}
		
		double Football::getkalori(){
			return yakilankalori;
			
		}
		void Football::Print(int week){
			
			cout<<yakilankalori<<endl;
			cout<<kacdefa[week]<<endl;
			
		}
		Football Football::operator+(Football& z){
			
			Football temp;
			temp.yakilankalori=yakilankalori+z.yakilankalori;
			return temp;
		}
		ostream& operator<<(ostream& out,const Football& st){
			out<<" burned "<<st.yakilankalori<<" calories"<<endl;
			out<<endl;
			return out;
		}



	
	Basketball::Basketball(){
			
			yakilankalori=0;
			for(int i=0;i<52;i++){
				kacdefa[i]=0;
			}
		
		}
		
		Basketball::Basketball(double deger,int sayi,int week){
				
			yakilankalori=deger;
			kacdefa[week]=sayi;
		
		}
	    Basketball::Basketball(const Basketball& obj,int sayi,int week){
	    	
		yakilankalori=obj.yakilankalori;
			kacdefa[week]=obj.kacdefa[week];
			
			
		}
	Basketball &Basketball::operator=(const Basketball& obj){
				
		yakilankalori=obj.yakilankalori;
		for(int i=0;i<52;i++){
				kacdefa[i]=obj.kacdefa[i];
			}
			
		
		}
		
		void Basketball::kalorihesabi(int dakika,int yedik,int week){
			if(yedik==1){
		
			kacdefa[week]=kacdefa[week]+1;
		    yakilankalori=dakika*6;
		}
		else{
			yakilankalori=0;
			kacdefa[week]=kacdefa[week];
		}
	}
		void Basketball::sifirlama(){
			for(int i=0;i<52;i++){
				kacdefa[i]=0;
			}
		}
		int Basketball::kacdefahesabi(int week){
			
			int kackere;
			kackere=kacdefa[week];
			return kackere;
		}
		
		double Basketball::getkalori(){
			return yakilankalori;
			
		}
		void Basketball::Print(int week){
			
			cout<<yakilankalori<<endl;
			cout<<kacdefa[week]<<endl;
			
		}
		Basketball Basketball::operator+(Basketball& z){
			
			Basketball temp;
			temp.yakilankalori=yakilankalori+z.yakilankalori;
			return temp;
		}
		ostream& operator<<(ostream& out,const Basketball& st){
			out<<" burned "<<st.yakilankalori<<" calories"<<endl;
			out<<endl;
			return out;
		}



	
	Tennis::Tennis(){
			
			yakilankalori=0;
			for(int i=0;i<52;i++){
				kacdefa[i]=0;
			}
		
		}
		
		Tennis::Tennis(double deger,int sayi,int week){
				
			yakilankalori=deger;
			kacdefa[week]=sayi;
		
		}
	    Tennis::Tennis(const Tennis& obj,int sayi,int week){
	    	
		yakilankalori=obj.yakilankalori;
			kacdefa[week]=obj.kacdefa[week];
		
				
		}
		Tennis &Tennis::operator=(const Tennis& obj){
			
			yakilankalori=obj.yakilankalori;
			for(int i=0;i<52;i++){
				kacdefa[i]=obj.kacdefa[i];
			}
			
				
		}
		
		void Tennis::kalorihesabi(int dakika,int yedik,int week){
			if(yedik==1){
		
			kacdefa[week]=kacdefa[week]+1;
		    yakilankalori=dakika*5;
		}
		else{
			yakilankalori=0;
			kacdefa[week]=kacdefa[week];
		}
	}
		void Tennis::sifirlama(){
			for(int i=0;i<52;i++){
				kacdefa[i]=0;
			}
		}
		int Tennis::kacdefahesabi(int week){
			
			int kackere;
			kackere=kacdefa[week];
			return kackere;
		}
		
		double Tennis::getkalori(){
			return yakilankalori;
			
		}
		void Tennis::Print(int week){
				
			cout<<yakilankalori<<endl;
			cout<<kacdefa[week]<<endl;
		
		}
		Tennis Tennis::operator+(Tennis& z){
			
			Tennis temp;
			temp.yakilankalori=yakilankalori+z.yakilankalori;
			return temp;
		}
		ostream& operator<<(ostream& out,const Tennis& st){
			out<<" burned "<<st.yakilankalori<<" calories"<<endl;
			out<<endl;
			return out;
		}
 



	
		Swimming::Swimming(){
			
			yakilankalori=0;
			for(int i=0;i<52;i++){
				kacdefa[i]=0;
			}
				
		}
		
		Swimming::Swimming(double deger,int sayi,int week){
			
			yakilankalori=deger;
			kacdefa[week]=sayi;
			
		}
	    Swimming::Swimming(const Swimming& obj,int sayi,int week){
	    	
			yakilankalori=obj.yakilankalori;
			kacdefa[week]=sayi;
			
		}
	Swimming &Swimming::operator=(const Swimming& obj){
		
			yakilankalori=obj.yakilankalori;
			for(int i=0;i<52;i++){
				kacdefa[i]=obj.kacdefa[i];
			}
			
		}
		
		void Swimming::kalorihesabi(int dakika,int yedik,int week){
			if(yedik==1){
		
			kacdefa[week]=kacdefa[week]+1;
		    yakilankalori=dakika*7;
		}
		else{
			yakilankalori=0;
			kacdefa[week]=kacdefa[week];
		}
	}
		void Swimming::sifirlama(){
			for(int i=0;i<52;i++){
				kacdefa[i]=0;
			}
		}
		int Swimming::kacdefahesabi(int week){
			
			int kackere;
			kackere=kacdefa[week];
			return kackere;
		}
		
		double Swimming::getkalori(){
			return yakilankalori;
			
		}
		void Swimming::Print(int week){
			
			cout<<yakilankalori<<endl;
			cout<<kacdefa[week]<<endl;
			
		}
		Swimming Swimming::operator+(Swimming& z){
			
		     Swimming temp;
		     temp.yakilankalori=yakilankalori+z.yakilankalori;
		     return temp;
		}
		ostream& operator<<(ostream& out,const Swimming& st){
			out<<"burned "<<st.yakilankalori<<" calories"<<endl;
			out<<endl;
			return out;
		}

