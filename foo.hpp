


#pragma once

#include "Human.hpp"
#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    using namespace std;

    for_each(people.begin(), people.end(), [](Human& ii){ii.birthday();} );

    vector<char>zwierzeta(people.size());
    auto i = people.rbegin();

      for(i; i!=people.rend(); i++){      
        if(i->isMonster()) {zwierzeta.push_back('n');}
        else {zwierzeta.push_back('y');}
        
    };
    return zwierzeta;
    
}


/*Twoim zadaniem jest napisanie w pliku `foo.hpp` funkcji `foo`, która:
Twoim zadaniem jest napisanie w pliku foo.hpp funkcji foo, która:

Przyjmuje przez referencję listę obiektów typu Human.
Zwraca wektor obiektów typu char.
Inkrementuje pole age wszystkich obiektów w podanej liście poprzez zawołanie metody birthday.
Do zwracanego wektora wpisuje znaki y lub n (yes/no) w zależności od tego, czy dana osoba lubi co najmniej jedno ze zbioru zwierząt {pies, kot} (y jeżeli tak, n jeżeli nie).
Kolejność znaków powinna być odwrotna od kolejności osób. Do sprawdzenia warunku użyj metody isMonster. Innymi słowy, jeżeli metoda isMonster i-tej osoby na liście zwróci wartość true, to (n - i)-ty element zwracanego wektora powinien mieć wartość n

Użycie pętli for jest niedozwolone. Do zaliczenia zadania wykorzystaj algorytmy std::for_each lub std::transform (lub inne, jeżeli uznasz to za stosowne). Zadanie można wykonać dopisując 2 linijki (choć druga będzie zapewne dość długa)!
*/