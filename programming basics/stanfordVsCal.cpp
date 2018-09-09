#include <iostream>
int main() 
{
    int sScore;
    cout << "Stanford: How many points did they score? ";
    cin >> sScore;
    
    int cScore;
    cout<<"Cal: How many points did they score? ";
    cin>>cScore;
    
    if (sScore > cScore)
        cout << "Stanford won!" << endl;
    else if (cScore > sScore)
        cout << "Cal won!" << endl;
    else 
        cout << "Tie!" << endl;
    
    return 0;
}
