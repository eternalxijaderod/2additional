#include <iostream>
int KakoyDenNedeli0101(int year)
{
    short a = year%28;
    if(a == 2 || a == 13 || a==7 || a == 8)
        return 0;
    else if (a == 25 || a == 3 || a == 14 || a == 20)
        return 1;
    else if (a == 26 || a == 9 || a == 15 || a == 4)
        return 2;
    else if (a == 27 || a == 10 || a == 21 || a == 16)
        return 3;
    else if (a == 5 || a == 11 || a == 22 || a == 0)
        return 4;
    else if (a == 6 || a == 17 || a == 23 || a == 12)
        return 5;
    else
        return 6;
}

bool VysokosLi(int year)
{
    if(year%400 == 0 || year % 4 == 0 && year % 100 !=0)
    {
        //std::cout << "Год високосный" << std::endl;
        return 1;
    }
    else
    {
        //std::cout << "Год невисокосный" << std::endl;
        return 0;
    }
}

int main() {
    //system("chcp 65001");
    int year = 0;
    int skolkoDneyVGodu;
    int nomerDnya;
    std::cin >> year >> nomerDnya;
    int denNedeli0101 = KakoyDenNedeli0101(year);
    int denNedeliNuzhniy;


    bool vysokosLi = VysokosLi(year);
    if(vysokosLi == 1)
        skolkoDneyVGodu = 366;
    else
        skolkoDneyVGodu = 365;
    //std::cout << "В " << year << " году " << skolkoDneyVGodu << " дней" << std::endl;



        for (int i = year+1; ;i++)
        {
            if(vysokosLi == VysokosLi(i) && denNedeli0101 == KakoyDenNedeli0101(i))
            {
                std::cout << i << std::endl;
                break;
            }
        }
        //if (nomerDnya >= 60)
        //    denNedeliNuzhniy = nomerDnya % 7 + denNedeli0101 + vysokosLi;
        //else
        //    denNedeliNuzhniy = nomerDnya % 7 + denNedeli0101;
        //std::cout << denNedeliNuzhniy << std::endl;
    return 0;

}