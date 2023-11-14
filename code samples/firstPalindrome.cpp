﻿#include "qaz_kosu_kosu.h"

/***
    Sample Qaz++ Code

    Problem: Find First Palindromic String in the Array
    Link: https://leetcode.com/problems/find-first-palindromic-string-in-the-array/
***/

қолдану кеңістік стандартты_кіріспе;

тексеріс бұлПалиндром(жол сөз) {
    string төңкерілген_сөз = сөз;
    төңкеру(барлығы(төңкерілген_сөз));
    return сөз == төңкерілген_сөз;
}

жол firstPalindrome(вектор<жол>& сөздер) {
    үшін(жол & сөз : сөздер) {
        егер(бұлПалиндром(сөз)) қайтару сөз;
    }
    қайтару "";
}

елбасы() {
    вектор<жол> test1 = { "abc", "car", "ada", "racecar", "cool" };
    вектор<жол> test2 = { "notapalindrome", "racecar" };
    вектор<жол> test3 = { "def", "ghi" };

    шығыс << firstPalindrome(test1) << жаңа_жол;
    шығыс << firstPalindrome(test2) << жаңа_жол;
    шығыс << firstPalindrome(test3) << жаңа_жол;

    қайтару 0;
}