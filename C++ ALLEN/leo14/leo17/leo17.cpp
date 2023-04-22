//Leonardo Schneider
//Lab 6B - Box Scores Using Dual Array
#include <iostream>
#include <array>

int const ROW=2, COL=3;

void drawBoard(void);
void printScore(int team[ROW][COL]);
void getScores(int team[ROW][COL]);

using namespace std;

int main()
{
    int teams[ROW][COL];
    
    getScores(teams);
    drawBoard();
    printScore(teams);
    
    return 0;
}

void drawBoard(void){
    cout << "\n R" << " " << "H" << " " << "E" << endl;
    cout << " -----" << endl;
}

void printScore(int teams[][COL]){
    for (unsigned int row{0}; row < ROW; ++row){
        cout << "Team " << row+1 << ": ";
        for (unsigned int col{0}; col < COL; ++col){
            cout << teams[row][col] << " " ;
        }
        cout << endl;
    }
}

void getScores(int teams[][COL]){
    int R{0}, H{0}, E{0};
    for (unsigned int row{0}; row < ROW; ++row){
        for(unsigned int col{0}; col < COL; ++col){
            cout << "\nTeam " << row+1 << " Box Scores" << endl;
            cout << "Runs: ";
            cin >> R;
            teams[row][col++]=R;
            cout << "Hits: ";
            cin >> H;
            teams[row][col++]=H;
            cout << "Errors: ";
            cin >> E;
            teams[row][col++]=E;
        } // end col
    } // end row
}
