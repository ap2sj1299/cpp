

/* MatrikelNummer: 425805
   Name: Abel Philip
   Email: abelphilip2016@gmail.com
   Assignment: 1
*/

/*A car has been bought on a loan. The customer is supposed to make a monthly
repayment of 165.25 euros for 48 months at an annual interest rate of 9%. This is a program to keep track of the balance after each installment.
A general formula is used for the purpose. Before printing the final results the input values on which the calculations are done will be displayed on screen.
Using a forloop is then the calculations processed. All money amounts are printed to two decimal points.*/
   
#include <iostream> //for cout and cin
#include <cmath> //for pow() 
#include <iomanip> //for setprecision()

using namespace std; 

int main()
{
	//initializing the given initial values
	double pmt = 165.25, i = (0.09/12);  //amount of monthly payment in euros and the interest rate per month
	int n = 48; //total no of payments to be made
	
	//initializing the balance remaining after each payment, which is to be calculated.
	double balk;
	
	//variable to store the payment number
	int k;
	
	//printing the required input values, which will then be used in the calculation.
	cout<<"Monthly payment = "<<pmt<<" euros"; 
	cout<<"\nInterest rate(per annum) = 9% and Rate per month = "<<i<<"%"; 
	cout<<"\nTotal number of installments = "<<n;
	cout<<"\n\n\n";
	
	//setting the output value to only two decimal points
	cout<<fixed<<showpoint<<setprecision(2);
	
	//for loop to calculate the first three months' balance
	for(k=1;k<=3;k++) 
	{
		//calculating the balance remaining after first three installments
		balk = pmt*((1-pow((1+i),(k-n)))/i);
		//the balance after the first three installments printed
		cout<<"\nThe Balance remaining after payment number "<<k<<" = "<<balk;
	}
	return 0;
}