# Metoda Połowienia

## Opis zadania

Zadanie polega na zaprogramowaniu **metody połowienia** (zwanej również metodą bisekcji) do znajdowania miejsca zerowego funkcji ciągłej. Metoda ta opiera się na założeniu, że funkcja zmienia znak na końcach wybranego przedziału, co oznacza, że posiada **co najmniej jedno miejsce zerowe** w tym przedziale.

## Zasady działania metody połowienia

1. **Warunki początkowe**: Mamy funkcję ciągłą `f(x)` oraz przedział `a` i `b`, w którym funkcja zmienia znak, czyli \( f(a) \times f(b) < 0 \). Oznacza to, że funkcja ma co najmniej jedno miejsce zerowe w przedziale \([a, b]\).
   
2. **Podział przedziału**:
   - Obliczamy środek przedziału \( c = \frac{a + b}{2} \).
   - Sprawdzamy, w którym z podprzedziałów \( [a, c] \) lub \( [c, b] \) funkcja zmienia znak:
     - Jeśli \( f(a) \times f(c) < 0 \), miejsce zerowe znajduje się w przedziale \( [a, c] \).
     - Jeśli \( f(c) \times f(b) < 0 \), miejsce zerowe znajduje się w przedziale \( [c, b] \).
   - Odrzucamy ten podprzedział, w którym funkcja nie zmienia znaku.

3. **Kontynuacja**: Powtarzamy proces podziału, aż długość przedziału \( |b - a| \) będzie mniejsza od zadanej liczby \( \epsilon \), czyli dokładności rozwiązania.

4. **Wynik**: Miejsce zerowe funkcji to punkt \( c \), dla którego \( |f(c)| \) jest dostatecznie małe lub przedział jest wystarczająco wąski.

### Schemat działania metody:

1. Wejściowe wartości:
   - Przedział początkowy: \( [a, b] \)
   - Funkcja ciągła \( f(x) \)
   - Tolerancja (dokładność) \( \epsilon \)

2. Warunek początkowy: \( f(a) \times f(b) < 0 \)

3. Powtarzaj:
   - Oblicz \( c = \frac{a + b}{2} \)
   - Sprawdź znak \( f(a) \times f(c) \)
   - Odrzuć odpowiedni podprzedział
   - Zakończ, gdy \( |b - a| < \epsilon \)

## Wymagania

- Program powinien zawierać **minimum dwie funkcje**:
  1. Funkcję `f(x)`, której miejsca zerowego szukamy.
  2. Funkcję implementującą **metodę połowienia**.
- Zaimplementuj metodę połowienia również w wersji **rekurencyjnej**.
