#include <iostream>
#include <iomanip>
#include <conio.h>
#include <windows.h>
using namespace std;

//global variable
double resultHistory[50];
int result = 0, counter = 0, lives = 3, score_counter = 0;

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

//counting the lives of the character
void countLives(){
	if(lives == 1){
		SetConsoleTextAttribute(h, 12);
		cout<<"Lives: "<<lives<<endl;	
	}
	else{
		SetConsoleTextAttribute(h, 10);
		cout<<"Lives: "<<lives<<endl;		
	}
}
//quizes
void quiz1(){
	char choice;
	do{
		if(lives != 0){
			system("CLS");
			cout<<endl<<endl<<endl<<endl<<endl;
			cout<<"t\t\t\t\t\t\tCarbon Footprint Project"<<endl<<endl;
			cout<<setw(60)<<"Quiz Time"<<endl;
			cout<<setw(90)<<"Score: "<<score_counter<<"  ";
			countLives();
			SetConsoleTextAttribute(h, 15);
			cout<<"\t\t\t1.___ is present everywhere in the world and is caused"<<endl;
			cout<<"\t\t\tby various factors such as electricity, food consumption,"<<endl; 
			cout<<"\t\t\tplastic consumption, transportation, etc."<<endl;
			cout<<"\t\t\ta. Carbon Emission "<<endl;
			cout<<"\t\t\tb. Carbon Lodi "<<endl;
			cout<<"\t\t\tc. Carbohydrates"<<endl;
			cout<<"\t\t\td. Carbon"<<endl;
			cout<<setw(90)<<"choice: ";
			cin>>choice;
			
			
			if(choice == 'a' || choice == 'A'){
				cout<<setw(90)<<"Right"<<endl;
				score_counter+=1;
				break;
			}
			else if(choice != 'a' || choice != 'A'){
				cout<<setw(90)<<"Wrong!"<<endl;
				lives--;
			}
		}
		else{
			break;
		}
	}while(choice != 'a' || choice != 'A' && score_counter <= 0);

	
}
void quiz2(){
	char pick;
	do{
		if(lives != 0){
			system("CLS");
			cout<<endl<<endl<<endl<<endl<<endl<<endl;
			cout<<"t\t\t\t\t\t\tCarbon Footprint Project"<<endl<<endl;
			cout<<setw(60)<<"Quiz Time"<<endl;
			cout<<setw(90)<<"Score: "<<score_counter<<"  ";
			countLives();
			SetConsoleTextAttribute(h, 15);
			cout<<"\t\t\t2.What is a way to save Electricity?"<<endl;
			cout<<"\t\t\ta. Leave appliances plugged in when not in use."<<endl;
			cout<<"\t\t\tb. Leave your lightsbulbs open at all times."<<endl;
			cout<<"\t\t\tc. Use renewable energy such as solar if possible." <<endl;
			cout<<"\t\t\td. All of the above."<<endl;
			cout<<setw(90)<<"choice: ";
			cin>>pick;
			
			if(pick == 'c' || pick == 'C'){
				cout<<setw(90)<<"Right"<<endl;
				score_counter+=1;
				break;
			}
		
			else if(pick != 'c' || pick != 'C'){
				cout<<setw(90)<<"Wrong!"<<endl;
				lives--;
			}
		}
		else{
			break;
		}
			
	}while(pick != 'c' || pick != 'C' && score_counter != 2);
	

}

