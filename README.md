# cpp-podstawy

Zbiór programów w C++ napisanych w trakcie pierwszego roku studiów (Informatyczne Systemy Automatyki, Politechnika Wrocławska). Programy są konsolowe i pokazują kolejne zagadnienia: od instrukcji warunkowych, przez tablice i napisy, po wskaźniki, listę jednokierunkową i pracę z plikami.

Większy projekt (system listy obecności w C++ z klasami, dziedziczeniem i interfejsami) jest w osobnym repozytorium.

## Zawartość

| Folder | Zagadnienia | Programy |
|---|---|---|
| `podstawy/` | zmienne, `if`, operatory, `cmath` | pole kwadratu, objętość kuli, reszta z dzielenia, pierwiastek, parzystość, podzielność, rok przestępny, sprawdzanie zakresu, sortowanie czterech liczb |
| `warunki-i-petle/` | `if / else`, `switch`, pętle, funkcje | kalkulator, równanie kwadratowe, gra w zgadywanie (tryb człowieka i komputera), suma liczb z zakresu, prostokąty z liter `X` |
| `tablice-i-funkcje/` | tablice, `vector`, funkcje, losowanie | operacje na tablicy (suma, maksimum, losowanie, zapis binarny), największa liczba, kwadraty liczb, liczby występujące raz |
| `napisy/` | `std::string`, tablice `char` | operacje na `string`, histogram liter, tablica `char` |
| `wskazniki-i-referencje/` | wskaźniki, referencje, pamięć dynamiczna | przekazywanie przez kopię, referencję i wskaźnik; lista jednokierunkowa |
| `pliki-i-struktury/` | `struct`, `vector`, `fstream` | baza studentów (dodawanie, usuwanie, wyszukiwanie, zapis i odczyt), baza graczy |

## Kompilacja

Każdy program to osobny plik z funkcją `main`:

```
g++ -std=c++17 -Wall -Wextra napisy/histogram-liter.cpp -o histogram-liter
./histogram-liter
```

Wszystkie programy kompilują się w g++ 13 z flagami `-std=c++17 -Wall -Wextra -pedantic` bez ostrzeżeń.
