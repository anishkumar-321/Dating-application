#include<bits/stdc++.h>
using namespace std;
   vector<string>attitudes={" ","Adopt","Conceive","Calm","Short_Tempered","Capitalist","Socialist","Logical","Emotional","Creationist","Evolutionist"};
   string industry_types[100]={" ","Agriculture","Construction","Manufacturing","Mining","Transportation","Food Industry","Health Care","Finance"," Metal","Music Industry","Retail Industry","Entertainment","Energy Industry","Media","Electronics","Computer","Forestry","Medicine","Hospitality","Food Service","Others"};
   string study_types[100]={" ","Engineering","Medicine","Architecture","Sciences","Business","Humanities and Rights","Laws","Animation","MBBS","Nursing","Agriculture","Diploma","Degree","Others"};
   string mother_language_types[100]={" ","English","Hindi","Bengali","Telugu","Marathi","Punjabi","Tamil","Urdu","Sanskrit","Odia","Gujarati","Kannada","Malayalam"};
   string status_types[100]={" ","Single","Single with Kids","Divorced","Divorced with kids","Widowed","Widowed with kids","Engaged","Relationship"};
   string faith_types[100]={" ","Christianity","Judaism","Islam","Buddhism","Hinduism","Sikhism","Protestant","Atheist","Demonic Faith","Evangelicalism"};
   string drinking_habits_types[100]={" ","Regular","Planning to Quit","Socially","Occasionally","Teetotaler"};
   string smoking_types[100]={" ","No","YES","Planning to Quit"};
   string  qualification_types[100]={" ","Bachelors","Masters","PHD","Post Doc","Others"};
struct information{
string phone_number;
string password;
double height_option;
string name;
string email;
string  phone_number2;
string location;
string gender;
string dob;
string partner;
short gender_type;
short status_number;
short faith_option;
short mother_language;
short smoke_option;
short drinking_option;
short high_qualification;
short study_option;
short industry_option;
int behaviours;
int behaviours1;
int behaviours2;
int behaviours3;
int behaviours4;
short years_experience;
short  age_option;
};
 struct information s;
  void authentication(struct information  &);
   void Personal_Info(vector<information>&);
   void age_confirmation(vector<information>&);
   void height(vector<information>&);
   void status(vector<information>&);
   void faith(vector<information>&);
   void mother_language( vector<information>&);
   void do_smoke( vector<information>&);
   void drinking_habits(vector<information>&);
   void highest_qualification( vector<information>&);
   void studying(vector<information>&);
   void industry( vector<information>&);
   void experience( vector<information>&);
   void behaviour(vector<information>&);
   void summary(vector<information>&);
   void delete_account(vector<information>&);
   void soulmate(vector<information>&);
   void detailed_information(vector<information>);
   short temp_gender_type;
   int main();


