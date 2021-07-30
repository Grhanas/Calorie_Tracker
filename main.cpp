#include"User.h"
#include"Meals.h"
#include"Sports.h"
#include<time.h>

int main() {
	int control=0;
	int control2=0;
	int sayac1=0;
	int sayac2=0;
	int sayac3=0;
	int sayac4=0;
	int sayac5=0;
	int sayac6=0;
	int sayac7=0;
	int temp;
  	Breakfast kahvalti;
  kahvalti.sifirlama();
  string breakfastsize;
  Lunch ogle;
  ogle.sifirlama();
  Dinner aksam;
  aksam.sifirlama();
  string lunchsize;
  string dinnersize;
  Football futbol;
  futbol.sifirlama();
  Basketball basketbol;
  basketbol.sifirlama();
  Tennis tenis;
  tenis.sifirlama();
  Swimming yuzme;
  yuzme.sifirlama();
  system("cls");
  string name;
	string surname;
	int ID;
	int week;
	double kilo;
	int age;
    string day;
    int sec;
    cout<<"\t\t1.USER MODE"<<endl;
    cout<<"\t\t2.DEVELOPER MODE"<<endl;
    cin>>sec;
    if(sec==1){
    	system("cls");
    	cout<<endl<<"\t\tWelcome to User Mode"<<endl;
    	cout<<"Name:";
    	cin>>name;
    	cout<<"Surname:";
    	cin>>surname;
    	cout<<"ID:";
    	cin>>ID;
    	cout<<"Kilo:";
    	cin>>kilo;
    	cout<<"Age:";
    	cin>>age;
    	
  
usermenu:
	
string day;
int week;

    cout<<"Week:";
    cin>>week;
    if(week!=temp){
        sayac1=0;
    	sayac2=0;
    	sayac3=0;
    	sayac4=0;
    	sayac5=0;
    	sayac6=0;
    	sayac7=0;
	}
   
    	 int gun;
        cout<<"Day\t(Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday):";
        cin>>day;
        
        
        
        if(day=="Monday"||day=="monday"){
        	if(sayac1==1){
				cout<<"You have already entered values for this day"<<endl;
				cout<<"1.MENU"<<endl;
				cout<<"2.EXIT"<<endl;
				int cho;
				cin>>cho;
				if(cho==1){
					goto usermenu;
				}
				else {
					exit(1);
				}
				
			}
        	gun=1;
        	sayac1++;
        	
		}
		else if(day=="Tuesday"||day=="tuesday"){
			if(sayac2==1){
				cout<<"You have already entered values for this day"<<endl;
				cout<<"1.MENU"<<endl;
				cout<<"2.EXIT"<<endl;
				int cho;
				cin>>cho;
				if(cho==1){
					goto usermenu;
				}
				else {
					exit(1);
				}
			}
			gun=2;
				sayac2++;
		}
		else if(day=="Wednesday"||day=="wednesday")
		{
			if(sayac3==1){
				cout<<"You have already entered values for this day"<<endl;
				cout<<"1.MENU"<<endl;
				cout<<"2.EXIT"<<endl;
				int cho;
				cin>>cho;
				if(cho==1){
					goto usermenu;
				}
				else {
					exit(1);
				}
			}
			gun=3;
				sayac3++;
		}
		else if(day=="Thursday"||day=="thursday"){
			if(sayac4==1){
				cout<<"You have already entered values for this day"<<endl;
				cout<<"1.MENU"<<endl;
				cout<<"2.EXIT"<<endl;
				int cho;
				cin>>cho;
				if(cho==1){
					goto usermenu;
				}
				else {
					exit(1);
				}
			}
			gun=4;
				sayac4++;
		}
		else if(day=="Friday"||day=="friday"){
			if(sayac5==1){
				cout<<"You have already entered values for this day"<<endl;
			cout<<"1.MENU"<<endl;
				cout<<"2.EXIT"<<endl;
				int cho;
				cin>>cho;
				if(cho==1){
					goto usermenu;
				}
				else {
					exit(1);
				}
			}
			gun=5;
				sayac5++;
		}
		else if(day=="Saturday"||day=="saturday"){
			if(sayac6==1){
				cout<<"You have already entered values for this day"<<endl;
				cout<<"1.MENU"<<endl;
				cout<<"2.EXIT"<<endl;
				int cho;
				cin>>cho;
				if(cho==1){
					goto usermenu;
				}
				else {
					exit(1);
				}
			}
			gun=6;
				sayac6++;
		}
		else if(day=="Sunday"||day=="sunday"){
			if(sayac7==1){
				cout<<"You have already entered values for this day"<<endl;
				cout<<"1.MENU"<<endl;
				cout<<"2.EXIT"<<endl;
				int cho;
				cin>>cho;
				if(cho==1){
					goto usermenu;
				}
				else {
					exit(1);
				}
			}
			gun=7;
				sayac7++;
		}
		else{
			cout<<"You entered wrong values"<<endl;
			cout<<"1.MENU"<<endl<<"2.EXIT"<<endl;
			int c;
			cin>>c;
			if(c==1){
				temp=week;
				goto usermenu;
			}
			else if(c==2){
				exit(1);
			}
		}
        cout<<"Did you eat breakfast today?"<<endl;
        cout<<"1.Yes"<<endl;
        cout<<"2.No"<<endl;
        int secim1;
        cin>>secim1;
        int yedik=0;
       
        if(secim1==1){
        	cout<<"Breakfast size:";
        cin>>breakfastsize;
               yedik=1;
               control++;
		}
		
		
		cout<<"Did you eat lunch today?"<<endl;
        cout<<"1.Yes"<<endl;
        cout<<"2.No"<<endl;
		int secim2;
		cin>>secim2;
		int yedio=0;
		if(secim2==1){
			cout<<"Lunch size: ";
			cin>>lunchsize;
			yedio=1;
			control++;
		}
			cout<<"Did you eat dinner today?"<<endl;
        cout<<"1.Yes"<<endl;
        cout<<"2.No"<<endl;
		int secim3;
		cin>>secim3;
		int yedia=0;
		if(secim3==1){
			cout<<"Lunch size: ";
			cin>>dinnersize;
			yedia=1;
			control++;
		}
	    
		
		int sporsecimi;
		int branssecimi;
		int dakika;
		int yaptikf=0;
		int yaptikb=0;
		int yaptikt=0;
		int yaptiks=0;
		int digercontrol=0;
		cout<<"Did you do sports today?"<<endl;
		cout<<"1.Yes"<<endl;
		cout<<"2.No"<<endl;
		cin>>sporsecimi;
		if(sporsecimi==1){
			cout<<"1.Football"<<endl;
			cout<<"2.Basketball"<<endl;
			cout<<"3.Tennis"<<endl;
			cout<<"4.Swimming"<<endl;
			cin>>branssecimi;
			
			if(branssecimi==1){
				yaptikf++;
				cout<<"How many minutes did you play football:";
				cin>>dakika;
				control2++;
					if(dakika<=0){
			cout<<"You can't enter value for minute little than zero"<<endl;
			cout<<"1.MENU"<<endl;
			cout<<"2.EXIT"<<endl;
			int s;
			cin>>s;
			if(s==1){
				temp=week;
				goto usermenu;
			}
			else{
				exit(1);
			}
		}
				
			}
			else if(branssecimi==2){
				yaptikb++;
				cout<<"How many minutes did you play basketball:";
				cin>>dakika;
				control2++;
					if(dakika<=0){
			cout<<"You can't enter value for minute little than zero"<<endl;
			cout<<"1.MENU"<<endl;
			cout<<"2.EXIT"<<endl;
			int s;
			cin>>s;
			if(s==1){
				temp=week;
				goto usermenu;
			}
			else{
				exit(1);
			}
		}
			}
			else if(branssecimi==3){
				yaptikt++;
				cout<<"How many minutes did you play tennis:";
				cin>>dakika;
				control2++;
					if(dakika<=0){
			cout<<"You can't enter value for minute little than zero"<<endl;
			cout<<"1.MENU"<<endl;
			cout<<"2.EXIT"<<endl;
			int s;
			cin>>s;
			if(s==1){
				temp=week;
				goto usermenu;
			}
			else{
				exit(1);
			}
		}
			}
			else if(branssecimi==4){
				yaptiks++;
				cout<<"How many minutes did you swim:";
				cin>>dakika;
				control2++;
					if(dakika<=0){
			cout<<"You can't enter value for minute little than zero"<<endl;
			cout<<"1.MENU"<<endl;
			cout<<"2.EXIT"<<endl;
			int s;
			cin>>s;
			if(s==1){
				temp=week;
				goto usermenu;
			}
			else{
				exit(1);
			}
		}
			}
			
		}
		
		
	
		
       
  aksam.kalorihesabi(dinnersize,yedia,week);    
  ogle.kalorihesabi(lunchsize,yedio,week);		
  kahvalti.kalorihesabi(breakfastsize,yedik,week);
  futbol.kalorihesabi(dakika,yaptikf,week);
  basketbol.kalorihesabi(dakika,yaptikb,week);
  tenis.kalorihesabi(dakika,yaptikt,week);
  yuzme.kalorihesabi(dakika,yaptiks,week);
  User u1(kahvalti,ogle,aksam,futbol,basketbol,tenis,yuzme,week,gun);
  


cout<<"You ate "<<kahvalti.kacdefahesabi(week)<<" times breakfast this week"<<endl;
cout<<"You ate "<<ogle.kacdefahesabi(week)<<" times lunch this week"<<endl;
cout<<"You ate "<<aksam.kacdefahesabi(week)<<" times dinner this week"<<endl;
cout<<"You played football "<<futbol.kacdefahesabi(week)<<" times this week"<<endl;
cout<<"You played basketball "<<basketbol.kacdefahesabi(week)<<" times this week"<<endl;
cout<<"You played tennis "<<tenis.kacdefahesabi(week)<<" times this week"<<endl;
cout<<"You swam "<<yuzme.kacdefahesabi(week)<<" times this week"<<endl;
if(control<1){
cout<<"You got 0 calories this week"<<endl;
}
else{
cout<<"You got "<<u1.gethaftalikalinankalori(week)<<" calories this week"<<endl;
}

if(control2<1){
	cout<<"You burned 0 calories this week"<<endl;
}
else{
cout<<"You burned "<<u1.gethaftalikyakilankalori(week)<<" calories this week"<<endl;
}


cout<<"1.MENU"<<endl;
cout<<"2.EXIT"<<endl;
int h;
cin>>h;
if(h==1){
	temp=week;
goto usermenu;
}
else{
exit(1);
}
  
}
else if(sec==2){
	system("cls");
	cout<<"\tWelcome to Developer Mode"<<endl;
	
	cout<<"USER CLASS"<<endl;
     User u2;
     cout<<"Default ctor is used"<<endl;
     u2.Print();
     
     cin>>name;
	 cin>>surname;
	 cin>>kilo;
	 cin>>age; 
     User u3(name,surname,kilo,age);
     cout<<"Ctor is used"<<endl;
     u3.Print();
     u3=u2;
     cout<<"Assignment op is used"<<endl;
     u3.Print();
     User u5(u3);
     cout<<"Copy ctor is used"<<endl;
	cout<<u5;
	cout<<"overloaded operator << is used"<<endl;
	User u6;
	u6=u3+u2;
	u6.Print();
	cout<<"operator + is used"<<endl;
	
	
	
	cout<<"FOOTBALL CLASS"<<endl;
	int degger;
	int sayi;
	int hafta;
	cin>>degger;
	cin>>sayi;
	cin>>hafta;
	Football f1;
	cout<<"Default ctor is used"<<endl;
	f1.Print(hafta);
	
	Football f2(degger,sayi,hafta);
	cout<<"Ctor is used"<<endl;
	f2.Print(week);
	f1=f2;
	cout<<"Assignment op is used"<<endl;
	f1.Print(hafta);
	Football f3(f2);
	cout<<"Copy ctor is used"<<endl;
	cout<<f2;
	cout<<"overloaded operator << is used"<<endl;
	f2.getkalori();
	Football f4;
	f4=f3+f1;
	cout<<"operator + is used"<<endl;
	f4.Print(hafta);
	cout<<"getkalori function is used"<<endl;
	f2.kacdefahesabi(hafta);
	cout<<"kacdefahesabi function is used"<<endl;
	f2.sifirlama();
	cout<<"sifirlama function is used"<<endl;
	f2.kalorihesabi(degger,1,hafta);
	cout<<"kalorihesabi function is used"<<endl;
	
	
	cout<<"\n BASKETBALL CLASS"<<endl;
	Basketball b1;
	cout<<"Default ctor is used"<<endl;
	b1.Print(hafta);
	Basketball b2(degger,sayi,hafta);
	cout<<"Ctor is used"<<endl;
	b2.Print(week);
	b1=b2;
	cout<<"Assignment op is used"<<endl;
	b1.Print(hafta);
	Basketball b3(b2);
	cout<<"Copy ctor is used"<<endl;
	cout<<b2;
	cout<<"overloaded operator << is used"<<endl;
	b2.getkalori();
	Basketball b4;
	b4=b3+b1;
	cout<<"operator + is used"<<endl;
	b4.Print(hafta);
	
	cout<<"getkalori function is used"<<endl;
	b2.kacdefahesabi(hafta);
	cout<<"kacdefahesabi function is used"<<endl;
	b2.sifirlama();
	cout<<"sifirlama function is used"<<endl;
	b2.kalorihesabi(degger,1,hafta);
	cout<<"kalorihesabi function is used"<<endl;
	
	

  cout<<"\n TENNIS CLASS"<<endl;
	Tennis t1;
	cout<<"Default ctor is used"<<endl;
	t1.Print(hafta);
	Tennis t2(degger,sayi,hafta);
	cout<<"Ctor is used"<<endl;
	t2.Print(week);
	t1=t2;
	cout<<"Assignment op is used"<<endl;
	t1.Print(hafta);
	Tennis t3(t2);
	cout<<"Copy ctor is used"<<endl;
	cout<<t2;
	cout<<"overloaded operator << is used"<<endl;
	t2.getkalori();
	Tennis t4;
	t4=t3+t1;
	cout<<"operator + is used"<<endl;
	t4.Print(hafta);
	
	cout<<"getkalori function is used"<<endl;
	t2.kacdefahesabi(hafta);
	cout<<"kacdefahesabi function is used"<<endl;
	t2.sifirlama();
	cout<<"sifirlama function is used"<<endl;
	t2.kalorihesabi(degger,1,hafta);
	cout<<"kalorihesabi function is used"<<endl;
	
	
	cout<<"\n SWIMMING CLASS"<<endl;
	Swimming s1;
	cout<<"Default ctor is used"<<endl;
	s1.Print(hafta);
	Swimming s2(degger,sayi,hafta);
	cout<<"Ctor is used"<<endl;
	s2.Print(week);
	s1=s2;
	cout<<"Assignment op is used"<<endl;
	s1.Print(hafta);
	Swimming s3(s2);
	cout<<"Copy ctor is used"<<endl;
	cout<<s2;
	cout<<"overloaded operator << is used"<<endl;
	s2.getkalori();
	Swimming s4;
	s4=s3+s1;
	cout<<"operator + is used"<<endl;
	s4.Print(hafta);
	
	cout<<"getkalori function is used"<<endl;
	t2.kacdefahesabi(hafta);
	cout<<"kacdefahesabi function is used"<<endl;
	t2.sifirlama();
	cout<<"sifirlama function is used"<<endl;
	t2.kalorihesabi(degger,1,hafta);
	cout<<"kalorihesabi function is used"<<endl;
	
	
	cout<<"\n BREAKFAST CLASS"<<endl;
	string porsiyon;
	cin>>porsiyon;
	Breakfast k1;
	cout<<"Default ctor is used"<<endl;
	k1.Print(hafta);
	Breakfast k2(degger,sayi,hafta);
	cout<<"Ctor is used"<<endl;
	k2.Print(week);
	k1=k2;
	cout<<"Assignment op is used"<<endl;
	k1.Print(hafta);
	Breakfast k3(k2);
	cout<<"Copy ctor is used"<<endl;
	cout<<k2;
	cout<<"overloaded operator << is used"<<endl;
	k2.getkalori();
	Breakfast k4;
	k4=k3+k1;
	cout<<"operator + is used"<<endl;
	k4.Print(hafta);
	
	cout<<"getkalori function is used"<<endl;
	k2.kacdefahesabi(hafta);
	cout<<"kacdefahesabi function is used"<<endl;
	k2.sifirlama();
	cout<<"sifirlama function is used"<<endl;
	k2.kalorihesabi(porsiyon,1,hafta);
	cout<<"kalorihesabi function is used"<<endl;
    
    
    cout<<"\n LUNCH CLASS"<<endl;
Lunch l1;
	cout<<"Default ctor is used"<<endl;
	l1.Print(hafta);
	Lunch l2(degger,sayi,hafta);
	cout<<"Ctor is used"<<endl;
	l2.Print(week);
	l1=l2;
	cout<<"Assignment op is used"<<endl;
	l1.Print(hafta);
	Lunch l3(l2);
	cout<<"Copy ctor is used"<<endl;
	cout<<l2;
	cout<<"overloaded operator << is used"<<endl;
	l2.getkalori();
	Lunch l4;
	l4=l3+l1;
	cout<<"operator + is used"<<endl;
	l4.Print(hafta);
	
	cout<<"getkalori function is used"<<endl;
	l2.kacdefahesabi(hafta);
	cout<<"kacdefahesabi function is used"<<endl;
	l2.sifirlama();
	cout<<"sifirlama function is used"<<endl;
	l2.kalorihesabi(porsiyon,1,hafta);
	cout<<"kalorihesabi function is used"<<endl;
	
    
    
    
    
    
    
	cout<<"\n DINNER CLASS"<<endl;
	Dinner d1;
	cout<<"Default ctor is used"<<endl;
	d1.Print(hafta);
	Dinner d2(degger,sayi,hafta);
	cout<<"Ctor is used"<<endl;
	d2.Print(week);
	d1=d2;
	cout<<"Assignment op is used"<<endl;
	d1.Print(hafta);
	Dinner d3(d2);
	cout<<"Copy ctor is used"<<endl;
	cout<<d2;
	cout<<"overloaded operator << is used"<<endl;
	d2.getkalori();
	Dinner d4;
	d4=d3+d1;
	cout<<"operator + is used"<<endl;
	d4.Print(hafta);
	
	cout<<"getkalori function is used"<<endl;
	d2.kacdefahesabi(hafta);
	cout<<"kacdefahesabi function is used"<<endl;
	d2.sifirlama();
	cout<<"sifirlama function is used"<<endl;
	d2.kalorihesabi(porsiyon,1,hafta);
	cout<<"kalorihesabi function is used"<<endl;
	
	
	
	
	
}
else{
	cout<<"You entered unvalid value"<<endl;
	cout<<"1.MENU"<<endl;
			cout<<"2.EXIT"<<endl;
			int s;
			cin>>s;
			if(s==1){
				goto usermenu;
			}
			else{
				exit(1);
			}
}

}
