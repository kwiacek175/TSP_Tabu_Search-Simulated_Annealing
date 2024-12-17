# TSP_Tabu_Search-Simulated_Annealing

Projekt implementuje dwa algorytmy optymalizacyjne: **Tabu Search** i **Simulated Annealing**, służące do rozwiązywania problemu komiwojażera (TSP - Traveling Salesman Problem). Użytkownik korzysta z programu za pomocą menu w konsoli, które umożliwia konfigurację parametrów, wczytywanie danych oraz uruchamianie algorytmów.

---

## Opis funkcjonalności

1. **Menu**: Interfejs użytkownika do konfiguracji parametrów, wczytywania danych grafu i uruchamiania algorytmów.  
2. **SimulatedAnnealing**: Implementacja algorytmu wyżarzania symulowanego (Simulated Annealing) do rozwiązywania TSP.  
3. **TabuSearch**: Implementacja algorytmu Tabu Search do rozwiązywania TSP.  
4. **Graph**: Obsługa reprezentacji grafu i operacji, takich jak wczytywanie danych z pliku.

---

## Funkcje programu

- **Konfiguracja parametrów algorytmów**:
  - Ustawienie czasu wykonywania algorytmów.
  - Dostosowanie współczynnika chłodzenia dla wyżarzania symulowanego.
- **Wczytywanie danych grafu**:
  - Możliwość wczytania danych grafu problemu TSP z pliku w folderze `data/`.
- **Uruchamianie algorytmów**:
  - Wykonanie algorytmu Tabu Search w celu znalezienia rozwiązania zbliżonego do optymalnego.
  - Wykonanie algorytmu Simulated Annealing z podanymi parametrami.

---

## Obsługa

### Opcje menu

1. **Wprowadź czas wykonywania**  
   Umożliwia ustawienie czasu (w sekundach), przez jaki będą działać algorytmy. Parametr ten jest wymagany zarówno dla Tabu Search, jak i Simulated Annealing.  

2. **Wprowadź współczynnik dT**  
   Ustawia współczynnik chłodzenia dla algorytmu Simulated Annealing. Parametr ten jest wymagany do uruchomienia wyżarzania symulowanego.  

3. **Wczytaj graf**  
   Pozwala na podanie nazwy pliku z danymi grafu. Plik powinien znajdować się w folderze `data/`. Format danych musi być poprawny.  

4. **Uruchom Tabu Search**  
   Rozpoczyna działanie algorytmu Tabu Search. Wymagane jest wcześniejsze ustawienie czasu wykonywania oraz wczytanie danych grafu.  

5. **Uruchom Simulated Annealing**  
   Rozpoczyna działanie algorytmu Simulated Annealing. Wymagane jest wcześniejsze ustawienie czasu wykonywania, współczynnika dT oraz wczytanie danych grafu.  

6. **Zakończ program**  
   Kończy działanie programu.

---

## Struktura projektu

- **Menu**: `ui/Menu.h`, `ui/Menu.cpp`  
- **Algorytmy**:  
  - `algorithms/TabuSearch.h`, `algorithms/TabuSearch.cpp`  
  - `algorithms/SimulatedAnnealing.h`, `algorithms/SimulatedAnnealing.cpp`  
- **Graf**: `Graph.h`, `Graph.cpp`  
- **Dane wejściowe**: Folder `data/` zawierający pliki z opisem grafu TSP.

---

## Wymagania systemowe

- Kompilator obsługujący standard C++11 lub nowszy.
- System operacyjny Windows (ze względu na użycie `Windows.h`).
- Pliki z grafem w formacie obsługiwanym przez klasę `Graph`.

