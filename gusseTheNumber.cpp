#include <iostream>
using namespace std;

int main()
{
  int sequel[3][5] = {
    {2,4,6,8,10},
    {1,3,5,7,9},
    {2,4,16,32,64}
  };

int points = 0;
int answrs[3];
cout << "Q1 / type the messing number from the sequel : \n [2,4,6,8,...?]" << endl;
cin >> answrs[0];

if(answrs[0] == sequel[0][4]){
  points++;
  cout << "correct ! your score now is : " << points << "/3 " << endl;
} else{
  cout << "wrong answr ): your score is : " << points << "/3" << endl;
}

cout << "\n Q2 / type the messing number from the sequel : \n [1,3,5,7,...?]" << endl;
cin >> answrs[1];

if(answrs[1] == sequel[1][4]){
  points++;
  cout << "correct ! your score now is : " << points << "/3" << endl;
} else{
  cout << "wrong answr ): your score is : " << points << "/3" << endl;
}

cout << "\n Q3 / type the messing number from the sequel : \n [2,4,16,32,...?]" << endl;
cin >> answrs[2];

if(answrs[2] == sequel[2][4]){
  points++;
  cout << "correct !" << endl;
} else {
  cout << "wrong answr ): " << endl;
}

if(points == 3){
  cout << "Congrats ! you got 3/3 keep it up ! [:" << endl;
} else if(points == 2){
  cout << "you got 2/3 nice but you need more work |: " << endl;
} else if (points == 1) {
  cout << " you got 1/3 ? wtf " << endl;
} else {
  cout << " you got 0/3 are we dead ass atp ?" << endl;
}

return 0;
}
