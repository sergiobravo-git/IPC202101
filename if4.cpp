#include<iostream>

using namespace std;
 
int main(){
    int edad;
    cout<<"Escriba su edad: "<<endl;
	cin>>edad;
    if (edad >= 18) cout<<"¡Ya puedes votar!";
    else cout<<"Todavia eres un menor de edad.";
}
