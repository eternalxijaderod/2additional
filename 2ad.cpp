#include <iostream>
using namespace std;


int main(){
int day[31],month[12];
int year[101];
int t;

cin>>t;


for (int i=0; i < t; i++)
    {
        cin>>day[i]>>month[i]>>year[i];
    }

for (int i=0; i < t;i++)
{
	if (year[i] < 2016 &&  year[i]%4==0  && month[i]<3)
	{cout<<endl<<year[i]+28;}

	if (year[i] == 2000 &&  year[i]%4==0  && month[i]>2)
	{cout<<endl<<year[i]+17;}

	if (year[i] == 2004 &&  year[i]%4==0  && month[i]>2)
	{cout<<endl<<year[i]+17;}

	if (year[i] == 2008 &&  year[i]%4==0  && month[i]>2)
	{cout<<endl<<year[i]+17;}

	if (year[i] == 2012 &&  year[i]%4==0  && month[i]>2)
	{cout<<endl<<year[i]+6;}



    if (year[i] > 2015 )
	{cout<<endl<<year[i];}

if (year[i]==2001)
	{cout<<endl<<2018;}
if (year[i]==2002)
	{cout<<endl<<2019;}
if (year[i]==2003)
	{cout<<endl<<2025;}
if (year[i]==2005)
	{cout<<endl<<2022;}
if (year[i]==2006)
	{cout<<endl<<2017;}
if (year[i]==2007)
	{cout<<endl<<2018;}
if (year[i]==2009)
	{cout<<endl<<2026;}
if (year[i]==2010)
	{cout<<endl<<2021;}

if (year[i]==2011&& month[i]<3)
	{cout<<endl<<2022;}

if (year[i]==2011&& month[i]>2)
	{cout<<endl<<2016;}
if (year[i]==2013)
	{cout<<endl<<2019;}
if (year[i]==2014)
	{cout<<endl<<2025;}
if (year[i]==2015&& month[i]<3)
	{cout<<endl<<2028;}
if (year[i]==2015 && month[i]>2)
	{cout<<endl<<2020;}

}


return 0;

}
