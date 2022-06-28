#include<iostream.h>
#include<conio.h>
void main()
{
int a,length=0;
char str[20];
clrscr();
cout<<"Enter the string:";
cin>>str;
for(a=0;str[a]!= '\0';a++)
{
length++;
}
cout<<"\nlength of string is :"<<length<<endl;
getch();
}
