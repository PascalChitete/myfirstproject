#include <iostream>
using namespace std::;
int main(){
    int rows, column;
    cout<< " ENTER THE NUMBER OF ROWS" <<endl;
    cin >> rows;

}
cout << "ENTER THE NUMBER OF column"endl;
cin column;
while( column < 0 && column > 3) {
    cout << " the number of column is out of range. enter another number "endl;
    cin >> column;
}
double ** array = new double* [rows];
for(int i = 0; i<rows; i++){
    array[i] = new double [column];
}
cout << "start inputing the values"<<endl;
for(int = 0; i < rows; i++) {
    for(int j = 0; j <column; j++){
        cin >> array[1][1]<< " ";

    }
    cout << endl;
}
for(int i = 0; i < rows; i++){
    delete[] array[i];
}
delete[] array;
return 0;
}
