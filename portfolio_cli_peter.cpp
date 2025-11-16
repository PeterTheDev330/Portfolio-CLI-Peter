#include <iostream>
using namespace std;

void menu();
void show_about();
void show_skills();
void show_projects();
void show_future_plans();

int main(){
   
   cout<< "===================================================================="<<endl;
   cout<< "                         MY PORTFOLIO APP                           "<<endl;
   cout<< "===================================================================="<<endl;
   cout<<endl;

   menu();
   

   return 0;
}

void menu(){

   int option;
   bool display_menu = true;

   while(display_menu){

      cout<< "CONTENT"<<endl;
      cout<< "1. About Me "<<endl;
      cout<< "2. Skills I Want To Learn "<<endl;
      cout<< "3. My Projects "<<endl;
      cout<< "4. My Future Plans "<<endl;
      cout<< "5. Exit "<<endl<<endl;

      cout<< "Your Option: ";
      cin>>option;
      cout<<endl;

      while(option < 0 || option > 6){

         cout<< "Enter valid option below. "<<endl;
         cout<< "Your option: ";
         cin>>option;
         
      }

      switch(option){
         case 1: 
            show_about();
            break;
         case 2: 
            show_skills();
            break;
         case 3: 
            show_projects();
            break;
         case 4: 
            show_future_plans();
            break;
         case 5: 
            cout<< "Exiting..."<<endl;
            display_menu = false;
            break;
         defualt: 
            return;
            break;
      }

   }

}

void show_about(){

   cout<< "About Me "<<endl;
   cout<< "Hello there, my name is Peter Simpanzye, a Second Year Computer "<<endl;
   cout<< "Science Student at the Copperbelt University. With a heightened "<<endl;
   cout<< "interest in tech, I am eager to keep on learning and improving my "<<endl;
   cout<< "skills, so as to deliver client needs. A Developer with a name "<<endl;
   cout<< "that speaks for itself."<<endl;

   cout<<endl;
}

void show_skills(){
   
   cout<< "Skills I Want To Learn "<<endl;
   cout<< "1. App Development."<<endl;
   cout<< "2. Software Development."<<endl;
   cout<< "3. PenTesting."<<endl;
   cout<< "4. Web Development (Full - Stack)."<<endl;
   cout<< "5. Networking."<<endl;
   cout<< "6. DataBase Management."<<endl;
   cout<< "7. UI/ UX Designing."<<endl;

   cout<<endl;
}

void show_projects(){

   cout<< "My Projects "<<endl;
   cout<< "1. CA and Exam Score Calculator. "<<endl;
   cout<< "2. Mobile Money System - C++. "<<endl;
   cout<< "3. Student Management System - C++. "<<endl;
   cout<< "4. Portfolio Website (unfinished). "<<endl;
   cout<< "5. To-Do List - C++. "<<endl;

   cout<<endl;
}

void show_future_plans(){

   cout<< "Future Goals "<<endl;
   cout<< "1. Create a Social Mobile App for CBU. "<<endl;
   cout<< "2. Master the art of App and Web Development "<<endl;
   cout<< "3. Create a Portfolio Website "<<endl;
   cout<< "4. Create a reputable name for myself as a developer "<<endl;

   cout<<endl;
}