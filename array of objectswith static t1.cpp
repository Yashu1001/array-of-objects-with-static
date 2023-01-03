#include<iostream>
using namespace std;

class hotel{
	
	private:
	  static char hotel_id[50];
      static char hotel_name[50];
      static char hotel_type[50];
      static int hotel_rating;
      static char hotel_location[50];
      static int hotel_establish_year;
      static int hotel_staff_quantity;
      static int hotel_room_quantity;
		
	public:
	  
	  static void setter();
	  static void getter();	
	     		   
}; 

        char hotel::hotel_id[50];
		char hotel::hotel_name[50];
		char hotel::hotel_type[50];
		int hotel::hotel_rating = 0;
		char hotel::hotel_location[50];
		int hotel::hotel_establish_year = 0;
		int hotel::hotel_staff_quantity = 0;
		int hotel::hotel_room_quantity = 0;
 
void hotel::setter(){
	
    cout<<"your value of id ="<<endl;
	cin>>hotel_id;
	
	cout<<"Your value of name ="<<endl;
	cin>>hotel_name;
	
 	cout<<"Your value of type = "<<endl;
	cin>>hotel_type;
	
	cout<<"Your value of rating = "<<endl;
	cin>>hotel_rating;
	
	cout<<"Your value of location = "<<endl;
	cin>>hotel_location;
	
	cout<<"Your value of establish year = "<<endl;
	cin>>hotel_establish_year;
	
	cout<<"Your value of staff quantity = "<<endl;
	cin>>hotel_staff_quantity;
	
	cout<<"Your value of room quantity = "<<endl;
	cin>>hotel_room_quantity;	 
	
}
void hotel::getter(){
	
	cout<<"Your value of hotel_id= "<<hotel_id<<endl;
	cout<<"Your value of hotel_name= "<<hotel_name<<endl;
	cout<<"Your value of hotel_type= "<<hotel_type<<endl;
	cout<<"Your value of hotel_rating= "<<hotel_rating<<endl;
	cout<<"Your value of hotel_location= "<<hotel_location<<endl;
	cout<<"Your value of hotel_establish_year= "<<hotel_establish_year<<endl;
	cout<<"Your value of hotel_staff_quantity= "<<hotel_staff_quantity<<endl;
	cout<<"Your value of hotel_room_quantity= "<<hotel_room_quantity<<endl;
	
}
int main(){
	
	int a;
	
	cout<<"Enter size : ";
	cin>>a;
	
	hotel obj[a];
	
	int i;
	
	for(i=0 ; i<a ; i++){
		
		obj[i].setter();
	}
	
	for(i=0 ; i<a ; i++){
		
		obj[i].getter();
	}
}




