#include <iostream>
#include <vector>

using namespace std;

void insertionSort(int sizeA, int sizeB, vector <int>& vA, vector <int>& vB) {
    for (int i = 0; i < sizeB; i++) {
        int key = vB[i];
        int j = 0;

        // Ищем правильную позицию для вставки элемента из vB
        while (j < sizeA && vA[j] < key) {
            j++;
        }

        // Вставляем элемент на нужную позицию
        vA.insert(vA.begin() + j, key);

        // Увеличиваем размер массива A, т.к. добавили элемент
        sizeA++;
    }
}

int main() {
	vector <int> v = { -4,0,0,3,3,4,0,0,0 };
	vector <int> v2 = { 1,2,7 };
	int n = 6;
	int m = 3;
	
	insertionSort(n, m, v, v2);

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << "  ";
	}
}