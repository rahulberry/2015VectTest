
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <sstream>
#include <fstream>

using namespace std;

struct Fruit{
    string Name;
    int Count;
};

void MergeItems(const vector<Fruit>& WarehouseA, const vector<Fruit>& WarehouseB, vector<Fruit>& Result);
void OutVector(const vector<Fruit> Vector);

int main()
{
    Fruit Temp;
    vector<Fruit> WarehouseA, WarehouseB, Result;
    int i;
    ifstream WarehouseFile;
    string FileName;

    for(i = 0; i < 2; i++){
        cout<< "Please Input File Name;" << endl;
        cin >> FileName;

        WarehouseFile.open(FileName.c_str());
        if (!WarehouseFile.is_open()) {
            cout << "input file not found" << endl ;
            exit ( EXIT_FAILURE ) ;
        }
        else {
            while(WarehouseFile >> Temp.Name >> Temp.Count) {
                if(i == 0)
                WarehouseA.push_back(Temp);
                else if(i == 1)
                WarehouseB.push_back(Temp);
            }
            WarehouseFile.close();
        }
    }
    cout << "WarehouseA:" << endl;
    OutVector(WarehouseA);
    cout << endl << "WarehouseB:" << endl;
    OutVector(WarehouseB);
    MergeItems(WarehouseA, WarehouseB, Result);
    cout << endl << "Result:" << endl;
    OutVector(Result);

    return 0;
}

void MergeItems(const vector<Fruit>& WarehouseA, const vector<Fruit>& WarehouseB, vector<Fruit>& Result)
{
    unsigned int i = 0, j = 0;
    Fruit temp;

        do{
            if(WarehouseA[i].Name < WarehouseB[j].Name){
                Result.push_back(WarehouseA[i]);
                i++;
            }
            else if(WarehouseA[i].Name > WarehouseB[j].Name){
                Result.push_back(WarehouseB[j]);
                j++;
            }
            else{
                temp.Name = WarehouseA[i].Name;
                temp.Count = WarehouseA[i].Count + WarehouseB[j].Count;
                Result.push_back(temp);
                i++;
                j++;
            }
        }while(WarehouseA.size() > i && WarehouseB.size() > j);

        cout << endl << i << j << endl;

        if(WarehouseA.size() == i){
            for(i; j < WarehouseB.size(); j++){
                Result.push_back(WarehouseB[j]);
            }
        }
        else if(WarehouseB.size() == j){
            for(i; i < WarehouseA.size(); i++){
                Result.push_back(WarehouseA[i]);
            }
        }
}

void OutVector(const vector<Fruit> Vector)
{
    for(unsigned int i = 0; i < Vector.size(); i++){
        cout << Vector[i].Name << " " << Vector[i].Count << endl;
    }
}

