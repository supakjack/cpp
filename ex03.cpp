
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    string menu_msg = "Select an operattion (D=Deposit ,W=Withdraw , V= View balance) : ";
    string deposit_message = "Enter the amount to deposit : ";
    string withdraw_message = "Enter the amount to withdraw : ";
    string result_menu;

    int deposit_money = 0;
    int template_money;

        do{
            cout<<menu_msg;
            cin>>result_menu;
            if(result_menu=="D"||result_menu=="d"){
                cout<<deposit_message;
                cin>>template_money;
                deposit_money += template_money;
                cout<<"Deposited "<<template_money<<"bath and New Balance is "<<deposit_money<<" Bath"<<endl;
            }else if(result_menu=="W"||result_menu=="w"){
                cout<<withdraw_message;
                cin>>template_money;
                switch(template_money>deposit_money){
                    case true :
                        cout<<" !!! Withdraw "<<template_money<<"bath is Over "<<deposit_money<<" Bath , Sorry !!!"<<endl;
                        break;
                    default :
                        deposit_money -= template_money;
                        cout<<"Withdraw "<<template_money<<"bath and New Balance is "<<deposit_money<<" Bath"<<endl;
                }
            }else if(result_menu=="V"||result_menu=="v"){
                cout<<"Your balance is "<<deposit_money<<endl;
            }else if(result_menu=="e"){
               cout<<" Exit program."<<endl;
            }else{
                cout<<" Not found your commnd , try again !!!"<<endl;
            }
        }while(result_menu!="e"&&result_menu!="E");

}
//  credit Facebook Jack Supak



