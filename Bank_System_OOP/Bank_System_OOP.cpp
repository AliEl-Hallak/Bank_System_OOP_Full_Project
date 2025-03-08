#include <iostream>
#include "clsLoginScreen.h"
#include <iomanip>
#include"clsTransferScreen.h"
int main()

{
   
    while (clsLoginScreen::ShowLoginScreen()) {

        clsMainScreen::ShowMainMenue();

    }

    system("pause>0");  
    return 0;
}