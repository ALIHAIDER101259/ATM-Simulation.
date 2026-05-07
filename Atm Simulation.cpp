#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    
    cout<<"-------------------------------------"<<endl;
    cout<<"   Welcome to Atm Machine Simulator"<<endl;
    cout<<"-------------------------------------"<<endl;
    
    

    // Authentication 


    int setPin=2600;
    bool isLogin=false;

    cout<<"you have only 3 attempts"<<endl;


    cout<<"\n";


    int pin;



    cout<<"enter your  pin in four digits in Integer form"<<endl;
    
   

    


    cout<<endl;

    int attempt=3;

    for(int i=0; i<attempt;i++)
    {
      cin>>pin;
    
    
    if(pin>=1000 && pin<=9999)
    {

      if(pin==setPin)
      {
        cout<<"login successfully"<<endl;
        isLogin=true;
        break;
    }


     else {
        cout<<"Wrong password!!"<<endl;
    }
  }

  else {
    cout<<"invalid password format"<<endl;
  }

}
  if(isLogin==false)
  {
    cout<<"Account Blocked"<<endl;
    return 0;
  }



   
   
    
    int Money;
    cout<<"how much money do you have"<<endl;
    cin>>Money;
    
    int withdraw;
    cout<<"how much money do you want to withdraw"<<endl;
    cin>>withdraw;
    
    int balanceDeposit;
    cout<<"how much money do you want to enter again ?"<<endl;
    cin>>balanceDeposit;

    int finalBalance;
    
    cout<<endl;
    
    cout<<"-------------------------------"<<endl;
    cout<<"    1.check Balance"<<endl;
    cout<<"    2.Withdraw Money"<<endl;
    cout<<"    3.balance deposit money"<<endl;
    cout<<"    4. Final Balance"<<endl;
    cout<<"    5. store data"<<endl;
    
    cout<<"-------------------------------"<<endl;
    
    
    int choice;
    cout<<"enter your choice"<<endl;
    cin>>choice;
    
    switch(choice)
    {
        case 1:
        {
            cout<<"  Your Money:   "<<Money<<endl;
            break;
        }
        
        
        case 2:
        {
            

              if(withdraw>Money)
              {
                cout<<"  insufficient balance:"<<endl;
                
            }

            else if(withdraw<=0)
            {
              cout<<"Invalid Amount"<<endl;
            }

            else{
                
                int remainingAmount=Money-withdraw;
                
                cout<<"  withdraw Amount  "<<  withdraw<<endl;
                cout<<"   Remaining Amount   "<<remainingAmount<<endl;
            }
            
            break;
        }
        
        case 3:
        {
            cout<<"   Balance Deposit  "<<endl;
            cout<<balanceDeposit<<endl;
            break;
           
        }


        case 4:
        {

            finalBalance= Money-withdraw+ balanceDeposit;
            
            cout<<"   Final balance   "<<finalBalance<<endl;
            break;

          

        }

        
        case 5:
        {
            ofstream file("ATM_Simulation.txt");
            
            file<<"Your Initial Balance"<<Money<<endl;
            file<<"Your withDraw Amount"<<withdraw<<endl;
            file<<"Your deposit Amount"<<balanceDeposit<<endl;
            file<<"Final Balance"<<finalBalance<<endl;

            cout<<"Congratulation Data  is  saved  successfully"<<endl;
            
            
            
            break;
            
        }
        
        default:
        {
            cout<<"Invalid case"<<endl;
        }
        
    }
    


    
    return 0;
    

}