void quiz3(){
	
	char choice;
	do{
		if(lives != 0){
			system("CLS");
			cout<<endl<<endl<<endl<<endl<<endl<<endl;
			cout<<"t\t\t\t\t\t\tCarbon Footprint Project"<<endl<<endl;
			cout<<setw(60)<<"Quiz Time"<<endl;
			cout<<setw(90)<<"Score: "<<score_counter<<"  ";
			countLives();
			SetConsoleTextAttribute(h, 15);
			cout<<"\t\t\t3.carbon footprint popularized in what year?"<<endl;
			cout<<"\t\t\ta. 2002"<<endl;
			cout<<"\t\t\tb. 1998"<<endl;
			cout<<"\t\t\tc. 2004"<<endl;
			cout<<"\t\t\td. 2022"<<endl;
			cout<<setw(90)<<"choice: ";
			cin>>choice;
			
			if(choice == 'c' || choice == 'C'){
				cout<<setw(90)<<"Right"<<endl;
				score_counter+=1;
				break;
			}
			else if(choice != 'c' || choice != 'C'){
				cout<<setw(90)<<"Wrong!"<<endl;
				lives--;
			}
		}
		else{
			break;
		}
			
	}while(choice != 'c' || choice != 'C' && score_counter != 3);
	
		
}

//recomendation
void recoFood(){
	cout<<endl;
	SetConsoleTextAttribute(h, 10);
	cout<<"\t\t\tHere are some tips on how to lessen you food carbon emission\n\n";
	SetConsoleTextAttribute(h, 10);
	cout<<"\t\t\t-";
	SetConsoleTextAttribute(h, 15);
	cout<<" Avoid wasting too much food";
	SetConsoleTextAttribute(h, 10);
	cout<<"\n\t\t\t-";
	SetConsoleTextAttribute(h, 15);
	cout<<" Monitor how much a person can consume\n";
	SetConsoleTextAttribute(h, 10);
	cout<<"\t\t\t-";
	SetConsoleTextAttribute(h, 15);
	cout<<" Practice eating other food alternatives\n";
	SetConsoleTextAttribute(h, 10);
	cout<<"\t\t\t-";
	SetConsoleTextAttribute(h, 15);
	cout<<" Eat less meat if possible\n";
	SetConsoleTextAttribute(h, 10);
	cout<<"\t\t\t- ";
	SetConsoleTextAttribute(h, 15);
	cout<<" Eat more fruits and vegetables"<<endl;
	
}
void recoElectricity(){
	cout<<endl;
	SetConsoleTextAttribute(h, 10);
	cout<<"\t\t\tHere are some tips on how to lessen your carbon emission on electricity"<<endl<<endl;
	SetConsoleTextAttribute(h, 10);
	cout<<"\n\t\t\t- ";
	SetConsoleTextAttribute(h, 15);
	cout<<"turn off lights when not in use";
	SetConsoleTextAttribute(h, 10);
	cout<<"\n\t\t\t- ";
	SetConsoleTextAttribute(h, 15);
	cout<<"do not leave appliances plugged in unattended"<<endl;
	SetConsoleTextAttribute(h, 10);
	cout<<"\t\t\t-";
	SetConsoleTextAttribute(h, 15);
	cout<<" use natural sunlight instead of lightbulbs if available during daytime\n";
	SetConsoleTextAttribute(h, 10);
	cout<<"\n\t\t\t- ";
	SetConsoleTextAttribute(h, 15);
	cout<<"use renewable energy such as solar if possible"<<endl;
}
void recoPlastic(){
	cout<<endl;
	SetConsoleTextAttribute(h, 10);
	cout<<"\t\t\tHere are some tips on how to lessen your carbon emission on plastic"<<endl;
	SetConsoleTextAttribute(h, 10);
	cout<<"\t\t\t- ";
	SetConsoleTextAttribute(h, 15);
	cout<<"Reduce, Reuse, and Recycle"<<endl<<endl;
	SetConsoleTextAttribute(h, 10);
	cout<<"\t\t\t- ";
	SetConsoleTextAttribute(h, 15);
	cout<<"Use ecobags when grocery shopping"<<endl;
	SetConsoleTextAttribute(h, 10);
	cout<<"\t\t\t- ";
	SetConsoleTextAttribute(h, 15);
	cout<<"Avoid using disposable utensils (spoon, fork, straws, etc.)"<<endl;
	SetConsoleTextAttribute(h, 10);
	cout<<"\t\t\t- ";
	SetConsoleTextAttribute(h, 15);
	cout<<"Bring reusable utensils/containers wherever you go"<<endl;
	SetConsoleTextAttribute(h, 10);
	cout<<"\t\t\t- ";
	SetConsoleTextAttribute(h, 15);
	cout<<"Learn proper waste management "<<endl;
}
void recoTranspo(){
	cout<<endl;
	SetConsoleTextAttribute(h, 10);
	cout<<"\t\t\tHere are some tips on how to lessen your carbon emission on tranportation"<<endl<<endl;
	SetConsoleTextAttribute(h, 10);
	cout<<"\t\t\t- ";
	SetConsoleTextAttribute(h, 15);
	cout<<"Drive a low emission vehicle-preferably the most energy efficient you can afford."<<endl;
	SetConsoleTextAttribute(h, 10);
	cout<<"\t\t\t- ";
	SetConsoleTextAttribute(h, 15);
	cout<<"Avoid traffic whenever possible."<<endl;
	SetConsoleTextAttribute(h, 10);
	cout<<"\t\t\t- ";
	SetConsoleTextAttribute(h, 15);
	cout<<"If you have an eco-drive option, use it."<<endl;
	SetConsoleTextAttribute(h, 10);
	cout<<"\t\t\t- ";
	SetConsoleTextAttribute(h, 15);
	cout<<"Walk, Ride your bike or take public transportation whenever possible."<<endl;
	SetConsoleTextAttribute(h, 10); 
	cout<<"\t\t\t- ";
	SetConsoleTextAttribute(h, 15);
	cout<<"When your tires are properly inflated, you'll get the best gas mileage possible"<<endl;
}

