#include <iostream>
#include<string>
#include <bits/stdc++.h>


using namespace std;

void checkpassword(string& password){

    int n=password.length();
    bool hasLower=false, hasUpper=false, hasDigit=false;

    for (int i = 0; i < n; i++) {
        if (islower(password[i]))
            hasLower = true;
        if (isupper(password[i]))
            hasUpper = true;
        if (isdigit(password[i]))
            hasDigit = true;


    }

void login_info(){
    cout<<"Zaloguj sie do aplikacji\n";
    cout<<"Uzytkowniku, twoje haslo powinno zawierac przynajmniej:"
          "\n - 8 znakow\n - przynajmniej 1 duza i 1 mala litere \n - przynajmniej 1 cyfre";

    //input
    string login,password;
    cout<<"Wprowadź login: "<<endl;
    cin>>login;
    cout<<endl;

    cout<<"Wprowadz haslo: "<<endl;
    getline(cin, password);
    checkpassword(password);
}
int main (){


   login_info();




    return 0;
}