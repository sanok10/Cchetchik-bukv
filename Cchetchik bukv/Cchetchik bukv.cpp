// Cchetchik bukv.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <cstdlib>  

using namespace std;

int main()
{
    std::system("chcp 1251");
    //setlocale(LC_ALL, "Russian");
    float a = 0;
    float b = 0;
    float v = 0;
    float g = 0;
    float d = 0;
    float e = 0;
    float ee = 0;
    float j = 0;
    float z = 0;
    float i = 0;
    float k = 0;
    float l = 0;
    float m = 0;
    float n = 0;
    float o = 0;
    float p = 0;
    float r = 0;
    float s = 0;
    float t = 0;
    float f = 0;
    float h = 0;
    float c = 0;
    float ch = 0;
    float y = 0;
    float cha = 0;
    float znak = 0;
    float ii = 0;
    float ie = 0;
    float u = 0;
    float ia = 0;
    float iii = 0;

    string intext;
    long int totalNums = 0;
    ifstream file_in;
    file_in.open("W:\\posled.txt");
    //file_in.open("W:\\1yceba\\big hentai collection (6 sem)\\Automat.jff");
    if (!file_in)
    {
        std::cout << "Проблемы с открытием файла";
    }
    else
    {
        std::cout << "Файл открыт!\n";
    }
    while (!file_in.eof()) // основной цикл
    {
        //string  stroka;
        getline(file_in, intext);
        cout << intext << "\n";
        cout << intext.size() << "\n";
       // intext += stroka;
        
   
    for (int sch = 0; sch < intext.size()+1; sch++)
    {
        if (intext[sch] == 'А')
        {
            a++;
            totalNums++;
        }
        if (intext[sch] == 'Б')
        {
            b++;
            totalNums++;
        }
        if (intext[sch] == 'В')
        {
            v++;
            totalNums++;
        }
        if (intext[sch] == 'Г')
        {
            g++;
            totalNums++;
        }
        if (intext[sch] == 'Д')
        {
            d++;
            totalNums++;
        }
        if (intext[sch] == 'Е')
        {
            e++;
            totalNums++;
        }
        if (intext[sch] == 'Ё')
        {
            ee++;
            totalNums++;
        }
        if (intext[sch] == 'Ж')
        {
            j++;
            totalNums++;
        }
        if (intext[sch] == 'З')
        {
            z++;
            totalNums++;
        }
        if (intext[sch] == 'И')
        {
            i++;
            totalNums++;
        }
        if (intext[sch] == 'Й')
        {
            iii++;
            totalNums++;
        }
        if (intext[sch] == 'К')
        {
            k++;
            totalNums++;
        }
        if (intext[sch] == 'Л')
        {
            l++;
            totalNums++;
        }
        if (intext[sch] == 'М')
        {
            m++;
            totalNums++;
        }
        if (intext[sch] == 'Н')
        {
            n++;
            totalNums++;
        }
        if (intext[sch] == 'О')
        {
            o++;
            totalNums++;
        }
        if (intext[sch] == 'П')
        {
            p++;
            totalNums++;
        }
        if (intext[sch] == 'Р')
        {
            r++;
            totalNums++;
        }
        if (intext[sch] == 'С')
        {
            s++;
            totalNums++;
        }
        if (intext[sch] == 'Т')
        {
            t++;
            totalNums++;
        }
        if (intext[sch] == 'У')
        {
            y++;
            totalNums++;
        }
        if (intext[sch] == 'Ф')
        {
            f++;
            totalNums++;
        }
        if (intext[sch] == 'Х')
        {
            h++;
            totalNums++;
        }
        if (intext[sch] == 'Ч')
        {
            ch++;
            totalNums++;
        }
        if (intext[sch] == 'Ц')
        {
            c++;
            totalNums++;
        }
        if (intext[sch] == 'Щ')
        {
            cha++;
            totalNums++;
        }
        if (intext[sch] == 'Ь' or intext[sch] == 'Ъ')
        {
            znak++;
            totalNums++;
        }
        if (intext[sch] == 'Ы')
        {
            ii++;
            totalNums++;
        }
        if (intext[sch] == 'Э')
        {
            ie++;
            totalNums++;
        }
        if (intext[sch] == 'Ю')
        {
            u++;
            totalNums++;
        }
        if (intext[sch] == 'Я')
        {
            ia++;
            totalNums++;
        }


        else
        {
            
        }
    }
    }
   if (totalNums > 0 )
    {
       totalNums += 1;
        cout << "A = " << a / totalNums << "\n";
        cout << "Б = " << b / totalNums << "\n";
        cout << "В = " << v / totalNums << "\n";
        cout << "Г = " << g / totalNums << "\n";
        cout << "Д = " << d / totalNums << "\n";
        cout << "Е = " << e / totalNums << "\n";
        cout << "Ё = " << ee / totalNums << "\n";
        cout << "Ж = " << j / totalNums << "\n";
        cout << "З = " << z / totalNums << "\n";
        cout << "И = " << i / totalNums << "\n";
        cout << "Й = " << ii / totalNums << "\n";
        cout << "К = " << k / totalNums << "\n";
        cout << "Л = " << l / totalNums << "\n";
        cout << "М = " << m / totalNums << "\n";
        cout << "Н = " << n / totalNums << "\n";
        cout << "О = " << o / totalNums << "\n";
        cout << "П = " << p / totalNums << "\n";
        cout << "Р = " << r / totalNums << "\n";
        cout << "С = " << s / totalNums << "\n";
        cout << "Т = " << t / totalNums << "\n";
        cout << "Ф = " << f / totalNums << "\n";
        cout << "Х = " << h / totalNums << "\n";
        cout << "Ц = " << c / totalNums << "\n";
        cout << "Ч = " << ch / totalNums << "\n";
        cout << "Щ = " << cha / totalNums << "\n";
        cout << "Ъ/Ь = " << znak / totalNums << "\n";
        cout << "Ы = " << iii / totalNums << "\n";
        cout << "Э = " << ie / totalNums << "\n";
        cout << "Ю = " << u / totalNums << "\n";
        cout << "Я = " << ia / totalNums << "\n";
        cout << "Всего букв " << totalNums << "\n";
    }
   else 
   {
       cout << "Некорректная/пустая последовательность \n";
   }


}