void recoGas(){
	cout<<endl;
	SetConsoleTextAttribute(h, 10);
	cout<<"\t\t\tHere are some tips on how to lessen your carbon emission on gas"<<endl<<endl;
	SetConsoleTextAttribute(h, 10);
	cout<<"\t\t\t- ";
	SetConsoleTextAttribute(h, 15);
	cout<<"Check your pipes, burners, and regulators for any leaks."<<endl;
	SetConsoleTextAttribute(h, 10);
	cout<<"\t\t\t- ";
	SetConsoleTextAttribute(h, 15);
	cout<<"Use pressure cookers whenever possible to reduce using gas."<<endl;
	SetConsoleTextAttribute(h, 10);
	cout<<"\t\t\t- ";
	SetConsoleTextAttribute(h, 15);
	cout<<"Reduce flame once boiling starts"<<endl;
	SetConsoleTextAttribute(h, 10);
	cout<<"\t\t\t- ";
	SetConsoleTextAttribute(h, 15);
	cout<<"Cook one-pot meals whenever possible. Saves time and saves fuel."<<endl;

}


//history
void history(){
	cout<<"\t\tHistory of Carbon Footprint: ";
	for(int i = 0; i < result; i++){
		cout<<fixed<<setprecision(2);
		cout<<resultHistory[i]<<" ";
	}
}


