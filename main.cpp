#include<iostream>
#include<conio.h>
#include<Windows.h>

using namespace std;

int main(){

	char res;
    cout<<"********************************************** COCA COLA MACHINE ************************************************\n";
	cout<<"Hey!\n";
	Sleep(500);
	cout<<"Good morning!\n";
	Sleep(500);
	cout<<"Press y to have a Coca Cola \n";
	res=getch();

	switch(res){

		case 'y':
		case 'Y': mciSendString("set cdaudio door open",NULL,NULL,NULL);
				  cout<<"\nHere's your can holder :) ";
				  break;
		case 'N':
		case 'n':cout<<"Oki";
				 break;



}



	return 0;

}
