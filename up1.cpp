#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main ()

{ 
 cout<<"*******************English Dictionary***********************"<<endl<<endl<<endl;
	int i;
	string word;
	 string org[100]={"accessibility","adjacent","asthetics","atribute","accent","ban","banal","benefactor","breadth","benevolent","cause","could","courage","completed","copyright","declare","declaim","deflect","degrade","diffentiate"};
 string mean[100]={"the attribute of being easy to meet or deal with","having a common boundary or edge","the branch of phisiology deals with beauty and taste","a quality belonging to or characteristic of an entity","an effort in speech to stress one syllable over adjacent syllables",
 "Prohibit especially by law or social pressure","Repeated to often",
 "A persone who helps people or institute",
 "The extent of something from side to side","showing or motivated by sympathy and understanding","a person or thing that gives you rise to an action, phenomenon, or condition",
 "past of can","the ability to do something that frightens one","finish making or doing","A document granting exclusive right to publish and sell literary, musical or artistic work","Announce publicly or officially",
 "Speak against in an impassioned manner","draw sometone's away from something","reduce in worth or character, usually verbally","mark as distint"};
	cout<<"\t ENTER ANY WORD TO FIND ITS MEANING"<<endl;
	cin>>word;
	cout<<("\n");
	for(int i=0; i<100; i++){
		if (word==org[i]){
			cout<<mean[i]<<endl;
			break;
		
		}
	}
	getch();
}