vector<information>male;
vector<information>female;
 void summary(){
 cout<<"These Dating Application is Designed for "<<endl;
 cout<<"the Desis around "<<endl;
 cout<<"the World"<<endl;
 cout<<"We do our best to"<<endl;
 cout<<"make sure there's"<<endl;
 cout<<"someone for"<<endl;
 cout<<"everyone on Aisle"<<endl;
 cout<<endl;
}
void authentication(struct information &s){
    label:
  cout<<"Please Enter the Phone Number"<<endl;
  string temp_phone_number;
   cin>>temp_phone_number;
   cin.get();
   if(temp_phone_number.size()<10 || temp_phone_number.size()>10){
     cout<<"Please Enter the Valid 10 digit number"<<"\n";
     goto label;
    }else{
   s.phone_number=temp_phone_number;
   label3:
   cout<<"Enter the Password"<<endl;
   cout<<"The Password Size Must Be Greater Than Or Equal To 8 Letters And The Password Must Contains 1 Upper,1 Lower,1 Number,1 Special_digit"<<endl;
   string temp_password;
   getline(cin,temp_password);
   int lower_letters=0,upper_letters=0,numbers=0,special_symbols=0;
   for(long long unsigned int i=0;i<temp_password.size();i++){
      if(temp_password[i]>=97 && temp_password[i]<=122)
        lower_letters++;
      if(temp_password[i]>=65 && temp_password[i]<=90)
         upper_letters++;
      if(temp_password[i]>=48 && temp_password[i]<=57)
         numbers++;
      if(temp_password[i]>=32 && temp_password[i]<=47|| temp_password[i]>=58 && temp_password[i]<=64 || temp_password[i]>=91 && temp_password[i]<=96 || temp_password[i]>=123 && temp_password[i]<=126)
        special_symbols++;
   }
   if(temp_password.size()>=8 && upper_letters>=1 && lower_letters>=1 && special_symbols>=1){
      s.password=temp_password;
   }
      else{
        cout<<"PLEASE ENTER THE VALID PASSWORD THAT MATCHES THE REQUIREMENTS"<<endl;
        goto label3;
   }
   }
   cout<<endl;
}
void Personal_Info(vector<information>&male_female){
    label:
  cout<<"Please enter Your Name"<<endl;
  int numbers=0,special_symbols=0;
   string temp_name;
   getline(cin,temp_name);
   for(long long unsigned int i=0;i<temp_name.size();i++){
     if(temp_name[i]>=48&&temp_name[i]<=57)
         numbers++;
      else if(temp_name[i]>=32&&temp_name[i]<=47||temp_name[i]>=58&&temp_name[i]<=64||temp_name[i]>=91&&temp_name[i]<=96||temp_name[i]>=123&&temp_name[i]<=126)
        special_symbols++;
   }
   if(numbers>=1 || special_symbols>=1){
      cout<<"PLEASE ENTER THE VALID NAME THAT CONSISTS ONLY ALPHABETS"<<endl;
        goto label;
   }
   else{
    male_female[male_female.size()-1].name=temp_name;
   }
   label1:
  cout<<"Please enter your email"<<endl;
  cout<<"Please enter the complete path like ------------@gmail.com in this way"<<endl;
  getline(cin,male_female[male_female.size()-1].email);
  cout<<"Please enter your Date Of Birth"<<endl;
  cout<<"The Format of entering the date of birth is Year_number/month_number/date_number"<<endl;
  getline(cin,male_female[male_female.size()-1].dob);
  city:
  cout<<"Please enter your City"<<endl;
  getline(cin,male_female[male_female.size()-1].location);
  numbers=0,special_symbols=0;
  temp_name=male_female[male_female.size()-1].location;
  for(long long unsigned int i=0;i<male_female[male_female.size()-1].location.size();i++){
        if(temp_name[i]>=48&&temp_name[i]<=57)
         numbers++;
      else if(temp_name[i]>=32&&temp_name[i]<=47||temp_name[i]>=58&&temp_name[i]<=64||temp_name[i]>=91&&temp_name[i]<=96||temp_name[i]>=123&&temp_name[i]<=126)
        special_symbols++;
  }
  if(numbers>=1 || special_symbols>=1){
      cout<<"PLEASE ENTER THE VALID CITY NAME THAT CONSISTS ONLY ALPHABETS"<<endl;
        goto city ;
   }
   cout<<endl;
}
void age_confirmation(vector<information>&male_female){
   top:
   cout<<"Are You sure that you are above 21 years old"<<endl;
   cout<<"if more than 21"<<endl;
   cout<<"press 1 that indicates you are more than 21"<<" "<<"if not"<<" "<<"press 2 that indicates you are less than 21"<<endl;
   cin>>male_female[male_female.size()-1].age_option;
   if(male_female[male_female.size()-1].age_option!=1){
     cout<<"You are to small to date with others"<<endl;
     cout<<"Are you again want to enter the age"<<endl;
      cout<<"Then press 1 to enter age"<<endl;
      cout<<"Press 2 to exit"<<endl;
      int option;
      cin>>option;
      if(option==2){
        male_female.erase(male_female.begin()+male_female.size()-1);
        main();
      }
      else if(option==1)
        goto top;
      else{
       cout<<"Please enter the valid number"<<endl;
       goto top;
     }
   }
   cout<<endl;
}
void height(vector<information>&male_female){
    label:
  cout<<"What's Your Height"<<endl;
   for(int i=4;i<=7;i++){
     for(int j=0;j<=11;j++){
        printf("Press %d.%d your height is %d.%d\n",i,j,i,j);
     }
   }
   cout<<"Select Your Height In Theses Options"<<endl;
   cin>>male_female[male_female.size()-1].height_option;
    if(male_female[male_female.size()-1].height_option<4.0 || male_female[male_female.size()-1].height_option>7.11){
        cout<<"PLEASE ENTER THE VALID HEIGHT IN BETWEEN 4.0 TO 7.11"<<endl;
         goto label;
    }
}
void status(vector<information>&male_female){
    label:
cout<<"Press the Number in Which Category you belongs to"<<endl;
cout<<"Press 1 that you are a Single"<<endl;
cout<<"Press 2 that you are a Single With Kids"<<endl;
cout<<"Press 3 that you are Divorced"<<endl;
cout<<"Press 4 that you are Divorced With Kids"<<endl;
cout<<"Press 5 that you are Widowed"<<endl;
cout<<"Press 6 that you are Widowed with Kids"<<endl;
cout<<"Press 7 that you are Engaged"<<endl;
cout<<"Press 8 that you are in a  Relationship"<<endl;
short temp_status_number;
cin>>temp_status_number;
 if(temp_status_number>8 || temp_status_number<1){
    cout<<"PLEASE ENTER THE VALID NUMBER BETWEEN 1 TO 8"<<endl;
     goto label;
 }
  else
  male_female[male_female.size()-1].status_number=temp_status_number;
  cout<<endl;
}
void faith(vector<information>&male_female){
    label:
 cout<<"Please Press your option that whose your Faith"<<endl;
 cout<<"Press 1 that you are belongs to Christianity"<<endl;
 cout<<"Press 2 that you are belongs to Judaism"<<endl;
 cout<<"Press 3 that you are belongs to Islam"<<endl;
 cout<<"Press 4 that you are belongs to Buddhism"<<endl;
 cout<<"Press 5 that you are belongs to Hinduism"<<endl;
 cout<<"Press 6 that you are belongs to Sikhism"<<endl;
 cout<<"Press 7 that you are belongs to Protestant"<<endl;
 cout<<"Press 8 that you are belongs to Atheist"<<endl;
 cout<<"Press 9 that you are belongs to Demonic Faith"<<endl;
 cout<<"Press 10 that you are belongs to Evangelicalism"<<endl;
 short temp_faith_option;
 cin>>temp_faith_option;
 if(temp_faith_option<1 || temp_faith_option>10){
    cout<<"PLEASE ENTER THE VALID NUMBER BETWEEN 1 TO 10"<<endl;
     goto label;
 }
 else
 male_female[male_female.size()-1].faith_option=temp_faith_option;
 cout<<endl;
}
void mother_language(vector<information>&male_female){
    label:
 cout<<"Select your Mother Language"<<endl;
 cout<<"Press 1 that you will speak English"<<endl;
 cout<<"Press 2 that you will speak Hindi"<<endl;
 cout<<"Press 3 that you will speak Bengali"<<endl;
 cout<<"Press 4 that you will speak Telugu"<<endl;
 cout<<"Press 5 that you will speak Marathi"<<endl;
 cout<<"Press 6 that you will speak Punjabi"<<endl;
 cout<<"Press 7 that you will speak Tamil"<<endl;
 cout<<"Press 8 that you will speak Urdu"<<endl;
 cout<<"Press 9 that you will speak Sanskrit"<<endl;
 cout<<"Press 10 that you will speak Odia"<<endl;
 cout<<"Press 11 that you will speak Gujarati"<<endl;
 cout<<"Press 12 that you will speak Kannada"<<endl;
 cout<<"Press 13 that you will speak Malayalam"<<endl;
 short temp_mother_language;
  cin>>temp_mother_language;
  if(temp_mother_language<1 || temp_mother_language>13){
    cout<<"PLEASE ENTER THE VALID NUMBER BETWEEN 1 TO 13"<<endl;
    goto label;
  }
  else
  male_female[male_female.size()-1].mother_language=temp_mother_language;
  cout<<endl;
}
void do_smoke(vector<information>&male_female){
    label:
 cout<<"Do You Smoke"<<endl;
 cout<<"Press 1 that you wont smoke"<<endl;
 cout<<"Press 2 that you smoke"<<endl;
 cout<<"Press 3 that you are Planning to Quit"<<endl;
 short temp_smoke_option;
 cin>>temp_smoke_option;
 if(temp_smoke_option>3 || temp_smoke_option<1){
    cout<<"PLEASE ENTER THE VALID NUMBER BETWEEN 1 TO 3"<<endl;
    goto label;
 }
 else
 male_female[male_female.size()-1].smoke_option=temp_smoke_option;
 cout<<endl;
}
void drinking_habits(vector<information>&male_female){
    label:
  cout<<"Your Drinking Habits"<<endl;
  cout<<"Press 1 that you drink  Regular"<<endl;
  cout<<"Press 2 that you are Planning to Quit"<<endl;
  cout<<"Press 3 that you  drink Socially"<<endl;
  cout<<"Press 4 that you drink Occasionally"<<endl;
  cout<<"Press 5 that you do not have drinking habit"<<endl;
  short temp_drinking_option;
  cin>>temp_drinking_option;
  if(temp_drinking_option>5 || temp_drinking_option<1){
    cout<<"PLEASE ENTER THE VALID NUMBER BETWEEN 1 TO 5"<<endl;
     goto label;
  }
  else
  male_female[male_female.size()-1].drinking_option=temp_drinking_option;
  cout<<endl;
}
void highest_qualification(vector<information>&male_female){
    label:
    cout<<"Your Highest Qualification"<<endl;
   cout<<"Press 1 that you are highest qualification is Bachelors"<<endl;
   cout<<"Press 2 that you are highest qualification is Masters"<<endl;
   cout<<"Press 3 that you are highest qualification is PHD"<<endl;
   cout<<"Press 4 that you are highest qualification is Post Doc"<<endl;
   cout<<"Press 5 others"<<endl;
   int temp_high_qualification;
   cin>>temp_high_qualification;
    if(temp_high_qualification>5 || temp_high_qualification<1){
        cout<<"PLEASE ENTER THE VALID NUMBER BETWEEN 1 TO 5"<<endl;
        goto label;
    }
    else
   male_female[male_female.size()-1].high_qualification=temp_high_qualification;
   cout<<endl;
}
void studying(vector<information>&male_female){
     label:
cout<<"What Did You Study ?"<<endl;
cout<<"Press 1 that you are (pursued or pursuing) Engineering"<<endl;
cout<<"Press 2 that you are (pursued or pursuing) Medicine"<<endl;
cout<<"Press 3 that you are (pursued or pursuing) Agriculture"<<endl;
cout<<"Press 4 that you are (pursued or pursuing) Science"<<endl;
cout<<"Press 5 that you are (pursued or pursuing) Business"<<endl;
cout<<"Press 6 that you are (pursued or pursuing) Humanities & Arts"<<endl;
cout<<"Press 7 that you are (pursued or pursuing) Laws"<<endl;
cout<<"Press 8 that you are (pursued or pursuing) Animation"<<endl;
cout<<"Press 9 that you are (pursued or pursuing) MBBS"<<endl;
cout<<"Press 10 that you are (pursued or pursuing) Nursing"<<endl;
cout<<"Press 11 that you are (pursued or pursuing) Agriculture"<<endl;
cout<<"Press 12 that you are (pursued or pursuing) Diploma"<<endl;
cout<<"Press 13 that you are (pursued or pursuing) Degree"<<endl;
cout<<"Press 14 that you are (pursued or pursuing) Other"<<endl;
 short temp_study_option;
 cin>>temp_study_option;
 if(temp_study_option>14 || temp_study_option<1){
    cout<<"PLEASE ENTER THE VALID OPTION FROM 1 TO 14"<<endl;
     goto label;
 }
 else{
    male_female[male_female.size()-1].study_option=temp_study_option;
 }
 cout<<endl;
}
void industry(vector<information>&male_female){
    label:
  cout<<
  "Which Industry do you Work"<<endl;
  cout<<"Press 1 that you are working in the Agriculture Field "<<endl;
  cout<<"Press 2 that you are working in the 2.Construction Field"<<endl;
  cout<<"Press 3 that you are working in the Manufacturing Field"<<endl;
  cout<<"Press 4 that you are working in the Mining Field"<<endl;
  cout<<"Press 5 that you are working in the Transportation Field"<<endl;
  cout<<"Press 6 that you are working in the Food Industry Field"<<endl;
  cout<<"Press 7 that you are working in the Health Care Field"<<endl;
  cout<<"Press 8 that you are working in the Finance Field"<<endl;
  cout<<"Press 9 that you are working in the Metal Field"<<endl;
  cout<<"Press 10 that you are working in the Music Industry Field"<<endl;
  cout<<"Press 11 that you are working in the Retail Industry Field"<<endl;
  cout<<"Press 12 that you are working in the Entertainment Field"<<endl;
  cout<<"Press 13 that you are working in the Energy Industry Field"<<endl;
  cout<<"Press 14 that you are working in the Media Field"<<endl;
  cout<<"Press 15 that you are working in the Electronics Field"<<endl;
  cout<<"Press 16 that you are working in the Computer Field"<<endl;
  cout<<"Press 17 that you are working in the Forestry Field"<<endl;
  cout<<"Press 18 that you are working in the Medicine Field"<<endl;
  cout<<"Press 19 that you are working in the Hospitality Field"<<endl;
  cout<<"Press 20 that you are working in the Food Service Field"<<endl;
  cout<<"Press 21 that you works on other Field"<<endl;
  short temp_industry_option;
  cin>>temp_industry_option;
  if(temp_industry_option>21 || temp_industry_option<1){
    cout<<"PLEASE ENTER THE VALID NUMBER BETWEEN 1 TO 21"<<endl;
     goto label;
  }
  else{
  male_female[male_female.size()-1].industry_option=temp_industry_option;
}
cout<<endl;
}
void experience(vector<information>&male_female){
   cout<<"How many years of experience you have in your job"<<endl;
   for(int i=0;i<=10;i++)
     printf("Press %d you have %d years experience\n",i,i);
    top:
     cout<<"More than 10+ experience enter 11"<<endl;
     cin>>male_female[male_female.size()-1].years_experience;
  if(male_female[male_female.size()-1].years_experience<0 ||male_female[male_female.size()-1].years_experience>=12){
    cout<<"You have entered incorrect number"<<endl;
    goto top;
     }
     cout<<endl;
}

