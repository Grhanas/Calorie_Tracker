#include"User.h"
#include"Meals.h"
#include"Sports.h"
	      
	      
	      
	      
	      
	      
	      
	      
	      User::User(){
	      	
	      	name="NULL";
	      	surname="NULL";
	      	ID=0;
	      	kilo=0;
		  }
		  User::User(string ad,string soyad,int id,int kg){
		  	
		  	name=ad;
		  	surname=soyad;
		  	ID=id;
		  	kilo=kg;
		  }
		  User::User(const User& other){
		  	
		  	name=other.name;
		  	surname=other.surname;
		  	ID=other.ID;
		  	kilo=other.kilo;
		  	
		  }
		  User&User::operator=(const User& other){
		  	
		  	name=other.name;
		  	surname=other.surname;
		  	ID=other.ID;
		  	kilo=other.kilo;
		  }
		  User User::operator+(User &z){
		  	
		  	name=name+z.name;
		  	surname=surname+z.surname;
		  	ID=ID+z.ID;
		  	kilo=kilo+z.kilo;
		  	return *this;
		  }
		  ostream& operator<<(ostream& out,const User& st){
		  	
		  	out<<"name: "<<st.name<<" surname: "<<st.surname<<" ID: "<<st.ID<<" kilo: "<<st.kilo<<endl;
		  	out<<endl;
		  	return out;
		  }
		  
		  
	
	User::User(Breakfast a,Lunch b,Dinner c,Football d,Basketball e,Tennis f,Swimming g,int week,int gun):kahvalti(a),ogle(b),aksam(c),futbol(d),basketbol(e),tenis(f),yuzme(g){
		
		
		gunlukkalinankalori[week][gun]=kahvalti.getkalori()+ogle.getkalori()+aksam.getkalori();
		gunlukyakilankalori[week][gun]=futbol.getkalori()+basketbol.getkalori()+tenis.getkalori()+yuzme.getkalori();
		 
		}
		
	
		
		
		
		double User::gethaftalikalinankalori(int week){
			double temp=0;
				haftalikalinankalori[week]=0;
			for(int i=0;i<7;i++){
				haftalikalinankalori[week]+=gunlukkalinankalori[week][i];
			}
			
			temp=haftalikalinankalori[week];
			
			return temp;
		}	
			
		double User::gethaftalikyakilankalori(int week){
			double temp=0;
			haftalikyakilankalori[week]=0;
			for(int i=0;i<7;i++){
				haftalikyakilankalori[week]+=gunlukyakilankalori[week][i];
			}
			temp=haftalikyakilankalori[week];
			return temp;
		}	
		
		void User::Print(){
			
			cout<<name<<endl;
			cout<<surname<<endl;
			cout<<ID<<endl;
			cout<<kilo<<endl;
		}
	  


