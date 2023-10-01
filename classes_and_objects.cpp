#include<iostream>
#include<string>
using namespace std;
class student {
    private :
    string name ;
    int  Rollnumber ;
    char grade;
    public:
    int z ;
    void getDeteils(string, int , char);
    void setData(){
        cout<<"the name of the student is: "<< name<<endl;
        cout<<"the name of the student is: "<< Rollnumber<<endl;
        cout<<"the name of the student is: "<< grade;
    }



};
void student :: getDeteils (string n,int r,char gr){
    name = n;
    Rollnumber = r;
    grade = gr;}
int main() {
    student dym ;
    dym.getDeteils("Dayam", 061 , 'A');
    dym.setData();
    return 0;

}