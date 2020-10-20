#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int dd,mm,yy;
    char name[10];
    int d1,m1,y1;
    char name1[10];                
    d1=01;
    m1=01;
    y1=1995;
    for(int i=1;i<5;i++){
        cout<<"Enter the name of the person : ";
        cin>>name;
        cout<<"\nEnter the birth date (dd-mm-yy) : ";
        cin>>dd>>mm>>yy;

        if(yy>y1){
            y1=yy;
            d1=dd;
            m1=mm;
            strcpy(name1,name);
            
        }
        else if(yy==y1){
            if(mm>m1){
                m1=mm;
                strcpy(name1,name);
                
            }
            else if(mm==m1){
                if(dd>d1){
                    d1=dd;
                    strcpy(name1,name);
                    
                }
                else if(dd==d1){
                    cout<<"\nSame age";
                }

            }            
        }    
    }
    cout<<"\n "<<name1<<" is younger ";
    cout<<"\n Date of birth is "<<d1<<" "<<m1<<" "<<y1;    
}

