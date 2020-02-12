//  credit Facebook Jack Supak
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class Prefix{

    private :
        int n;
        int b;
        int r;

        int calculator(){
        	if(this->n==-1){
        		return 0;
			}else if(this->b==-1){
				return 0;
			}else if(this->r==-1){
				return 0;
			}else{
				return ((this->n)*10 + this->b) * pow(10,double(this->r) );	
			}
        }

    public :

        Prefix(){
            this->n = -1;
            this->b = -1;
            this->r = -1;
        }

        void Rvalue(char *prefixs_nbr){
            this->n =  this->cast_value(prefixs_nbr[0]);
            this->b =  this->cast_value(prefixs_nbr[1]);
            this->r =  this->cast_value(prefixs_nbr[2]);
            if(this->calculator()){
            	cout<<"NBR = "<<this->n<<this->b<<"x10^"<<this->r<<" = "<<this->calculator()<<endl;
			}else{
				cout<<"Your NBR Not correct "<<endl;
			}
        }

        int cast_value(char var){
            if(var=='B'){
                return 0;
            }else if(var=='N'){
                return 1;
            }else if(var=='R'){
                return 2;
            }else if(var=='O'){
                return 3;
            }else if(var=='Y'){
                return 4;
            }else if(var=='G'){
                return 5;
            }else if(var=='E'){
                return 6;
            }else if(var=='V'){
                return 7;
            }else if(var=='A'){
                return 8;
            }else if(var=='W'){
                return 9;
            }else{
                return -1;
            }
        }

        bool menu_control(string str){
        	cout<<"Plase 0 to continute : ";
        	cin>>str;
            return str=="0";
        } 
};

int main(){
        Prefix prefix;
        char prefixs_nbr[3];
        string menu;

        do{
            cout<<"Enter N B R : ";
            cin>>prefixs_nbr[0]>>prefixs_nbr[1]>>prefixs_nbr[2];
            prefix.Rvalue(prefixs_nbr);
        }while(prefix.menu_control(menu));

}
//  credit Facebook Jack Supak
