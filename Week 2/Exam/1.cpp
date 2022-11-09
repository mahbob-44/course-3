#include<bits/stdc++.h>
using namespace std;
class Restaurant
{
public:
    int food_item_codes[12];
    string food_item_names[12];
    int food_item_prices[12];
    int total_tax;
};
int main()
{
    Restaurant p;
    int table;
     p.food_item_codes[0]=170;
    p.food_item_names[0]="Chicken Soup 1:2";
    p.food_item_prices[0]=260;
    p.food_item_codes[1]=171;
    p.food_item_names[1]="Chicken Corn Soup 1:2";
    p.food_item_prices[1]=200;
    p.food_item_codes[2]=172;
    p.food_item_names[2]="Thai Special Soup 1:2";
    p.food_item_prices[2]=300;
    p.food_item_codes[3]=260;
    p.food_item_names[3]="Chicken Fried Rice 1:2";
    p.food_item_prices[3]=250;
    p.food_item_codes[4]=261;
    p.food_item_names[4]="Egg Fried Rice 1:2";
    p.food_item_prices[4]=230;
    p.food_item_codes[5]=262;
    p.food_item_names[5]="Prawn Fried Rice 1:2";
    p.food_item_prices[5]=300;
    p.food_item_codes[6]=310;
    p.food_item_names[6]="Beef Mutton Kabab 1:1";
    p.food_item_prices[6]=150;
    p.food_item_codes[7]=311;
    p.food_item_names[7]="Chicken Grill 1:4";
    p.food_item_prices[7]=340;
    p.food_item_codes[8]=450;
    p.food_item_names[8]="Chicken Curry 1:3";
    p.food_item_prices[8]=550;
    p.food_item_codes[9]=451;
    p.food_item_names[9]="Beef Special Curry 1:3";
    p.food_item_prices[9]=760;
    p.food_item_codes[10]=452;
    p.food_item_names[10]="Chicken Sizzling 1:3";
    p.food_item_prices[10]=710;
    p.food_item_codes[11]=453;
    p.food_item_names[11]="Beef Sizzling 1:3";
    p.food_item_prices[11]=970;
   int code[12];
   int counter=0;
   for(int i=0;i<12;i++)
   {
       cin>>code[i];
       for(int j=0;j<12;j++)
       {
           if(code[i]==p.food_item_codes[j]){
            cout<<"You entered a right code"<<endl;
            return 0;
           }
       }
       cout<<"The code you entered is wrong, try again."<<endl;
   }
}