void behaviour(vector<information>&male_female){
    int option;
   cout<<"What Describes You Better"<<endl;
   top:
   cout<<"Press 1 to Adopt or Press 2 to Conceive"<<endl;
   cout<<"1.Adopt"<<" "<<"or"<<"2.Conceive"<<endl;
   cin>>option;
   if(option!=1 && option!=2)
    {cout<<"You Have Entered Incorrect Number"<<endl;
   cout<<"Please Enter The Correct Number"<<endl;
   goto top;
   }
   else{
   male_female[male_female.size()-1].behaviours=option;
   }
    top1:
   cout<<"Press 3 to Calm or Press 4 to Short Tempered"<<endl;
   cout<<"3.Calm"<<" "<<"or"<<"4.Short Tempered"<<endl;
   cin>>option;
   if(option!=3 && option!=4){
    cout<<"You Have Entered Incorrect Number"<<endl;
   cout<<"Please Enter The Correct Number"<<endl;
   goto top1;
   }
   else{
   male_female[male_female.size()-1].behaviours1=option;
   }
   top2:
   cout<<"Press 5 Your Capitalist or Press 6 your Socialist"<<endl;
   cout<<"5.Capitalist"<<" "<<"or"<<"6.Socialist"<<endl;
   cin>>option;
   if(option!=5 && option!=6){
        cout<<"You Have Entered Incorrect Number"<<endl;
   cout<<"Please Enter The Correct Number"<<endl;
   goto top2;
   }
   else{
   male_female[male_female.size()-1].behaviours2=option;
   }
   top3:
   cout<<"7.Logical"<<" "<<"or"<<"8.Emotional"<<endl;
   cout<<"Press 7 You Are Logical or Press 8 You Are Emotionalist"<<endl;
   cin>>option;
   if(option!=7 && option!=8){
    cout<<"You Have Entered Incorrect Number"<<endl;
   cout<<"Please Enter The Correct Number"<<endl;
   goto top3;
   }
   else{
   male_female[male_female.size()-1].behaviours3=option;
   }
   top4:
   cout<<"9.Creationist"<<" "<<"or"<<"10.Evolutionist"<<endl;
   cout<<"Press 9 Your Are Creationist or Press 10 You Are Evolutionist"<<endl;
   cin>>option;
  if(option!=9 && option!=10){
        cout<<"You Have Entered Incorrect Number"<<endl;
        cout<<"Please Enter The Correct Number"<<endl;
      goto top4;
  }
  else{
  male_female[male_female.size()-1].behaviours4=option;
   cout<<endl;
  }
}
  bool soulmate_accepter(vector<information>&male_female,int index=-1){
      int sizes=(index==-1)?male_female.size()-1:index;
        string key= male_female[sizes].name;
        cout<<key<<" "<<"is send a request to you"<<endl;
        cout<<"Once check his profile"<<endl;
        cout<<"If you like this profile then you both paired as couples"<<endl;
        cout<<"His name is "<<" "<<key<<endl;
        cout<<key<<" "<<"Phone number"<<" "<<"is"<<" "<<male_female[sizes].phone_number<<endl;
        cout<<"The"<<" "<<key<<" "<<"Password "<<"is"<<" "<<male_female[sizes].password<<endl;
        cout<<key<<" "<<"height"<<" "<<"is"<<" "<<male_female[sizes].height_option<<endl;
        cout<<key<<" "<<"email"<<" "<<"is"<<" "<<male_female[sizes].email<<endl;
        cout<<key<<" "<<"Location"<<" "<<"is"<<" "<<male_female[sizes].location<<endl;
        cout<<key<<" "<<"gender"<<" "<<"is"<<" "<<male_female[sizes].gender<<endl;
        cout<<"Date of birth of"<<" "<<key<<" "<<"is"<<" "<<male_female[sizes].dob<<endl;
        cout<<"Relation Status of"<<" "<<key<<" is"<<" "<<status_types[male_female[sizes].status_number]<<endl;
        cout<<"Religious of"<<" "<<key<<" "<<"is"<<" "<<faith_types[male_female[sizes].faith_option]<<endl;
        cout<<"Mother Tongue of"<<" "<<key<<" is"<<" "<<mother_language_types[male_female[sizes].mother_language]<<endl;
        cout<<"Smoke Habit of"<<" "<<key<<" is"<<" "<<smoking_types[male_female[sizes].smoke_option]<<endl;
        cout<<"Drinking Habit of"<<" "<<key<<" is"<<" "<<drinking_habits_types[male_female[sizes].drinking_option]<<endl;
        cout<<"The Highest qualification of"<<" "<<key<<" is"<<" "<<qualification_types[male_female[sizes].high_qualification]<<endl;
        cout<<"The Working Industry of"<<" "<<key<<" is"<<" "<<industry_types[male_female[sizes].industry_option]<<endl;
        cout<<"Years of experience"<<" "<<key<<" has"<<" "<<male_female[sizes].years_experience<<endl;
        cout<<endl<<endl;
        top:
        cout<<"Do You Have Interest On This Profile"<<endl;
        cout<<"Press 1 To Pair With This Person"<<endl;
        cout<<"Press 2 To Not Interested"<<endl;
         int option;
         cin>>option;
         if(option==1)
            return true;
         else if(option==2)
            return false;
         else{
            cout<<"You Have Entered an Incorrect Number"<<endl;
            cout<<"Please Enter The Correct Number"<<endl;
            goto top;
         }
}
// These function displays each and every information of each males and females and make
bool soulmate(vector<information>&males_females,int index=-1){
    int sizes = (index==-1)?males_females.size()-1:index;
    vector<information>male_female=males_females;
    if(males_females[sizes].gender_type==1)
        male_female=female;
    else if(males_females[sizes].gender_type==2){
             male_female=male;
    }
        if(male_female.size()!=0){
        cout<<"Here is the list of persons where you can select any of them if you are interested ,after selecting your desired profile then the request should be send to them ";
        cout<<",If they also shown interest on your profile then you both paired as a couples"<<endl<<endl;
        }
        for(long long unsigned int i=0;i<male_female.size();i++){
        if(male_female[i].partner.size()==0){
        string key= male_female[i].name;
        cout<<"Soulmate name is "<<" "<<key<<endl;
        cout<<key<<" "<<"Phone number"<<" "<<"is"<<" "<<male_female[i].phone_number<<endl;
        cout<<"The "<<key<<" "<<"Password"<<" "<<"is"<<" "<<male_female[i].password<<endl;
        cout<<key<<" "<<"height"<<" "<<"is"<<" "<<male_female[i].height_option<<endl;
        cout<<key<<" "<<"email"<<" "<<"is"<<" "<<male_female[i].email<<endl;
        cout<<key<<" "<<"Location"<<" "<<"is"<<" "<<male_female[i].location<<endl;
        cout<<key<<" "<<"gender"<<" "<<"is"<<" "<<male_female[i].gender<<endl;
        cout<<"Date of birth of"<<" "<<key<<" is"<<" "<<male_female[i].dob<<endl;
        cout<<"Relation Status of"<<" "<<key<<" is"<<" "<<status_types[male_female[i].status_number]<<endl;
        cout<<"Religious of"<<" "<<key<<" is"<<" "<<faith_types[male_female[i].faith_option]<<endl;
        cout<<"Mother Tongue of"<<" "<<key<<" "<<"is"<<" "<<mother_language_types[male_female[i].mother_language]<<endl;
        cout<<"Smoke Habit of"<<" "<<key<<" "<<"is"<<" "<<smoking_types[male_female[i].smoke_option]<<endl;
        cout<<"Drinking Habit of"<<" "<<key<<" "<<"is"<<" "<<drinking_habits_types[male_female[i].drinking_option]<<endl;
        cout<<"The Highest qualification of "<<key<<" is"<<" "<<qualification_types[male_female[i].high_qualification]<<endl;
        cout<<"The Working Industry of "<<key<<" is"<<" "<<industry_types[male_female[i].industry_option]<<endl;
        cout<<"Years of experience "<<key<<" has"<<" "<<male_female[i].years_experience<<endl;
        cout<<endl<<endl;
        cout<<"Do You Have Interest On this Profile"<<endl;
        cout<<"Press 1 To Pair With the profile"<<endl;
        cout<<"Press any number  to Continue"<<endl;
        int option;
        cin>>option;
         if(option==1){
            cout<<"Now the control is transferring to your soulmate if your soulmate accept your request then you could be paired as couples"<<endl;
            cout<<"Please Wait Sometime We are connecting with Your Soulmate"<<endl;
             bool value = soulmate_accepter((males_females[sizes].gender_type==1)?male:female,sizes);
             if(value==true){
               if(males_females[sizes].gender_type==1){
                 male[sizes].partner= male_female[i].name;
                 female[i].partner=male[sizes].name;
                 return true;
            }
            else if(males_females[sizes].gender_type==2){
                    female[sizes].partner= male_female[i].name;
                    male[i].partner=female[sizes].name;
                    return true;
                }
            }
            else if(value==false){
                    cout<<"keep searching you will find someone"<<endl;
            }
            }
           }
    }
     return false;
   }
