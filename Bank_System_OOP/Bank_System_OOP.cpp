#include <iostream>
#include <string>
#include "clsString.h"
#include "clsDate.h"
#include "clsInputValidate.h"
#include "clsUtil.h"
#include "clsBankClient.h"
#include "clsPerson.h"
using namespace std;
int main()
{
	clsBankClient Client = clsBankClient::Find("A101");
	Client.Print();
	
}

