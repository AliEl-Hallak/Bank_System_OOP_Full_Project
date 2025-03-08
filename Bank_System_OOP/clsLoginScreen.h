#pragma once

#include <iostream>
#include "clsScreen.h"
#include "clsUser.h"
#include <iomanip>
#include "clsMainScreen.h"
#include "Global.h"

class clsLoginScreen :protected clsScreen
{

private:
   
    static  bool _Login()
    {
        bool LoginFaild = false;

        string Username, Password;
        do
        {

            if (LoginFaild)
            {
                CountLoginTry--;
                cout << "\nInvlaid Username/Password!\n\n";
                cout << "You have " << CountLoginTry << " to login" << endl;
            }

            if (CountLoginTry <= 0) {
                cout << "\n\nyour locked after 3 faild trails...";
                system("pause>0");
                return false;
            }
            cout << "Enter Username? ";
            cin >> Username;

            cout << "Enter Password? ";
            cin >> Password;

            CurrentUser = clsUser::Find(Username, Password);
           
            LoginFaild = (CurrentUser.IsEmpty());
          
       

         

        } while (LoginFaild );
        CurrentUser.RegisterLogIN();
        return true;
       

    }

public:


    static bool ShowLoginScreen()
    {
        system("cls");
        _DrawScreenHeader("\t  Login Screen");
        return(_Login());
    }

};