void detailed_information(vector<information>&male_female,string *industry_types,string *study_types,string *mother_language_types,string *status_types,string *faith_types,string* drinking_habits_types,string* smoking_types,string* qualification_types,int index=-1){
        int sizes=(index==-1)?male_female.size()-1:index;
        string key=male_female[sizes].name;
        cout<<"Your name is "<<" "<<key<<endl;
        cout<<key<<" "<<"Phone number"<<" "<<"is"<<" "<<male_female[sizes].phone_number<<endl;
        cout<<"The"<<" "<<key<<" "<<"Password "<<"is"<<" "<<male_female[sizes].password<<endl;
        cout<<key<<" "<<"height"<<" "<<"is"<<" "<<male_female[sizes].height_option<<endl;
        cout<<key<<" "<<"email"<<" "<<"is"<<" "<<male_female[sizes].email<<endl;
        cout<<key<<" "<<"Location"<<" "<<"is"<<" "<<male_female[sizes].location<<endl;
        cout<<key<<" "<<"gender"<<" "<<"is"<<" "<<male_female[sizes].gender<<endl;
        cout<<"Date of birth of"<<" "<<key<<" is"<<" "<<male_female[sizes].dob<<endl;
        cout<<"Relation Status of"<<" "<<key<<" "<<"is"<<" "<<status_types[male_female[sizes].status_number]<<endl;
        cout<<"Religious of"<<" "<<key<<" "<<"is"<<" "<<faith_types[male_female[sizes].faith_option]<<endl;
        cout<<"Mother Tongue of"<<" "<<key<<" "<<"is"<<" "<<mother_language_types[male_female[sizes].mother_language]<<endl;
        cout<<"Smoke Habit of"<<" "<<key<<" "<<"is"<<" "<<smoking_types[male_female[sizes].smoke_option]<<endl;
        cout<<"Drinking Habit of"<<" "<<key<<" "<<"is"<<" "<<drinking_habits_types[male_female[sizes].drinking_option]<<endl;
        cout<<"The Highest qualification of"<<" "<<key<<" is"<<" "<<qualification_types[male_female[sizes].high_qualification]<<endl;
        cout<<"The Working Industry of"<<" "<<key<<" is"<<" "<<industry_types[male_female[sizes].industry_option]<<endl;
        cout<<"Years of experience"<<" "<<key<<" has"<<" "<<male_female[sizes].years_experience<<endl;
        cout<<"My behaviour is:"<<endl;
        cout<<attitudes[male_female[sizes].behaviours]<<endl;
        cout<<attitudes[male_female[sizes].behaviours1]<<endl;
        cout<<attitudes[male_female[sizes].behaviours2]<<endl;
        cout<<attitudes[male_female[sizes].behaviours3]<<endl;
        cout<<attitudes[male_female[sizes].behaviours4]<<endl;
        if(male_female[sizes].partner.size()!=0){
            cout<<"Do you want to see the detailed information of your partner then print 1"<<endl;
            cout<<"If not Press any number"<<endl;
            int option;
            cin>>option;
            if(option==1){
                temp_gender_type = male_female[sizes].gender_type;
                vector<information>&males_females=(temp_gender_type==1)?female:male;
                for(unsigned long long int i=0;i<males_females.size();i++){
                    if(males_females[i].name==male_female[sizes].partner){
                                string key=males_females[i].name;
                            cout<<"Your soulmate is "<<" "<<key<<endl;
                            cout<<key<<" "<<"Phone number"<<" "<<"is"<<" "<<males_females[i].phone_number<<endl;
                            cout<<"The"<<" "<<key<<" "<<"Password "<<"is"<<" "<<males_females[i].password<<endl;
                            cout<<key<<" "<<"height"<<" "<<"is"<<" "<<males_females[i].height_option<<endl;
                            cout<<key<<" "<<"email"<<" "<<"is"<<" "<<males_females[i].email<<endl;
                            cout<<key<<" "<<"Location"<<" "<<"is"<<" "<<males_females[i].location<<endl;
                            cout<<key<<" "<<"gender"<<" "<<"is"<<" "<<males_females[i].gender<<endl;
                            cout<<"Date of birth of"<<" "<<key<<" "<<"is"<<" "<<males_females[i].dob<<endl;
                            cout<<"Relation Status of"<<" "<<key<<" is"<<" "<<status_types[males_females[i].status_number]<<endl;
                            cout<<"Religious of"<<" "<<key<<" "<<"is"<<" "<<faith_types[males_females[i].faith_option]<<endl;
                            cout<<"Mother Tongue of"<<" "<<key<<" "<<"is"<<" "<<mother_language_types[males_females[i].mother_language]<<endl;
                            cout<<"Smoke Habit of"<<" "<<key<<" "<<"is"<<" "<<smoking_types[males_females[i].smoke_option]<<endl;
                            cout<<"Drinking Habit of"<<" "<<key<<" "<<"is"<<" "<<drinking_habits_types[males_females[i].drinking_option]<<endl;
                            cout<<"The Highest qualification of"<<" "<<key<<" is"<<" "<<qualification_types[males_females[i].high_qualification]<<endl;
                            cout<<"The Working Industry of"<<" "<<key<<"is"<<" "<<industry_types[males_females[i].industry_option]<<endl;
                            cout<<"Years of experience"<<" "<<key<<"has"<<" "<<males_females[i].years_experience<<endl;
                            cout<<"My soulmate behaviour is:"<<endl;
                            cout<<attitudes[males_females[i].behaviours]<<endl;
                            cout<<attitudes[males_females[i].behaviours1]<<endl;
                            cout<<attitudes[males_females[i].behaviours2]<<endl;
                            cout<<attitudes[males_females[i].behaviours3]<<endl;
                            cout<<attitudes[males_females[i].behaviours4]<<endl;
                            break;
                    }

                }
            }

        }

}
void delete_account(vector<information>&male_female,int index=-1){
    int sizes=(index==-1)?male_female.size()-1:index;
    temp_gender_type = male_female[sizes].gender_type;
   if(male_female[sizes].partner.size()==0)
   male_female.erase(male_female.begin()+sizes);
   else{
       string temp_partner=male_female[sizes].partner;
        male_female.erase(male_female.begin()+sizes);
        temp_gender_type = male_female[sizes].gender_type;
        vector<information>&males_females=(temp_gender_type==1)?female:male;
        for(int i=0;i<males_females.size();i++){
            if(temp_partner==males_females[i].name){
                males_females[i].partner.clear();
                break;
            }
        }
   }
}
int main(){

    int yesorno=0;
    while(1){
            start:
            summary();
            top:
    cout<<"Press 1 to login into dating site"<<endl;
    cout<<"Press 2 to Register"<<endl;
    cout<<"Press 3 to exit"<<endl;
    cin>>yesorno;
       if(yesorno==1){
        //this is the place where you want to write information about login into the site...
        //delete his account
        //show his information
        bool result=false;
        int i,index;
        vector<information>temp=male;
        string temp_number,temp_password;
        cout<<"Please enter the Phone number"<<endl;
        cin>>temp_number;
        cout<<"Please enter the password"<<endl;
        cin.get();
        getline(cin,temp_password);
        for( i=0;i<male.size();i++){
            if(male[i].phone_number==temp_number && male[i].password==temp_password){
            cout<<"YOU HAVE LOGGED INTO YOUR ACCOUNT SUCESSFULLY"<<endl;
                index=i;
                temp=male;
                result=true;
                break;
            }
        }
        if(result==false){
        for(i=0;i<female.size();i++){
            if(female[i].phone_number==temp_number && female[i].password==temp_password){
            cout<<"YOU HAVE LOGGED INTO YOUR ACCOUNT SUCESSFULLY"<<endl;
            index=i;
            temp=female;
            result=true;
            break;
            }
        }
      }
      while(result==true){
            up:
            temp_gender_type=temp[index].gender_type;
            cout<<"Press 1 to show the detailed information of about you"<<endl;
            cout<<"Press 2 to call to pair up with someone"<<endl;
            cout<<"Press 3 to delete his account"<<endl;
            cout<<"Press 4 to quit"<<endl;
            int option;
            cin>>option;
            if(option==1){
             detailed_information((temp_gender_type==1)?male:female,industry_types,study_types,mother_language_types,status_types,faith_types,drinking_habits_types,smoking_types,qualification_types,index);
            }
            else if(option==2){
             if(temp[index].partner.size()==0){
             bool value = soulmate((temp_gender_type==1)?male:female,index);
             if(value==true){
               cout<<"Finally you have paired with"<<" ";
               if(temp[index].gender_type==1)
                cout<<male[index].partner<<endl;
                else
                cout<<female[index].partner<<endl;
             }
             else
             cout<<"Your Profile does not matches with others and Try some other time"<<endl;
             }
            else{
                cout<<"You Have Already Dating with one girl"<<endl;
               goto up;
            }
           }
           else if(option==3){
             delete_account((temp_gender_type==1)?male:female,index);
            cout<<"YOU HAVE DELETED YOUR ACCOUNT SUCESSFULLY"<<endl;
             goto start;
           }
          else if(option==4){
              goto start;
          }
          else{
            cout<<"YOU HAVE ENTERED INCORRECT NUMBER"<<endl;
            goto up;
         }
    }
      if(result==false){
        cout<<"Invalid Number or Invalid Password"<<endl;
        goto start;
    }
}
      else if(yesorno==2){
             label1:
                 string temp_password;
     cout<<"Select the Gender"<<endl;
     cout<<"MALE"<<" "<<"FEMALE"<<endl;
     cout<<"Press 1 for MALE"<<endl;
     cout<<"Press 2 for FEMALE"<<endl;
      cin>>temp_gender_type;
     if(temp_gender_type<1 || temp_gender_type>2){
        cout<<"YOU HAVE ENTERED INCORRECT NUMBER"<<endl;
        cout<<"PLEASE ENTER THE CORRECT NUMBER"<<endl;
         goto label1;
       }
       // here authentication function calls then user needs to enter phone number and password and checks
       //it they matches both of the requirements then also it checks the two for loops
        authentication(s);
        for(int i=0;i<male.size();i++){
            if(male[i].phone_number==s.phone_number && male[i].password==s.password){
                cout<<"YOU HAVE ALREADY REGISTERED"<<endl;
                goto top;
            }
        }
        for(int i=0;i<female.size();i++){
            if(female[i].phone_number==s.phone_number && female[i].password==s.password){
                cout<<"YOU HAVE ALREADY REGISTERED"<<endl;
                goto top;
            }
        }

     if(temp_gender_type==1){
           male.push_back(s);
           male[male.size()-1].gender_type=temp_gender_type;
           male[male.size()-1].gender="male";
           goto down;
       }
     else if(temp_gender_type==2){
             female.push_back(s);
             female[female.size()-1].gender_type=temp_gender_type;
             female[female.size()-1].gender="female";
             goto down;
       }
}
     else if(yesorno==3){
        goto start;
      }
    else{
        cout<<"YOU HAVE ENTERD INCORRECT NUMBER"<<endl;
        goto top;
    }
   down:
   Personal_Info((temp_gender_type==1)?male:female);
   age_confirmation((temp_gender_type==1)?male:female);
   height((temp_gender_type==1)?male:female);
   status((temp_gender_type==1)?male:female);
   faith((temp_gender_type==1)?male:female);
   mother_language((temp_gender_type==1)?male:female);
   do_smoke((temp_gender_type==1)?male:female);
   drinking_habits((temp_gender_type==1)?male:female);
   highest_qualification((temp_gender_type==1)?male:female);
   studying((temp_gender_type==1)?male:female);
   industry((temp_gender_type==1)?male:female);
   experience((temp_gender_type==1)?male:female);
   behaviour((temp_gender_type==1)?male:female);

          while(1){
                first:
          cout<<"PRESS 1 TO SEE THE INFORMATION OF YOU"<<endl;
          cout<<"PRESS 2 TO START PAIRING FOR YOUR SOULMATE"<<endl;
          cout<<"PRESS 3 TO DELETE ACCOUNT "<<endl;
           cout<<"PRESS 4 TO QUIT FROM THE APPLICATION"<<endl;
          int option;
          cin>>option;
          if(option==1)
          detailed_information((temp_gender_type==1)?male:female,industry_types,study_types,mother_language_types,status_types,faith_types,drinking_habits_types,smoking_types,qualification_types,-1);
           else if(option==2){
             bool value= soulmate((temp_gender_type==1)?male:female,-1);
            if(value==true){
                cout<<"Finally you have paired with ";
               (temp_gender_type==1)?cout<<male[male.size()-1].partner:cout<<female[female.size()-1].partner<<endl;
             }
            else
             cout<<"Your Profile does not matches with others and Try some other time"<<endl;
          }
            else if(option==3){
             delete_account((temp_gender_type==1)?male:female,-1);
             cout<<"You Have Deleted Your Account Sucessfully"<<endl;
             goto start;
          }
           else if(option==4){
            cout<<"YOU HAVE LOGGED OUT SUCESSFULLY"<<endl;
            break;
          }
          else{
            cout<<"You Have Entered Wrong Number"<<endl;
             goto first;
          }
          }

    }
}




