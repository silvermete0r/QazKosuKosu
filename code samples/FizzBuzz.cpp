#include "qaz_kosu_kosu.h"

/***
    Sample Qaz++ Code

    Problem: FizzBuzz
    Link: https://leetcode.com/problems/fizz-buzz/
***/

қолдану кеңістік стандартты_кіріспе;

вектор<жол> fizzBuzz(сан n) {
    вектор<жол> ans;
    үшін(сан i = 1; i <= n; i++) {
        егер(i % 3 == 0 && i % 5 == 0) {
            ans.артқа_қосу("FizzBuzz");
        }
        болмаса егер(i % 3 == 0) {
            ans.артқа_қосу("Fizz");
        }
        болмаса егер(i % 5 == 0) {
            ans.артқа_қосу("Buzz");
        }
        болмаса{
            ans.артқа_қосу(жолға(i));
        }
    }
    қайтару ans;
}

елбасы() {
    сан n;
    кіріс >> n;
    вектор<жол> ans = fizzBuzz(n);
    for (сан i = 0; i < n; i++) {
        шығыс << ans[i] << жаңа_жол;
    }
    қайтару 0;
}