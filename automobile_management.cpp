#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
#include<stdio.h>
class automobile
{
int aid;
char aname[20];
int bid;
int yrm;
char cname[20];
char amodel[20];
char del[5];
char atype[10];
public:
int getaid()
{
return(aid);
}
char*retname()
{
return(aname);
}
void Read()
{
cout<<"\n Enter the automobile id : ";
cin>>aid;
cout<<"\n Enter the name of the automobile  : ";
cin>>aname;
cout<<"\n Enter the booking id : ";
cin>>bid;
cout<<"\n Enter the Year of Manufacture : "<<endl;
cin>>yrm;
cout<<"Enter the Customer Name : "<<endl;
cin>>cname;
cout<<"Enter the model of automobile : "<<endl;
cin>>amodel;
cout<<"Enter the type of automobile : "<<endl;
cin>>atype;
cout<<"Whether Delivered (Y/N) : "<<endl;
cin>>del;
cout<<endl;
}
void output()
{
cout<<"\n The automobile id is  "<<aid;
cout<<"\n The name of the automobile is "<<aname;
cout<<"\n The Year of Manufacture is  "<<yrm;
cout<<"\n The Customer Name is : "<<cname;
cout<<"\n The model of automobile is  "<<amodel;
cout<<"\n The type of automobile is "<<atype;
cout<<"\n Delivery Status : "<<del;
}
};
void Read()
{
automibile a;
ifstream f;
f.open("AUTO.dat",ios::binary);
while(!f.eof())
{
f.read((char *)&a,sizeof(a));
if(f)
a.output();
}
f.close();
}
void Write()
{
ofstream f;
automobile a1;
f.open("AUTO.dat",ios::binary|ios::app);
for(int i=1;i<5;i++)
{
a1.Read();
f.write((char *)&a1,sizeof(a1));
}
f.close();
}
void search()
{
ifstream fo;
fo.open("AUTO.dat",ios::binary);
automobile a;
int x;
char found ='n';
if(!fo)
{
cout<<"!!!!ERROR!!!!";
getch();
}
cout<<"enter the id of car to be searched";
cin>>x;
while(!fo.eof())
{
fo.read((char*)&a,sizeof(a);
if(a.getaid()==x)
{
cout<<"information";
s.out();
found= 'y';
break;
}
}
}
void modify()
{
int r;
fstream f1;
automobile a ;
f1.open("AUTO.dat",ios::binary|ios::in|ios::out);
cout<<"Enter the Automobile ID  that you wanna modify : ";
cin>>r;
while(!f1.eof())
{
f1.read((char *)&a,sizeof(a));
if(r==a.getaid())
{
f1.seekp(f1.tellp()-sizeof(a));
s.Read();
f1.write((char *)&a,sizeof(a));
break;
}
}
f1.close();
}
void Delete()
{
int r,c=0;
ifstream fin("AUTO.dat",ios::binary);
automobile a;
ofstream fout("temp.dat",ios::binary);
cout<<"\nEnter the AUTOMOBILE ID of the Record that you want to Delete";
cin>>r;
while(!fin.eof())
{
fin.read((char *)&a,sizeof(a));
if(r!=a.getaid())
{
fout.write((char *)&a,sizeof(a));
c=1;
}
}
fin.close();
fout.close();
remove("AUTO.dat");
rename("temp.dat","AUTO.dat");
if(c==0)
{
cout<<"\nRecord not found.....";
}
else
cout<<"\nRecord Deleted Successfully";
}
void main()
{
 clrscr();
 int ch;
 char c;
 do
 {
 cout<<"\t\t        AUTOMOBLIE MANAGEMENT SOFTWARE\n";
 cout<<"********************************************************************************";
 cout<<"1. ADD ENTRIES\n";
 cout<<"2. DISPLAY ALL ENTRIES\n";
 cout<<"3. SEARCH THE ENTRIES\n";
 cout<<"4. MODIFY YOUR ENTRIES\n";
 cout<<"5. DELETE YOUR ENTRIES\n"<<endl;
 cout<<"ENTER YOUR CHOICE (1-5): ";
 cin>>ch;

 switch(ch)
	{
	case 1:
	       break;
	case 2:
	       break;
	case 3:
	       break;
	case 4:
	       break;
	case 5:
	       break;
	default: cout<<"INVALID OPTION!!!!!!";
	}

 cout<<endl<<"DO YOU WANT TO CONTINUE (y/n): ";
 cin>>c;
 }while(c=='Y'||c=='y');
 getch();

}

