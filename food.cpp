#include <iostream>
#include <string.h>
#include <conio.h>
#include <fstream>
#include <unistd.h>
#include <windows.h>
#include <unordered_map>

using namespace std;


class one{

    public:
    void menu1();
};

void one::menu1(){
    cout << "\n\n\n\t\t\t\t\t\t ========== WELCOME TO FOOD ORDERING SYSTEM ==========" << endl;
	cout << "\n\n\t\t\t\t\t\t\t       =====START YOUR ORDER=====" << endl;
	cout << "\n\n\n\t===========================\t\t\t==========================\t\t\t\t===========================" << endl;
	cout << "\t[1] Veggie Supreme (Rs.480)\t\t\t[2] Exotica Pizza(Rs.440)\t\t\t\t[3] Chicken Sizzler (Rs.580)\n\t[4] Chrispy Chicken (Rs.520)\t\t\t[5] Spaghetti (Rs.350)\t\t\t\t\t[6] Country Feast (Rs.400)\n\t[7] Tetrazzini (Rs.420)\t\t\t\t[8] Double Cheese (Rs.540)\t\t\t\t[9] Makizushi (Rs.548)\n\t[10] Ham Burger (Rs.390)\t\t\t[11] Margherita Pizza(Rs.525)\t\t\t\t[12] Fish 'n' Chips (Rs.425)\n\t[13] Fajitas (Rs.335)\t\t\t\t[14] Tempura (Rs.324)\t\t\t\t\t[15] Hot Dog (Rs.360)\n\t===========================\t\t\t==============================\t\t\t\t===========================\n\n\n\t\t\t\t\t\t\t\t[16] EXIT" << endl;
	cout << "\n\t=======================================================================================================================================" << endl;

}

class two:public one{
    public:
    protected:
    int ch, a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s=0,pizza;
	unordered_map<string,int> track;
    string y;
	int count=0;



