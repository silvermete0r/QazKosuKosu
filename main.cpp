/* Internal Qaz++ Definition */

/*** 
~ External definition as a library would be: #include "qaz_kosu_kosu.h" ~

Qaz++ is a programming language based on C++ that allows 
Kazakh-speaking programmers to write code in their native language.

Version: Qaz++ v1.0
License: MIT;
Author: Silvermete0r, 2023;
Github: https://github.com/silvermete0r/QazKosuKosu.git
***/

/*--- Start ---*/
/*--- Don't touch & edit! ---*/
/* Include the necessary libraries */
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

/* Main keywords settings using macros definitions */
/** general keywords **/
#define елбасы int main
#define қолдану using
#define кеңістік namespace
#define стандартты_кіріспе std
#define шығыс std::cout
#define кіріс std::cin
#define қайтару return
#define егер if
#define болмаса else

/** conditional and cyclic keywords **/
#define істеу do
#define болғанша while
#define үшін for
#define тоқтау break
#define жалғастыру continue
#define қосқыш switch
#define жағдай case
#define әдепкі default

/** constants definition **/
#define сәтті_күн good
#define сәтсіз_күн fail
#define ақиқат true
#define жалған false
#define белгісіздік nullptr
#define дым NULL
#define EXP 1e9
#define MOD 1e7
#define PI 3.1415926535897932384626433832795
#define ірі_сан INT_MAX
#define кіші_сан INT_MIN

/** structural keywords & functions definition **/
#define өшіру delete
#define жаңа new
#define жаңа_жол endl
#define кездейсоқ random
#define тұрақты const
#define дәреже pow
#define жуықтау round
#define модуль abs
#define түбір sqrt
#define ұзындығы size
#define лақтыру throw
#define ерекшелік exception
#define дос friend
#define бару goto
#define үлгі template
#define түраты typename
#define жеке private
#define халықаралық public
#define мемлекеттік protected
#define сызық_бойында inline
#define статикалық static
#define таңбасыз unsigned
#define тырысу try
#define ұстау catch
#define ашу open
#define жабу close
#define өзің_шеш auto
#define сырттай_өзгерту static_cast
#define шың peek
#define ауыстыру std::swap
#define алу get
#define қатар_алу getline
#define сұрыптау std::sort
#define жолға to_string
#define санға stoi
#define сынып class
#define құрылыс struct
#define санақ enum

/** data structures definition **/
#define сұрыпталмаған_жинақ unordered_set
#define сұрыпталмаған_карта unordered_map
#define вектор vector
#define вектор_сан vector<int>
#define вектор_сан_сан vector<int, int>
#define жұп_сан pair<int, int>
#define жұп_ұзын pair<long long, long long>
#define карта_сан map<int, int>
#define жинақ_сан set<int>
#define жинақ_таңба set<char>
#define артқа_қосу push_back
#define артқа_орналастыру emplace_back
#define жұптау make_pair
#define барлығы(x) (x).begin(), (x).end()

/** file operations definition **/
#define ФайлШығысКіріс freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define файл_аяқтау eof
#define шығыс_кіріспе ostream
#define кіріс_кіріспе istream
#define файл_оқу ifstream
#define файл_жазу ofstream
#define файл_оқу_жазу fstream

/** data types definition **/
қолдану сан = int;
қолдану бөлшек_сан = double;
қолдану үтір_сан = float;
қолдану таңба = char;
қолдану жол = стандартты_кіріспе::string;
қолдану ештеңе = void;
қолдану қысқа = short;
қолдану ұзын = long;
қолдану өте_ұзын = long long;
қолдану тексеріс = bool;

/** useful functions definition **/

өте_ұзын кішісі(өте_ұзын x, өте_ұзын y) {
    егер(x < y) қайтару x;
    қайтару y;
}

өте_ұзын үлкені(өте_ұзын x, өте_ұзын y) {
    егер(x > y) қайтару x;
    қайтару y;
}

өте_ұзын ең_үлкен_ортақ_бөлгіш(өте_ұзын x, өте_ұзын y) {
    егер(y == 0) қайтару x;
    қайтару ең_үлкен_ортақ_бөлгіш(y, x % y);
}

өте_ұзын ең_кіші_ортақ_еселік(өте_ұзын x, өте_ұзын y) {
    қайтару x / ең_үлкен_ортақ_бөлгіш(x, y) * y;
}

жол үлкенге(жол x) {
    үшін(сан i = 0; i < (сан)x.ұзындығы(); ++i) {
        егер(x[i] >= 'a' && x[i] <= 'z') x[i] -= 'a' - 'A';
    }
    қайтару x;
}

жол кішіге(жол x) {
    үшін(сан i = 0; i < (сан)x.ұзындығы(); ++i) {
        егер(x[i] >= 'A' && x[i] <= 'Z') x[i] += 'a' - 'A';
    }
    қайтару x;
}

тексеріс жәй_сан(өте_ұзын x) {
    егер(x == 1) қайтару 0;
    үшін(сан i = 2; i <= жуықтау(түбір(x)); ++i) {
        егер(x % i == 0) қайтару 0;
    }
    қайтару 1;
}

үлгі<түраты T>
ештеңе тез_сұрыптау(стандартты_кіріспе::вектор<T>& arr, сан l, сан r) {
    егер(l < r) {
        T pivot = arr[(l + r) / 2];
        сан i = l;
        сан j = r;

        болғанша(i <= j) {
            болғанша(arr[i] < pivot) {
                i++;
            }
            болғанша(arr[j] > pivot) {
                j--;
            }
            егер(i <= j) {
                ауыстыру(arr[i], arr[j]);
                i++;
                j--;
            }
        }

        егер(l < j) {
            тез_сұрыптау(arr, l, j);
        }
        егер(i < r) {
            тез_сұрыптау(arr, i, r);
        }
    }
}

үлгі<түраты T>
ештеңе тез_сұрыптау(стандартты_кіріспе::вектор<T>& arr) {
    тез_сұрыптау(arr, 0, arr.ұзындығы() - 1);
}

ештеңе иә() { шығыс << "ИӘ\n"; }
ештеңе жоқ() { шығыс << "ЖОҚ\n"; }
/*--- Don't touch & edit! ---*/
/*--- End ---*/

/* Sample Qaz++ Code */
қолдану кеңістік стандартты_кіріспе;

елбасы() {
    // Кодты мында енгізіңіз

    // Тез cұрыптау функциясының қолданылу мысалы
    вектор_сан v = { 9, 7, 2, 3, 700, 0, -91, 91, 10, -5 };
    тез_сұрыптау(v);
    үшін(сан i = 0; i < v.ұзындығы(); i++) {
        шығыс << v[i] << " ";
    }

    қайтару 0;
}