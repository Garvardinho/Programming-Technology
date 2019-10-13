#include <iostream>
#include <string>
#include "University.h"

using namespace std;

University::~University()
{
  cout << "University destructor" << endl;
}

struct fullName University::setName()
{
  char arr[100];
  int arrlen;

  cout << "Enter the first name: ";
  cin >> arr;

  arrlen = strlen( arr );
  name.firstName = new char[arrlen + 1];
  strcpy( name.firstName, arr );

  cout << "Enter the second name: ";
  cin >> arr;

  arrlen = strlen( arr );
  name.secondName = new char[arrlen + 1];
  strcpy( name.secondName, arr );

  cout << "Enter the middleName: ";
  cin >> arr;

  arrlen = strlen( arr );
  name.middleName = new char[arrlen + 1];
  strcpy( name.middleName, arr );

  return name;
}