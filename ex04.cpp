
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    string menu_msg = "1 : Rectangle\n2 : Circle\n3 : Triangle\ne : exit program\nPlase select an operation : ";
    
    string result_menu;
    double height;
    double width;
    double radius;
    double base;

        do{
            cout<<menu_msg;
            cin>>result_menu;
            if(result_menu=="1"){
                
                cout<<"Enter height : ";
                cin>>height;
                cout<<"Enter width : ";
                cin>>width;
                cout<<"Area of rectangle is : "<<width*height<<endl;

            }else if(result_menu=="2"){
                
                cout<<"Enter radius : ";
                cin>>radius;
                cout<<"Area of Circle is : "<<3.14*(radius*radius)<<endl;
                
            }else if(result_menu=="3"){
                
                cout<<"Enter  Base : ";
                cin>>base;
                cout<<"Enter  Height : ";
                cin>>height;
                cout<<"Area of Triangle is : "<<0.5*base*height<<endl;
                
            }else if(result_menu=="e"||result_menu=="E"){
               cout<<" Exit program."<<endl;
            }else{
                cout<<" Not found your commnd , try again !!!"<<endl;
            }
        }while(result_menu!="e"&&result_menu!="E");

}
//  credit Facebook Jack Supak