//to find the largest contributor of carbon emission
string largestContribute(double resFood, double resElectricity, double resGas, double resPlastic, double resTranspo){
	if(resFood > resElectricity && resFood > resGas && resFood > resPlastic && resFood > resTranspo){
		SetConsoleTextAttribute(h, 12);
		cout<<"\t\t\tOh no, your largest contributor of carbon emission is Food"<<endl<<endl;
		return "Food";
	}
	if(resElectricity > resFood && resElectricity > resGas && resElectricity > resPlastic && resElectricity > resTranspo){
		SetConsoleTextAttribute(h, 12);
		cout<<"\t\t\tOh no, your largest contributor of carbon emission is Electricity"<<endl<<endl;
		return "Electricity";
	}
	if(resGas > resFood && resGas > resElectricity && resGas > resPlastic && resGas > resTranspo){
		SetConsoleTextAttribute(h, 12);
		cout<<"\t\t\tOh no, your largest contributor of carbon emission is Gas"<<endl<<endl;
		return "Gas";
	}
	if(resPlastic > resFood && resPlastic > resElectricity && resPlastic > resGas && resPlastic > resTranspo){
		SetConsoleTextAttribute(h, 12);
		cout<<"\t\t\tOh no, your largest contributor of carbon emission is Plastic"<<endl<<endl;
		return "Plastic";
	}
	if(resTranspo > resFood && resTranspo > resElectricity && resTranspo > resGas && resTranspo > resPlastic){
		SetConsoleTextAttribute(h, 12);
		cout<<"\t\t\tOh no, your largest contributor of carbon emission is Transportation"<<endl;
		return "Transportation";
	}
	
}

//calculation
double beefs(){
	double beef, gramsBeef;
	const double emisFact = 47.6;
	cout<<setw(55)<<"Grams of beef consumed in a month: ";
	cin>>gramsBeef;
	
	beef = gramsBeef / emisFact;
	cout<<fixed<<setprecision(2);
	cout<<"\t\t    "<<beef<<endl;
	return beef;
}
double porks(){
	double pork, gramsPork;
	const double emisFact = 14.285;
	cout<<setw(55)<<"Grams of pork consumed in a month: ";
	cin>>gramsPork;
	
	pork = gramsPork / emisFact;
	cout<<fixed<<setprecision(2);
	cout<<"\t\t    "<<pork<<endl;
	return pork;
}
double fishes(){
	double fish, gramsFish;
	const int emisFact = 40;
	cout<<setw(46)<<"Grams of fish in a month: ";
	cin>>gramsFish;
	
	fish = gramsFish / emisFact;
	cout<<fixed<<setprecision(2);
	cout<<"\t\t    "<<fish<<endl;
	return fish;
}

double rices(){
	double rice, gramsRice;
	const int emisFact = 400;
	cout<<setw(55)<<"Grams of rice consumed in a month: ";
	cin>>gramsRice;
	
	rice = gramsRice / emisFact;
	cout<<fixed<<setprecision(2);
	cout<<"\t\t    "<<rice<<endl;
	return rice;
}
double electricity(){
	double electricBill, electricCons;
	const double emisFact = 0.6;
	
	cout<<endl<<endl;
	cout<<setw(35)<<"KWH per month: ";
	cin>>electricBill;
	
	electricCons = emisFact * electricBill;
	cout<<fixed<<setprecision(2);
	cout<<setw(25)<<electricCons;
	
	return electricCons;
}

double food(){
	double resultBeef, resultPork, resultFish, resultRice, foodResult;
	
	resultBeef = beefs();
	resultPork = porks();
	resultFish = fishes();
	resultRice  = rices();
	
	foodResult = resultBeef + resultPork + resultFish + resultRice;
	return foodResult;

}

double gas(){
	double LPGTanks, LPG;
	const double emisFactor = 2.725;
	
	cout<<setw(56)<<"How many kgs in LPG tanks you used: ";
	cin>>LPG;
	
	LPGTanks = LPG * emisFactor;
	cout<<fixed<<setprecision(2);
	cout<<"\t\t    "<<LPGTanks;
	return LPGTanks;
	
}

double plasticCons(){
	double plast, plastWaste;
	const int emissionFact = 9;
	
	cout<<setw(67)<<"How much plastics do you throw away per month? ";
	cin>>plastWaste;
	
	plast = plastWaste / emissionFact;
	cout<<fixed<<setprecision(2);
	cout<<"\t\t    "<<plast;
	return plast;
}

