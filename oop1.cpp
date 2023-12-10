#include<iostream>
using namespace std;

class complex{
double real;
double imaginary;
public:
complex();
friend istream & operator>>(istream&,complex&);
friend ostream & operator<<(ostream&,const complex&);
complex operator+(complex);
complex operator*(complex);

};
complex::complex(){
real=0;
imaginary=0;
}
istream & operator>>(istream&,complex&i){
cin>>i.real>>i.imaginary;
return cin;
}
ostream & operator<<(ostream&,const complex&d){
cout<<d.real<<"+"<<d.imaginary<<"i"<<endl
;
return cout;

}
complex complex::operator+(complex c1){
complex temp;
temp.real=real+c1.real;
temp.imaginary=imaginary+c1.imaginary;
return temp;
}
complex complex::operator*(complex c2){
complex tmp;
tmp.real=real*c2.real-imaginary*c2.imaginary;
tmp.imaginary=real*c2.imaginary+imaginary*c2.real
; return tmp;
}
int main(){
complex c1,c2,c3,c4;
int flag=1;
char b;
char c;
char e;
int x,y;
while(flag==1){
cout<<"enter real and imaginary part of CN1:\n";
cin>>c1;
cout<<"enter real and imaginary part of CN2:\n";
cin>>c2;
int f=1;
while(f==1){
cout<<"CN1:"<<c1<<endl;

cout<<"CN2:"<<c2<<endl;
cout<<"*****MENU*****"<<endl;
cout<<"1.Addition"<<endl;
cout<<"2.Multiplication"<<endl;
cout<<"3.Print a complex number\n";
int a;
cout<<"Enter your choice from above(1 to 3):";
cin>>a;
if(a==1){
c3=c1+c2;
cout<<"Addition:"<<c3<<endl;
cout<<"do you want to perform another";
operation(y/n):\n"; cin>>b;
if(b=='y'||b=='Y'){
f=1;
}
else{
cout<<"thanks for using this program!!\n";
flag=0;
f=0;
}
}
else if(a==2){
c4=c1*c2;
cout<<"Multiplication:"<<c4<<endl;
cout<<"do you want to perform another operation(y/n):\n";
cin>>c;
if(c=='y'||c=='Y'){

f=1;
}
else{
cout<<"thanks for using this program!!\n";
flag=0;
f=0;
}
}
else {
cout<<"enter real part of complex number you wish to
print:"; cin>>x;
cout<<"enter imaginary part of the complex number you wish to
print:"; cin>>y;
cout<<"your complex number is:"<<x<<"+"<<y<<"i"<<endl;
cout<<"do you want to perform another operation(y/n):\n";
cin>>e;
if(e=='y'||e=='Y'){
f=1;
}
else{
cout<<"thanks for using this program!!\n";
flag==0;
f=0;
}
}
}
}
return 0;

}
