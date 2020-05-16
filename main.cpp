#include <iostream>
#include <vector>

using namespace std;

void TestVector();

int main(){
    TestVector();
}

void TestVector()
{
    int c = 0, kilk = 0;
    vector<int> v;


    cout << "Введіть кількість ваших елементів" << endl;
    cin >> kilk;
    cout << "Введіть елементи" << endl;
    for(int i = 0; i<kilk; i++){
    cin >> c;
    v.push_back(c);
    }
    cout << "\nРозмір: " << v.size()  << endl;
    
    int sum_of_elems = 0;
    vector<int>::iterator iter;
    for(std::vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
    sum_of_elems += *iter;
    cout << "\nСума: " << sum_of_elems << "\n" << endl;


    cout << "Елементи: " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << "[" << i << "] = " << v[i] << endl;
    }


    cout << "Видалення елементів з масиву  "  << endl;
    while (!v.empty())
    {
        int item = v.back();
        cout << item << endl;
        v.pop_back();
    }


}