    public:
    void menu2(){
        ofstream write;
        write.open("orders.txt");
        if(!write){
            cout<<"file cannot be opened"<<endl;
            exit(-1);
        }
        a:
        b:
        c:
        cout<<"Enter your order (one at a time) : ";
        cin>>ch;
		

        switch(ch){
            case 1:
            cout << "\n\n\tHOW MANY PIZZA YOU WANT :";
				cin >> pizza;

				a = 480;
				track["Veggie Supreme ("+to_string(pizza)+")"]=a*pizza;

				s = s + a * pizza;
				write << "YOU ORDER  Veggie Supreme : 480";
				write << " \n";
				write << "NUMBER OF PIZZA IS : " << pizza;
				write << "\n";
				cout << "\n\n\n\tYOU ORDER  Veggie Supreme " << endl
					 << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				break;
        
            case 2:
				cout << "\n\n\tHOW MANY PIZZA YOU WANT :";
				cin >> pizza;


				b = 440;
								track["Veggie Supreme("+to_string(pizza)+")"]=b*pizza;

				s = s + b * pizza;
				write << "YOU ORDER  Exotica : 440";
				write << " \n";
				write << "NUMBER OF PIZZA IS : " << pizza;
				write << "\n";
				cout << "\n\n\n\tYOU ORDER  Exotica " << endl
					 << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				break;

			case 3:
				cout << "\n\n\tHOW MANY CHICKEN SIZZLER YOU WANT :";
				cin >> pizza;				

				c = 580;
								track["Chicken Sizzler("+to_string(pizza)+")"]=c*pizza;

				s = s + c * pizza;
				write << "YOU ORDER  Chicken Sizzler : 580";
				write << " \n";
				write << "NUMBER OF Chicken Sizzler IS : " << pizza;
				write << "\n";
				cout << "\n\n\n\tYOU ORDER  Chicken Sizzler " << endl
					 << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				break;

			case 4:
				cout << "\n\n\tHOW MANY CHRISPY CHICKEN YOU WANT :";
				cin >> pizza;


				d = 520;
												track["Chrispy Chicken("+to_string(pizza)+")"]=d*pizza;

				s = s + d * pizza;
				write << "YOU ORDER  Chrispy Chicken : 520";
				write << " \n";
				write << "NUMBER OF Chrispy Chicken IS : " << pizza;
				write << "\n";
				cout << "\n\n\n\tYOU ORDER  Chrispy Chicken " << endl
					 << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				break;

			case 5:
				cout << "\n\n\tHOW MANY SPAGHETTI YOU WANT:";
				cin >> pizza;


				e = 350;
												track["Spaghetti("+to_string(pizza)+")"]=e*pizza;

				s = s + e * pizza;
				write << "YOU ORDER  Spaghetti : 350";
				write << " \n";
				write << "NUMBER OF Spaghetti IS : " << pizza;
				write << "\n";
				cout << "\n\n\n\tYOU ORDER  Spaghetti " << endl
					 << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				break;

			case 6:
				cout << "\n\n\tHOW MANY PIZZA YOU WANT:";
				cin >> pizza;


				f = 400;
												track["Country Feast("+to_string(pizza)+")"]=f*pizza;

				s = s + f * pizza;
				write << "YOU ORDER Country Feast : 400";
				write << "\n ";
				write << "NUMBER OF PIZZA IS : " << pizza;
				write << "\n";
				cout << "\n\n\n\tYOU ORDER Country Feast " << endl
					 << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				break;

			case 7:
				cout << "\n\n\tHOW MANY TETRAZZINI YOU WANT:";
				cin >> pizza;


				g = 420;
												track["Tetrazzini("+to_string(pizza)+")"]=g*pizza;

				s = s + g * pizza;
				write << "YOU ORDER Tetrazzini : 420";
				write << "\n ";
				write << "NUMBER OF Tetrazzini IS : " << pizza;
				write << "\n";
				cout << "\n\n\n\tYOU ORDER  Tetrazzini " << endl
					 << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				break;

			case 8:
				cout << "\n\n\tHOW MANY PIZZA YOU WANT :";
				cin >> pizza;


				h = 540;
												track["Double Cheese("+to_string(pizza)+")"]=h*pizza;

				s = s + h * pizza;
				write << "YOU ORDER Double Cheese : 540";
				write << " \n";
				write << "NUMBER OF PIZZA IS : " << pizza;
				write << "\n";
				cout << "\n\n\n\tYOU ORDER   Double Cheese " << endl
					 << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				break;

			case 9:
				cout << "\n\n\tHOW MANY MAKIZUSHI YOU WANT :";
				cin >> pizza;


				i = 548;
												track["Makizushi("+to_string(pizza)+")"]=i*pizza;

				s = s + i * pizza;
				write << "YOU ORDER Makizushi : 548";
				write << " \n";
				write << "NUMBER OF Makizushi IS : " << pizza;
				write << "\n";
				cout << "\n\n\n\tYOU ORDER Makizushi " << endl
					 << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				break;

			case 10:
				cout << "\n\n\tHOW MANY HAM BURGER YOU WANT :";
				cin >> pizza;


				j = 390;
												track["Ham Burger("+to_string(pizza)+")"]=j*pizza;

				s = s + j * pizza;
				write << "YOU ORDER Ham Burger : 390";
				write << " \n";
				write << "NUMBER OF Ham Burger IS : " << pizza;
				write << "\n";
				cout << "\n\n\n\tYOU ORDER Ham Burger " << endl
					 << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				break;

			case 11:
				cout << "\n\n\tHOW MANY PIZZA YOU WANT :";
				cin >> pizza;


				k = 525;
												track["Margherita("+to_string(pizza)+")"]=k*pizza;

				s = s + k * pizza;
				write << "YOU ORDER Margherita : 525";
				write << " \n";
				write << "NUMBER OF PIZZA IS : " << pizza;
				write << "\n";
				cout << "\n\n\n\tYOU ORDER   Margherita " << endl
					 << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				break;

			case 12:
				cout << "\n\n\tHOW MANY FISH 'n' CHIPS YOU WANT :";
				cin >> pizza;


				l = 425;
												track["Fish 'n' Chips("+to_string(pizza)+")"]=l*pizza;

				s = s + l * pizza;
				write << "YOU ORDER Fish 'n' Chips : 425";
				write << " \n";
				write << "NUMBER OF Fish 'n' Chips IS : " << pizza;
				write << "\n";
				cout << "\n\n\n\tYOU ORDER  Fish 'n' Chips " << endl
					 << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				break;

			case 13:
				cout << "\n\n\tHOW MANY FAJITAS YOU WANT :";
				cin >> pizza;


				m = 335;
												track["Fajitas("+to_string(pizza)+")"]=m*pizza;

				s = s + m * pizza;
				write << "YOU ORDER  Fajitas  : 335";
				write << " \n";
				write << "NUMBER OF Fajitas IS : " << pizza;
				write << "\n";
				cout << "\n\n\n\tYOU ORDER Fajitas " << endl
					 << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				break;

			case 14:
				cout << "\n\n\tHOW MANY TEMPURA YOU WANT :";
				cin >> pizza;


				n = 324;
												track["Tempura("+to_string(pizza)+")"]=n*pizza;

				s = s + n * pizza;
				write << "YOU ORDER Tempura : 324";
				write << " \n";
				write << "NUMBER OF Tempura IS : " << pizza;
				write << "\n";
				cout << "\n\n\n\tYOU ORDER  Tempura " << endl
					 << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				break;

			case 15:
				cout << "\n\n\tHOW MANY HOT DOG YOU WANT :";
				cin >> pizza;


				o = 360;
												track["Hot Dog("+to_string(pizza)+")"]=o*pizza;

				s = s + o * pizza; // fn1353
				write << "YOU ORDER  Hot Dog : 360";
				write << "\n ";
				write << "NUMBER OF Hot Dog IS : " << pizza;
				write << "\n";
				cout << "\n\n\n\tYOU ORDER  Hot Dog " << endl
					 << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				break;

                case 16:
                exit(0);
                break;

                default:
				cout << "\n\n\t\t\t\t\t\t\tYOU ENTER WRONG ORDER KEY !!!!! " << endl;
				goto c;
				break;
        }
        cout << "\n\tDO YOU WANT ANOTHER ORDER (yes/no) :";
			cin >> y;

            if(y=="YES" || y=="yes"){
                goto a;
            }
            else{
                cout << "\n\t\t\t\t\t\t\tTHANK YOU FOR YOUR ORDER :) GENERATING BILL ";
                for(int i=0;i<8;i++){
                    Sleep(500);
                    cout<<"...";
                }
                cout << "\n\t\t\t\t\t\t\t";
            }
            system("cls");
		cout << "\n\t\t\t\t\t\t\t ==============================================" << endl;
		cout << "\t\t\t\t\t\t\t\t             Food Ordering System           " << endl;
		cout << "\t\t\t\t\t\t\t ================================================" << endl;
		cout << endl;
		cout << endl;

        cout << "\t\t\t\t\t\t\t  Bill No : CP51           Order : NB1353" << endl;
		cout << endl;
		cout << endl;
		cout << "\t\t\t\t\t\t\t  Cashier :  Harry" << endl;
		cout << endl;
        write << "\t\t\t\t\t\t\t ";
		// cout<<"\t\t\t\t\t\t\t  Food Item \t\t  \t Quantity "<<endl;
		for(auto x:track){
			write<<"\t\t\t\t\t\t\t  "<< x.first<<" - "<< x.second<<endl;
			cout<<"\t\t\t\t\t\t\t  "<< x.first<<" - "<< x.second<<endl;
		}
				cout<< "\t\t\t\t\t\t\t  TOTAL BILL IS : " << s;

		write << "\t\t\t\t\t\t\t TOTAL BILL IS : " << s;
		
		cout << "\n\t\t\t\t\t\t\t ================================================" << endl;

        write.close();


    }
    
	void show1()
	{
		menu1();
		menu2();
	}
};

int main()
{
	two ob;
	ob.show1();
	getch();
}
