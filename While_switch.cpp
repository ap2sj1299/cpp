
   
/* This is a program developed to allow one to easily convert between Fahrenheit and Celcius and between miles and kilometers. Depending on the alphabet entered the respective
   calculation will be proceeded */
   
   #include <iostream>
   #include <iomanip>
   
   using namespace std;
   int main()
   {
   	char charstart,conv; //variables required for the program, charstart to start and continue the program; conv is for the switch
   	double tempc,tempf,distm,distk;//to store both the inputed and converted temperatures and distances
   	
   	//initial prompt for the user
   	cout<<"Shall we start(Y/N)?";
   	cin>>charstart;
   	
   	//while loop to facilitate re-run of the program.
   	while(charstart == 'Y'||charstart == 'y')
   	{
	   //welcoming the user and then displaying the catalogue on screen.
   	cout<<"\n\n";
   	cout<<"Hello! Welcome to Geek-R-US\nThis is a program to help you convert between Fahrenheit and Celcius and between miles and kilometers ";
   	cout<<"\nFollowing is the catalogue of conversion.\nCAREFULLY LOOK INTO THE ALPHABETS AND ENTER THE CORRESPONDING ALPHABET FOR YOUR CONVERSION\n";
   	cout<<"\n\t\t\tCatalogue";
   	cout<<"\n\t\t\t*********";
   	cout<<"\n1.To convert temperature in fahrenheit to celcius enter F/f";
   	cout<<"\n2.To convert temperature in celcius to fahrenheit enter C/c";
   	cout<<"\n3.To convert distance in miles to kilometers enter M/m";
   	cout<<"\n4.To convert distance in kilometers to miles enter K/k";
   	cout<<"\n\t\t     End of catalogue";
   	cout<<"\n\t\t     ****************";
   	//requesting the user to choose the option from the catalogue
   	cout<<"\n\nChoose your required conversion ";
   	cin>>conv;
   	
   	//switch to further progress the program based on the choice of the user.
   	switch(conv)
   	{
   		//fahrenheit to celcius
   		case 'F': case 'f':
   		cout<<"\nEnter the temperature in fahrenheit: ";
   		cin>>tempf;
   		tempc = (tempf - 32)*(5/9);
   		cout<<"\nThe converted temperature in celcius is: "<<tempc;
   		break;
   		
   		//celcius to fahrenheit
   		case 'C': case 'c':
   			cout<<"\nEnter the temperature in celcius ";
   			cin>>tempc;
   			tempf = (tempc + 32)*(9/5);
   			cout<<"\nThe converted temperature in fahrenheit is: "<<tempf;
   			break;
   			
   		//miles to kilometers	
   		case 'M': case 'm':
   			cout<<"\nEnter the distance in  miles: ";
   			cin>>distm;
   			distk = distm * 1.6;
   			cout<<"\nThe converted distance in kilometers is: "<<distk;
   			break;
   			
   		//kilometers to miles	
   		case 'K': case 'k':
   			cout<<"\nEnter the distance in kilometers: ";
   			cin>>distk;
   			distm = distk/1.6;
   			cout<<"\nThe converted distance in miles is: "<<distm;
   			break;
   			
   		//default case to let the user know that his/her choice was wrong	
   		default:
   			cout<<"\nDear User,\nPlease do carefully look into the choice you have entered";
   }
   
   //enquiring of the user whether they need to continue or not
   cout<<"\n\n\nDo you want to continue? If yes enter 'Y' otherwise 'N': ";
   cin>>charstart;
}
 cout<<"\nThank you\nHave a nice day";
 return 0;
}
// end of program
   		