double transportation(){
	double petroleumGas, distTravel;
	const double emisFact = 8.6;
	
	cout<<setw(63)<<"How far you travel in kms when travelling: ";
	cin>>distTravel;
	
	
	petroleumGas = distTravel /emisFact;
	cout<<fixed<<setprecision(2);
	cout<<"\t\t    "<<petroleumGas;
	return petroleumGas;
}

int main(){
	double resultElectric, resultFood, resultGas, resultPlasticCons, resultTransportation, CfResult;
	int houseHold, pick;
	char choose, key, choice;
	char continued, ask;
	bool mainRun = true, run = false;
	string recommend, largestContributor;

	cout<<endl<<endl<<endl<<endl<<endl;
	SetConsoleTextAttribute(h, 15);
	cout<<setw(90)<<"Hello User! Welcome to our program, before we start, we would"<<endl;
	cout<<setw(90)<<"like to introduce to you the definition of Carbon Emission and"<<endl;
	cout<<setw(78)<<"why it's harmful for the environment."<<endl<<endl;
		
	cout<<"\t\t\t     ";		
	SetConsoleTextAttribute(h, BACKGROUND_GREEN|BACKGROUND_INTENSITY);		
	cout<<"Carbon Emission";
	SetConsoleTextAttribute(h, 15);
	cout<<" also known as CO2 emissions are the burning of"<<endl;
	cout<<setw(88)<<"fossil fuels and manufaturing of other materials which"<<endl;
	cout<<setw(90)<<"contributes to excessive greenhouse gases which is harmful for"<<endl;
	cout<<setw(35)<<"the environment. ";
	SetConsoleTextAttribute(h, BACKGROUND_GREEN|BACKGROUND_INTENSITY);
	cout<<"Carbon Emission"; 
	SetConsoleTextAttribute(h, 15);
	cout<<" is present everywhere in the world and is caused"<<endl;
	cout<<setw(90)<<"by various factors such as electricity, food consumption,"<<endl;
	cout<<setw(80)<<"plastic consumption, transportation, etc."<<endl;
	
	cout<<endl<<endl;

	
	do{
		try{
			cout<<setw(105)<<"Enter [a/A] key to continue...";
			cin>>key;
			if(key == 'a' || key == 'A'){
				system("CLS");
				cout<<endl<<endl<<endl<<endl<<endl;
				SetConsoleTextAttribute(h, 10);
				cout<<setw(70)<<"Facts about Carbon Footprint"<<endl<<endl;
				SetConsoleTextAttribute(h, 15);
				cout<<setw(90)<<"- A CO2 footprint is determined by factors such as how much "<<endl;
				cout<<setw(100)<<"fossil fuel an individual uses or how much CO2 is produced by an organization."<<endl<<endl;
				cout<<setw(100)<<"- You should focus on ways to save energy given the global emissions because "<<endl;
				cout<<setw(85)<<"  we have more threats to face when it comes to energy."<<endl<<endl;
				cout<<setw(99)<<"- Power plants produce more global emissions usually from 90.23% fuel combustion. "<<endl<<endl;
				cout<<setw(90)<<"- It is to be noted that around 62% of electricity comes "<<endl;
				cout<<setw(85)<<" from the fuel economy - burning fossil fuel."<<endl<<endl;
				cout<<setw(89)<<"- Indoor plants can help lower Co2 levels in your home."<<endl<<endl<<endl;
				
				cout<<setw(110)<<"Press any to continue...";
				getch();
				break;
				
			}
			else{
				throw key;
			}	
		}
		catch(char err){
		cout<<setw(6)<<err<<" Cannot be recognized!"<<endl;
		}	
	}while(key != 'a' || key != 'A');
	

	while(mainRun == true){
		
		system("CLS");
		cout<<endl<<endl<<endl<<endl<<endl<<endl;
		cout<<setw(70);
		SetConsoleTextAttribute(h, 10);
		cout<<"Carbon Footprint Project"<<endl<<endl;

		SetConsoleTextAttribute(h, 15);
		history();
		resultElectric = electricity();
		cout<<endl;
		resultFood = food();
		cout<<endl;
		resultPlasticCons = plasticCons();
		cout<<endl;
		resultGas = gas();
		cout<<endl;
		resultTransportation = transportation();
		cout<<endl;
		
		cout<<setw(56)<<"How many members in your household: ";
		cin>>houseHold;
		
		CfResult = ((resultElectric + resultFood + resultGas + resultPlasticCons + resultTransportation / 1000)/12)/houseHold;
		resultHistory[result++] = CfResult;
		
		
		system("CLS");
		cout<<endl<<endl<<endl<<endl<<endl;
		SetConsoleTextAttribute(h, 10);
		cout<<"\t\t\t\t\t\tResults and Tips"<<endl<<endl;
		cout<<fixed<<setprecision(2);
		SetConsoleTextAttribute(h, 15);
		cout<<"\t\t\tCarbon Footprint: "<<CfResult<<endl<<endl;
		largestContributor= largestContribute(resultFood, resultElectric, resultGas, resultPlasticCons, resultTransportation);

		if(largestContributor == "Gas"){
			recoGas();
		}
		else if(largestContributor == "Electricity"){
		
			recoElectricity();
		}
		else if(largestContributor == "Food"){
			
			recoFood();
		}
		else if(largestContributor == "Transportation"){
		
			recoTranspo();
		}
		else if(largestContributor == "Plastic"){
			recoPlastic();
		}
		
		cout<<endl<<endl;
		cout<<"\t\t\t\t\t\t\t\t\tPress [y/Y] to see more tips to lessen"<<endl; 
		cout<<"\t\t\t\t\t\t\t\t\tcarbon emission on different categories...";
		cin>>key;
		if(key == 'y' || key == 'Y'){
			run = true;
		}
		else{
			run = false;
		}
		//for recommendaation
		if(run == true){
			do{
				try{
					system("Cls");
					cout<<endl<<endl<<endl<<endl<<endl<<endl;
					cout<<"\t\tHere are some tips on how to lessen your carbon emission on different categories"<<endl;
					cout<<"\t\t1. Food\n\t\t2.Plastic\n\t\t3.Transportation\n\t\t4.Electricity\n\t\t5.Gas"<<endl<<endl;
					cout<<"\n\t\t\t\t\t\t\t\t\tEnter you want to lessen: ";
					cin>>pick;
					switch(pick){
						case 1:
							
							recoFood();
							break;
						case 2:
						
							recoPlastic();
							break;
						case 3:
						
							recoTranspo();
							break;
						case 4:
							
							recoElectricity();
							break;
						case 5:
						
							recoGas();
							break;
						default:
							throw pick;
					}
				}		
				
				catch(int err){
					cout<<err<<"\t\t\t\t\t\t\t\t\tCannot be recognized!"<<endl;
				}
				cout<<"\n\t\t\t\t\t\t\t\t\tdo you want to continue[y/n]: ";
				cin>>choose;
				if(choose == 'y' || choose == 'y'){
					continue;
				}
				else{
					break;
				}
				}while(pick != 1 || pick != 2 || pick != 3 || pick != 4 || pick != 5);
			}
	
			//quizzes
			system("CLS");
	
			quiz1();
			quiz2();
			quiz3();
			
		system("CLS");
		cout<<endl<<endl<<endl<<endl<<endl;		
		cout<<"t\t\t\t\t\t\tCarbon Footprint Project"<<endl<<endl;
		cout<<"\t\t\t\t\t\t\t\t\tYour final score is: "<<score_counter<<endl;
		cout<<"\t\t\t\t\t\t\t\t\tdo you want to go back to carbon";
		cout<<"\nt\t\t\t\t\t\t\t\t\t   footprint calculator[y/n]: ";
		cin>>choose;
		if(choose == 'y' || choose == 'y'){
			continue;
		}
		else{
			break;
		}		
	}
	return 0;
}
